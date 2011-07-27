/*
C Datei für die Einbindung eines ArduIMU's
Autoren@ZHAW: schmiemi
chaneren

Reworked by S.Joyce, SmartPlanes AB
*/


#include "modules/ins/ins_arduimu.h"
#include "estimator.h"
#include "gps.h"
#include "downlink.h"
#include "messages.h"

#ifndef ARDUIMU_I2C_DEV
#define ARDUIMU_I2C_DEV i2c0
#endif

#define ArduIMU_SLAVE_ADDR 0x22

#ifndef DOWNLINK_DEVICE
#define DOWNLINK_DEVICE DOWNLINK_AP_DEVICE
#endif


// Local variables

struct i2c_transaction ardu_ins_trans, ardu_gps_trans;

int32_t GPS_Data[4];

static int16_t recievedData[NB_DATA];
float ArduIMU_data[NB_DATA];

float ins_roll_neutral;
float ins_pitch_neutral;

void ArduIMU_init( void ) {

  ardu_ins_trans.status = I2CTransDone;
  ardu_gps_trans.status = I2CTransDone;


  ins_roll_neutral = INS_ROLL_NEUTRAL_DEFAULT;
  ins_pitch_neutral = INS_PITCH_NEUTRAL_DEFAULT;
}

void ArduIMU_periodic( void ) {

   if (ardu_ins_trans.status == I2CTransDone)
   {
     // Read next attitude values
     I2CReceive(ARDUIMU_I2C_DEV, ardu_ins_trans, ArduIMU_SLAVE_ADDR, 6);
   }

}

void ArduIMU_periodic_gps( void ) {

  if (ardu_gps_trans.status == I2CTransDone) {

      // get new gps data

      GPS_Data [0] = gps_gspeed; //ground speed
      GPS_Data [1] = gps_course * 10000; //course in deg*100000 as expected by arduIMU
      //status
      GPS_Data [2] = gps_mode; //fix
      GPS_Data [3] = gps_status_flags; //flags

      ardu_gps_trans.buf[0] = (uint8_t) GPS_Data[0]; //gspeed
      ardu_gps_trans.buf[1] = (uint8_t) (GPS_Data[0] >>8);
      ardu_gps_trans.buf[2] = (uint8_t) (GPS_Data[0] >>16);
      ardu_gps_trans.buf[3] = (uint8_t) (GPS_Data[0] >>24);
      ardu_gps_trans.buf[4] = (uint8_t) GPS_Data[1]; //gcourse
      ardu_gps_trans.buf[5] = (uint8_t) (GPS_Data[1] >>8);
      ardu_gps_trans.buf[6] = (uint8_t) (GPS_Data[1] >>16);
      ardu_gps_trans.buf[7] = (uint8_t) (GPS_Data[1] >>24);
      ardu_gps_trans.buf[8] = GPS_Data[2]; //status gps fix
      ardu_gps_trans.buf[9] = GPS_Data[3]; //status flags

      I2CTransmit(ARDUIMU_I2C_DEV, ardu_gps_trans, ArduIMU_SLAVE_ADDR, 10);

  }

}


void ardu_ins_event( void ) {
  ardu_ins_trans.status = I2CTransDone;
  // Read value

    recievedData[0] = (ardu_ins_trans.buf[1]<<8) | ardu_ins_trans.buf[0];
    recievedData[1] = (ardu_ins_trans.buf[3]<<8) | ardu_ins_trans.buf[2];
    recievedData[2] = (ardu_ins_trans.buf[5]<<8) | ardu_ins_trans.buf[4];

    ArduIMU_data[0] = (float) (recievedData[0] / (float)100.0);
    ArduIMU_data[1] = (float) (recievedData[1] / (float)100.0);
    ArduIMU_data[2] = (float) (recievedData[2] / (float)100.0);
 
    ardu_update_state_ins();

}

void ardu_gps_event( void ) {

      ardu_gps_trans.status = I2CTransDone;
}


void ardu_update_state_ins( void ) {

    estimator_phi = ArduIMU_data[0]*0.01745329252 - ins_roll_neutral;
    estimator_theta = ArduIMU_data[1]*0.01745329252 - ins_pitch_neutral;
    float psi = ArduIMU_data[2]*0.01745329252;

    RunOnceEvery(50, DOWNLINK_SEND_AHRS_EULER(DefaultChannel, &estimator_phi, &estimator_theta, &psi));
}





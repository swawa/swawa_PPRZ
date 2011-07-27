#ifndef ArduIMU_H
#define ArduIMU_H

#include "std.h"
#include "generated/airframe.h"
#include "mcu_periph/i2c.h"

#define NB_DATA 3

extern struct i2c_transaction ardu_ins_trans, ardu_gps_trans;

extern float ins_roll_neutral;
extern float ins_pitch_neutral;

extern void ArduIMU_init( void );
extern void ArduIMU_periodic( void );
extern void ArduIMU_periodic_gps( void ); // change this to event driven when new gps data is received
extern void ardu_ins_event( void );
extern void ardu_gps_event( void );
extern void ardu_update_state_ins( void );

#define ArduIMU_i2cEvent() { \
if (ardu_ins_trans.status == I2CTransSuccess) ardu_ins_event(); \
if (ardu_gps_trans.status == I2CTransSuccess) ardu_gps_event(); \
}

#endif // ArduIMU_H

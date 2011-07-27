/* This file has been generated from /home/excelobs/paparazzi/conf/airframes/KMUAV_XBee_Airspeed.xml */
/* Please DO NOT EDIT */

#ifndef AIRFRAME_H
#define AIRFRAME_H 

#define AIRFRAME_NAME "KMUAV_XBee"
#define AC_ID 4
#define MD5SUM ((uint8_t*)"\075\123\245\157\011\123\156\062\033\341\320\300\362\360\232\067")

#define SERVOS_NB 4

#define SERVO_MOTOR 0
#define SERVO_MOTOR_NEUTRAL 1290
#define SERVO_MOTOR_TRAVEL_UP 0.0541666666667
#define SERVO_MOTOR_TRAVEL_DOWN 0
#define SERVO_MOTOR_MAX 1810
#define SERVO_MOTOR_MIN 1290

#define SERVO_AILEVON_LEFT 1
#define SERVO_AILEVON_LEFT_NEUTRAL 1510
#define SERVO_AILEVON_LEFT_TRAVEL_UP -0.053125
#define SERVO_AILEVON_LEFT_TRAVEL_DOWN -0.0510416666667
#define SERVO_AILEVON_LEFT_MAX 2000
#define SERVO_AILEVON_LEFT_MIN 1000

#define SERVO_AILEVON_RIGHT 3
#define SERVO_AILEVON_RIGHT_NEUTRAL 1535
#define SERVO_AILEVON_RIGHT_TRAVEL_UP 0.0484375
#define SERVO_AILEVON_RIGHT_TRAVEL_DOWN 0.0557291666667
#define SERVO_AILEVON_RIGHT_MAX 2000
#define SERVO_AILEVON_RIGHT_MIN 1000

#define SERVO_ELEVATOR 1
#define SERVO_ELEVATOR_NEUTRAL 1510
#define SERVO_ELEVATOR_TRAVEL_UP -0.053125
#define SERVO_ELEVATOR_TRAVEL_DOWN -0.0510416666667
#define SERVO_ELEVATOR_MAX 2000
#define SERVO_ELEVATOR_MIN 1000

#define SERVO_RUDDER 3
#define SERVO_RUDDER_NEUTRAL 1535
#define SERVO_RUDDER_TRAVEL_UP 0.0484375
#define SERVO_RUDDER_TRAVEL_DOWN 0.0557291666667
#define SERVO_RUDDER_MAX 2000
#define SERVO_RUDDER_MIN 1000


#define COMMAND_THROTTLE 0
#define COMMAND_ROLL 1
#define COMMAND_PITCH 2
#define COMMANDS_NB 3
#define COMMANDS_FAILSAFE {0,0,0}


#define SetCommandsFromRC(_commands_array, _rc_array) { \
  _commands_array[COMMAND_THROTTLE] = _rc_array[RADIO_THROTTLE];\
  _commands_array[COMMAND_ROLL] = _rc_array[RADIO_ROLL];\
  _commands_array[COMMAND_PITCH] = _rc_array[RADIO_PITCH];\
}

#define SECTION_MIXER 1
#define AILEVON_AILERON_RATE 0.75
#define AILEVON_ELEVATOR_RATE 0.75

#define SetActuatorsFromCommands(values) { \
  uint32_t servo_value;\
  float command_value;\
  int16_t _var_aileron = values[COMMAND_ROLL]  * AILEVON_AILERON_RATE;\
  int16_t _var_elevator = values[COMMAND_PITCH] * AILEVON_ELEVATOR_RATE;\
  command_value = values[COMMAND_THROTTLE];\
  command_value *= command_value>0 ? SERVO_MOTOR_TRAVEL_UP : SERVO_MOTOR_TRAVEL_DOWN;\
  servo_value = SERVO_MOTOR_NEUTRAL + (int32_t)(command_value);\
  actuators[SERVO_MOTOR] = ChopServo(servo_value, SERVO_MOTOR_MIN, SERVO_MOTOR_MAX);\
\
  Actuator(SERVO_MOTOR) = SERVOS_TICS_OF_USEC(actuators[SERVO_MOTOR]);\
\
  command_value = _var_elevator + _var_aileron;\
  command_value *= command_value>0 ? SERVO_AILEVON_LEFT_TRAVEL_UP : SERVO_AILEVON_LEFT_TRAVEL_DOWN;\
  servo_value = SERVO_AILEVON_LEFT_NEUTRAL + (int32_t)(command_value);\
  actuators[SERVO_AILEVON_LEFT] = ChopServo(servo_value, SERVO_AILEVON_LEFT_MIN, SERVO_AILEVON_LEFT_MAX);\
\
  Actuator(SERVO_AILEVON_LEFT) = SERVOS_TICS_OF_USEC(actuators[SERVO_AILEVON_LEFT]);\
\
  command_value = _var_elevator - _var_aileron;\
  command_value *= command_value>0 ? SERVO_AILEVON_RIGHT_TRAVEL_UP : SERVO_AILEVON_RIGHT_TRAVEL_DOWN;\
  servo_value = SERVO_AILEVON_RIGHT_NEUTRAL + (int32_t)(command_value);\
  actuators[SERVO_AILEVON_RIGHT] = ChopServo(servo_value, SERVO_AILEVON_RIGHT_MIN, SERVO_AILEVON_RIGHT_MAX);\
\
  Actuator(SERVO_AILEVON_RIGHT) = SERVOS_TICS_OF_USEC(actuators[SERVO_AILEVON_RIGHT]);\
\
  ActuatorsCommit();\
}

#define AllActuatorsInit() { \
  ActuatorsInit();\
}

#define SECTION_AUTO1 1
#define AUTO1_MAX_ROLL 0.7
#define AUTO1_MAX_PITCH 0.6

#define SECTION_INFRARED 1
#define IR_ADC_IR1_NEUTRAL 512
#define IR_ADC_IR2_NEUTRAL 512
#define IR_ADC_TOP_NEUTRAL 512
#define IR_LATERAL_CORRECTION 1.
#define IR_LONGITUDINAL_CORRECTION 1.
#define IR_VERTICAL_CORRECTION 1.5
#define IR_HORIZ_SENSOR_TILTED 1
#define IR_IR2_SIGN -1
#define IR_TOP_SIGN -1
#define IR_ROLL_NEUTRAL_DEFAULT -3.6
#define IR_PITCH_NEUTRAL_DEFAULT 5
#define IR_CORRECTION_UP 1.
#define IR_CORRECTION_DOWN 1.
#define IR_CORRECTION_LEFT 1.
#define IR_CORRECTION_RIGHT 1.

#define SECTION_GYRO 1
#define GYRO_ADC_ROLL_NEUTRAL 500
#define GYRO_DYNAMIC_RANGE 300
#define GYRO_ADXRS300_RESISTOR_BRIDGE (3.3/(3.3+1.8))
#define GYRO_ADXRS300_SENSITIVITY 5
#define GYRO_ROLL_SCALE 3.3*1000./1024./(GYRO_ADXRS300_SENSITIVITY*GYRO_ADXRS300_RESISTOR_BRIDGE)
#define GYRO_ROLL_DIRECTION 1.

#define SECTION_BAT 1
#define MILLIAMP_AT_FULL_THROTTLE 2000
#define CATASTROPHIC_BAT_LEVEL 11.0
#define CRITIC_BAT_LEVEL 11.1
#define LOW_BAT_LEVEL 11.2
#define MAX_BAT_LEVEL 11.4

#define SECTION_MISC 1
#define NOMINAL_AIRSPEED 13.
#define CARROT 4.
#define KILL_MODE_DISTANCE (2.0*MAX_DIST_FROM_HOME)
#define CONTROL_RATE 60
#define ALT_KALMAN_ENABLED TRUE
#define DEFAULT_CIRCLE_RADIUS 80.
#define GLIDE_AIRSPEED 10
#define GLIDE_VSPEED 3.
#define GLIDE_PITCH 45

#define SECTION_VERTICAL CONTROL 1
#define V_CTL_POWER_CTL_BAT_NOMINAL 11.1
#define V_CTL_ALTITUDE_PGAIN -0.03
#define V_CTL_ALTITUDE_MAX_CLIMB 4.
#define V_CTL_AUTO_THROTTLE_NOMINAL_CRUISE_THROTTLE 0.32
#define V_CTL_AUTO_THROTTLE_MIN_CRUISE_THROTTLE 0.25
#define V_CTL_AUTO_THROTTLE_MAX_CRUISE_THROTTLE 0.65
#define V_CTL_AUTO_THROTTLE_LOITER_TRIM 1500
#define V_CTL_AUTO_THROTTLE_DASH_TRIM -4000
#define V_CTL_AUTO_THROTTLE_CLIMB_THROTTLE_INCREMENT 0.15
#define V_CTL_AUTO_THROTTLE_PGAIN -0.01
#define V_CTL_AUTO_THROTTLE_IGAIN 0.1
#define V_CTL_AUTO_THROTTLE_PITCH_OF_VZ_PGAIN 0.05
#define V_CTL_THROTTLE_SLEW_LIMITER 2
#define V_CTL_AUTO_AIRSPEED_SETPOINT 13.0
#define V_CTL_AUTO_AIRSPEED_PGAIN 0.060
#define V_CTL_AUTO_AIRSPEED_IGAIN 0.050
#define V_CTL_AUTO_GROUNDSPEED_SETPOINT 7.0
#define V_CTL_AUTO_GROUNDSPEED_PGAIN 0.75
#define V_CTL_AUTO_GROUNDSPEED_IGAIN 0.25
#define V_CTL_AUTO_PITCH_PGAIN -0.125
#define V_CTL_AUTO_PITCH_IGAIN 0.025
#define V_CTL_AUTO_PITCH_MAX_PITCH 0.25
#define V_CTL_AUTO_PITCH_MIN_PITCH -0.25
#define V_CTL_THROTTLE_SLEW 1.0

#define SECTION_HORIZONTAL CONTROL 1
#define H_CTL_COURSE_PGAIN -1.4
#define H_CTL_ROLL_MAX_SETPOINT 0.6
#define H_CTL_PITCH_MAX_SETPOINT 0.5
#define H_CTL_PITCH_MIN_SETPOINT -0.5
#define H_CTL_PITCH_PGAIN -12000.
#define H_CTL_PITCH_DGAIN 1.5
#define H_CTL_ELEVATOR_OF_ROLL 1250
#define H_CTL_ROLL_SLEW 0.1
#define H_CTL_ROLL_ATTITUDE_GAIN -7500
#define H_CTL_ROLL_RATE_GAIN -1500

#define SECTION_AGGRESSIVE 1
#define AGR_BLEND_START 20
#define AGR_BLEND_END 10
#define AGR_CLIMB_THROTTLE 0.70
#define AGR_CLIMB_PITCH 0.3
#define AGR_DESCENT_THROTTLE 0.1
#define AGR_DESCENT_PITCH -0.25
#define AGR_CLIMB_NAV_RATIO 0.8
#define AGR_DESCENT_NAV_RATIO 1.0

#define SECTION_FAILSAFE 1
#define FAILSAFE_DELAY_WITHOUT_GPS 2
#define FAILSAFE_DEFAULT_THROTTLE 0.3
#define FAILSAFE_DEFAULT_ROLL 0.3
#define FAILSAFE_DEFAULT_PITCH 0.5
#define FAILSAFE_HOME_RADIUS 90

#define SECTION_DATALINK 1
#define DATALINK_DEVICE_TYPE PPRZ
#define DATALINK_DEVICE_ADDRESS 22

#define SECTION_NAV 1
#define NAV_PITCH 0.
#define NAV_GLIDE_PITCH_TRIM 0


#endif // AIRFRAME_H

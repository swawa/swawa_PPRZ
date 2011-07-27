/* This file has been generated from /home/excelobs/paparazzi/conf/airframes/mm/fixed-wing/fw_ins_arduimu.xml */
/* Please DO NOT EDIT */

#ifndef AIRFRAME_H
#define AIRFRAME_H 

#define AIRFRAME_NAME "KMUAV2"
#define AC_ID 2
#define MD5SUM ((uint8_t*)"\000\146\207\146\127\005\377\062\163\046\131\077\264\002\206\221")

#define SERVOS_NB 8

#define SERVO_MOTOR 0
#define SERVO_MOTOR_NEUTRAL 1000
#define SERVO_MOTOR_TRAVEL_UP 0.104166666667
#define SERVO_MOTOR_TRAVEL_DOWN 0
#define SERVO_MOTOR_MAX 2000
#define SERVO_MOTOR_MIN 1000

#define SERVO_AILEVON_LEFT 2
#define SERVO_AILEVON_LEFT_NEUTRAL 1479
#define SERVO_AILEVON_LEFT_TRAVEL_UP -0.0394791666667
#define SERVO_AILEVON_LEFT_TRAVEL_DOWN -0.0438541666667
#define SERVO_AILEVON_LEFT_MAX 1900
#define SERVO_AILEVON_LEFT_MIN 1100

#define SERVO_AILEVON_RIGHT 6
#define SERVO_AILEVON_RIGHT_NEUTRAL 1496
#define SERVO_AILEVON_RIGHT_TRAVEL_UP 0.0420833333333
#define SERVO_AILEVON_RIGHT_TRAVEL_DOWN 0.04125
#define SERVO_AILEVON_RIGHT_MAX 1900
#define SERVO_AILEVON_RIGHT_MIN 1100

#define SERVO_HATCH 7
#define SERVO_HATCH_NEUTRAL 1070
#define SERVO_HATCH_TRAVEL_UP 0.117708333333
#define SERVO_HATCH_TRAVEL_DOWN 0
#define SERVO_HATCH_MAX 2200
#define SERVO_HATCH_MIN 1070


#define COMMAND_THROTTLE 0
#define COMMAND_ROLL 1
#define COMMAND_PITCH 2
#define COMMAND_HATCH 3
#define COMMANDS_NB 4
#define COMMANDS_FAILSAFE {0,0,0,0}


#define SetCommandsFromRC(_commands_array, _rc_array) { \
  _commands_array[COMMAND_THROTTLE] = _rc_array[RADIO_THROTTLE];\
  _commands_array[COMMAND_ROLL] = _rc_array[RADIO_ROLL];\
  _commands_array[COMMAND_PITCH] = _rc_array[RADIO_PITCH];\
  _commands_array[COMMAND_HATCH] = _rc_array[RADIO_CALIB];\
}

#define SECTION_MIXER 1
#define AILEVON_AILERON_RATE 0.45
#define AILEVON_ELEVATOR_RATE 0.8

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
  command_value = values[COMMAND_HATCH];\
  command_value *= command_value>0 ? SERVO_HATCH_TRAVEL_UP : SERVO_HATCH_TRAVEL_DOWN;\
  servo_value = SERVO_HATCH_NEUTRAL + (int32_t)(command_value);\
  actuators[SERVO_HATCH] = ChopServo(servo_value, SERVO_HATCH_MIN, SERVO_HATCH_MAX);\
\
  Actuator(SERVO_HATCH) = SERVOS_TICS_OF_USEC(actuators[SERVO_HATCH]);\
\
  ActuatorsCommit();\
}

#define AllActuatorsInit() { \
  ActuatorsInit();\
}

#define SECTION_AUTO1 1
#define AUTO1_MAX_ROLL 0.85
#define AUTO1_MAX_PITCH 0.6

#define SECTION_adc 1
#define ADC_CHANNEL_IR1 ADC_1
#define ADC_CHANNEL_IR2 ADC_2
#define ADC_CHANNEL_IR_TOP ADC_0
#define ADC_CHANNEL_IR_NB_SAMPLES 16

#define SECTION_INS 1
#define INS_ROLL_NEUTRAL_DEFAULT 0
#define INS_PITCH_NEUTRAL_DEFAULT 0

#define SECTION_BAT 1
#define ADC_CHANNEL_CURRENT ADC_4
#define MilliAmpereOfAdc(adc) (88*adc)
#define CATASTROPHIC_BAT_LEVEL 9.3
#define VoltageOfAdc(adc) (0.02454*adc)

#define SECTION_MISC 1
#define NOMINAL_AIRSPEED 15.
#define CARROT 5.
#define KILL_MODE_DISTANCE (1.5*MAX_DIST_FROM_HOME)
#define CONTROL_RATE 60
#define ALT_KALMAN_ENABLED FALSE
#define TRIGGER_DELAY 1.
#define DEFAULT_CIRCLE_RADIUS 120.

#define SECTION_VERTICAL CONTROL 1
#define V_CTL_POWER_CTL_BAT_NOMINAL 11.1
#define V_CTL_ALTITUDE_PGAIN -0.06
#define V_CTL_ALTITUDE_MAX_CLIMB 2.
#define V_CTL_AUTO_THROTTLE_NOMINAL_CRUISE_THROTTLE 0.45
#define V_CTL_AUTO_THROTTLE_MIN_CRUISE_THROTTLE 0.25
#define V_CTL_AUTO_THROTTLE_MAX_CRUISE_THROTTLE 0.85
#define V_CTL_AUTO_THROTTLE_LOITER_TRIM 1000
#define V_CTL_AUTO_THROTTLE_DASH_TRIM -1200
#define V_CTL_AUTO_THROTTLE_CLIMB_THROTTLE_INCREMENT 0.2
#define V_CTL_AUTO_THROTTLE_PGAIN -0.023
#define V_CTL_AUTO_THROTTLE_IGAIN 0.01
#define V_CTL_AUTO_THROTTLE_PITCH_OF_VZ_PGAIN 0.05
#define V_CTL_AUTO_PITCH_PGAIN -0.06
#define V_CTL_AUTO_PITCH_IGAIN 0.0
#define V_CTL_AUTO_PITCH_MAX_PITCH 0.35
#define V_CTL_AUTO_PITCH_MIN_PITCH -0.35
#define V_CTL_THROTTLE_SLEW 0.1

#define SECTION_HORIZONTAL CONTROL 1
#define H_CTL_COURSE_PGAIN -0.9
#define H_CTL_ROLL_MAX_SETPOINT 0.70
#define H_CTL_PITCH_MAX_SETPOINT 0.5
#define H_CTL_PITCH_MIN_SETPOINT -0.5
#define H_CTL_ROLL_PGAIN 6600.
#define H_CTL_AILERON_OF_THROTTLE 0.0
#define H_CTL_PITCH_PGAIN -5500.
#define H_CTL_PITCH_DGAIN 0.4
#define H_CTL_ELEVATOR_OF_ROLL 2400

#define SECTION_NAV 1
#define NAV_PITCH 0.
#define NAV_GLIDE_PITCH_TRIM 0

#define SECTION_AGGRESSIVE 1
#define AGR_BLEND_START 50
#define AGR_BLEND_END 15
#define AGR_CLIMB_THROTTLE 0.9
#define AGR_CLIMB_PITCH 0.35
#define AGR_DESCENT_THROTTLE 0.05
#define AGR_DESCENT_PITCH -0.35
#define AGR_CLIMB_NAV_RATIO 0.8
#define AGR_DESCENT_NAV_RATIO 1.0

#define SECTION_FAILSAFE 1
#define FAILSAFE_DELAY_WITHOUT_GPS 2
#define FAILSAFE_DEFAULT_THROTTLE 0.3
#define FAILSAFE_DEFAULT_ROLL 0.3
#define FAILSAFE_DEFAULT_PITCH 0.5
#define FAILSAFE_HOME_RADIUS 100


#endif // AIRFRAME_H
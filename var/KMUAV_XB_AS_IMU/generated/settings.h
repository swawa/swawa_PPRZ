/* This file has been generated from /home/excelobs/paparazzi/var/KMUAV_XB_AS_IMU/settings_modules.xml /home/excelobs/paparazzi/conf/settings/tuning_basic_ins.xml */
/* Please DO NOT EDIT */

#ifndef SETTINGS_H
#define SETTINGS_H 

#define RCSettings(mode_changed) { \
}

#include "autopilot.h"
#include "downlink.h"
#include "estimator.h"
#include "guidance/guidance_v.h"
#include "stabilization/stabilization_attitude.h"
#include "subsystems/ahrs.h"
#include "subsystems/gps.h"
#include "subsystems/nav.h"
#include "generated/modules.h"

#define DlSetting(_idx, _value) { \
  switch (_idx) { \
    case 0: flight_altitude = _value; break;\
    case 1: wind_east = _value; break;\
    case 2: wind_north = _value; break;\
    case 3: pprz_mode = _value; break;\
    case 4: alt_kalman_enabled = _value; break;\
    case 5: estimator_flight_time = _value; break;\
    case 6: stage_time = _value; break;\
    case 7: launch = _value; break;\
    case 8: kill_throttle = _value; break;\
    case 9: telemetry_mode_Ap_DefaultChannel = _value; break;\
    case 10: telemetry_mode_Fbw_DefaultChannel = _value; break;\
    case 11: gps_Reset( _value ); _value = gps_reset; break;\
    case 12: nav_SetNavRadius( _value ); _value = nav_radius; break;\
    case 13: ins_roll_neutral = _value; break;\
    case 14: ins_pitch_neutral = _value; break;\
    case 15: h_ctl_roll_pgain = _value; break;\
    case 16: h_ctl_roll_max_setpoint = _value; break;\
    case 17: h_ctl_pitch_pgain = _value; break;\
    case 18: h_ctl_pitch_dgain = _value; break;\
    case 19: h_ctl_elevator_of_roll = _value; break;\
    case 20: h_ctl_aileron_of_throttle = _value; break;\
    case 21: h_ctl_roll_attitude_gain = _value; break;\
    case 22: h_ctl_roll_rate_gain = _value; break;\
    case 23: v_ctl_altitude_pgain = _value; break;\
    case 24: guidance_v_SetCruiseThrottle( _value ); _value = v_ctl_auto_throttle_cruise_throttle; break;\
    case 25: v_ctl_auto_throttle_pgain = _value; break;\
    case 26: v_ctl_auto_throttle_igain = _value; break;\
    case 27: v_ctl_auto_throttle_dgain = _value; break;\
    case 28: v_ctl_auto_throttle_climb_throttle_increment = _value; break;\
    case 29: v_ctl_auto_throttle_pitch_of_vz_pgain = _value; break;\
    case 30: v_ctl_auto_throttle_pitch_of_vz_dgain = _value; break;\
    case 31: v_ctl_auto_pitch_pgain = _value; break;\
    case 32: v_ctl_auto_pitch_igain = _value; break;\
    case 33: h_ctl_course_pgain = _value; break;\
    case 34: h_ctl_course_dgain = _value; break;\
    case 35: h_ctl_course_pre_bank_correction = _value; break;\
    case 36: nav_glide_pitch_trim = _value; break;\
    case 37: h_ctl_roll_slew = _value; break;\
    case 38: nav_radius = _value; break;\
    case 39: nav_course = _value; break;\
    case 40: nav_mode = _value; break;\
    case 41: nav_climb = _value; break;\
    case 42: fp_pitch = _value; break;\
    case 43: nav_IncreaseShift( _value ); _value = nav_shift; break;\
    case 44: nav_ground_speed_setpoint = _value; break;\
    case 45: nav_ground_speed_pgain = _value; break;\
    case 46: nav_survey_shift = _value; break;\
    default: break;\
  }\
}
#define PeriodicSendDlValue(_chan) { \
  static uint8_t i;\
  float var;\
  if (i >= 47) i = 0;\
  switch (i) { \
    case 0: var = flight_altitude; break;\
    case 1: var = wind_east; break;\
    case 2: var = wind_north; break;\
    case 3: var = pprz_mode; break;\
    case 4: var = alt_kalman_enabled; break;\
    case 5: var = estimator_flight_time; break;\
    case 6: var = stage_time; break;\
    case 7: var = launch; break;\
    case 8: var = kill_throttle; break;\
    case 9: var = telemetry_mode_Ap_DefaultChannel; break;\
    case 10: var = telemetry_mode_Fbw_DefaultChannel; break;\
    case 11: var = gps_reset; break;\
    case 12: var = nav_radius; break;\
    case 13: var = ins_roll_neutral; break;\
    case 14: var = ins_pitch_neutral; break;\
    case 15: var = h_ctl_roll_pgain; break;\
    case 16: var = h_ctl_roll_max_setpoint; break;\
    case 17: var = h_ctl_pitch_pgain; break;\
    case 18: var = h_ctl_pitch_dgain; break;\
    case 19: var = h_ctl_elevator_of_roll; break;\
    case 20: var = h_ctl_aileron_of_throttle; break;\
    case 21: var = h_ctl_roll_attitude_gain; break;\
    case 22: var = h_ctl_roll_rate_gain; break;\
    case 23: var = v_ctl_altitude_pgain; break;\
    case 24: var = v_ctl_auto_throttle_cruise_throttle; break;\
    case 25: var = v_ctl_auto_throttle_pgain; break;\
    case 26: var = v_ctl_auto_throttle_igain; break;\
    case 27: var = v_ctl_auto_throttle_dgain; break;\
    case 28: var = v_ctl_auto_throttle_climb_throttle_increment; break;\
    case 29: var = v_ctl_auto_throttle_pitch_of_vz_pgain; break;\
    case 30: var = v_ctl_auto_throttle_pitch_of_vz_dgain; break;\
    case 31: var = v_ctl_auto_pitch_pgain; break;\
    case 32: var = v_ctl_auto_pitch_igain; break;\
    case 33: var = h_ctl_course_pgain; break;\
    case 34: var = h_ctl_course_dgain; break;\
    case 35: var = h_ctl_course_pre_bank_correction; break;\
    case 36: var = nav_glide_pitch_trim; break;\
    case 37: var = h_ctl_roll_slew; break;\
    case 38: var = nav_radius; break;\
    case 39: var = nav_course; break;\
    case 40: var = nav_mode; break;\
    case 41: var = nav_climb; break;\
    case 42: var = fp_pitch; break;\
    case 43: var = nav_shift; break;\
    case 44: var = nav_ground_speed_setpoint; break;\
    case 45: var = nav_ground_speed_pgain; break;\
    case 46: var = nav_survey_shift; break;\
    default: var = 0.; break;\
  }\
  DOWNLINK_SEND_DL_VALUE(_chan, &i, &var);\
  i++;\
}
static inline float settings_get_value(uint8_t i) {
  switch (i) { \
    case 0: return flight_altitude;
    case 1: return wind_east;
    case 2: return wind_north;
    case 3: return pprz_mode;
    case 4: return alt_kalman_enabled;
    case 5: return estimator_flight_time;
    case 6: return stage_time;
    case 7: return launch;
    case 8: return kill_throttle;
    case 9: return telemetry_mode_Ap_DefaultChannel;
    case 10: return telemetry_mode_Fbw_DefaultChannel;
    case 11: return gps_reset;
    case 12: return nav_radius;
    case 13: return ins_roll_neutral;
    case 14: return ins_pitch_neutral;
    case 15: return h_ctl_roll_pgain;
    case 16: return h_ctl_roll_max_setpoint;
    case 17: return h_ctl_pitch_pgain;
    case 18: return h_ctl_pitch_dgain;
    case 19: return h_ctl_elevator_of_roll;
    case 20: return h_ctl_aileron_of_throttle;
    case 21: return h_ctl_roll_attitude_gain;
    case 22: return h_ctl_roll_rate_gain;
    case 23: return v_ctl_altitude_pgain;
    case 24: return v_ctl_auto_throttle_cruise_throttle;
    case 25: return v_ctl_auto_throttle_pgain;
    case 26: return v_ctl_auto_throttle_igain;
    case 27: return v_ctl_auto_throttle_dgain;
    case 28: return v_ctl_auto_throttle_climb_throttle_increment;
    case 29: return v_ctl_auto_throttle_pitch_of_vz_pgain;
    case 30: return v_ctl_auto_throttle_pitch_of_vz_dgain;
    case 31: return v_ctl_auto_pitch_pgain;
    case 32: return v_ctl_auto_pitch_igain;
    case 33: return h_ctl_course_pgain;
    case 34: return h_ctl_course_dgain;
    case 35: return h_ctl_course_pre_bank_correction;
    case 36: return nav_glide_pitch_trim;
    case 37: return h_ctl_roll_slew;
    case 38: return nav_radius;
    case 39: return nav_course;
    case 40: return nav_mode;
    case 41: return nav_climb;
    case 42: return fp_pitch;
    case 43: return nav_shift;
    case 44: return nav_ground_speed_setpoint;
    case 45: return nav_ground_speed_pgain;
    case 46: return nav_survey_shift;
    default: return 0.;
    }
  }

/* Persistent Settings */
struct PersistentSettings {
};

extern struct PersistentSettings pers_settings;

static inline void persitent_settings_store( void ) {
}

static inline void persitent_settings_load( void ) {
};

#endif // SETTINGS_H

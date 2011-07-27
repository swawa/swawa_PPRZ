/* Automatically generated from /home/excelobs/Paparazzi/conf/messages.xml */
/* Please DO NOT EDIT */
/* Macros to send and receive messages of class telemetry */
#ifdef DOWNLINK
#define DL_BOOT 1
#define DL_ALIVE 2
#define DL_PONG 3
#define DL_TAKEOFF 4
#define DL_DebugChao 5
#define DL_ATTITUDE 6
#define DL_IR_SENSORS 7
#define DL_GPS 8
#define DL_NAVIGATION_REF 9
#define DL_NAVIGATION 10
#define DL_PPRZ_MODE 11
#define DL_BAT 12
#define DL_DEBUG_MCU_LINK 13
#define DL_CALIBRATION 14
#define DL_SETTINGS 15
#define DL_DESIRED 16
#define DL_GPS_SOL 17
#define DL_ADC_GENERIC 18
#define DL_TEST_FORMAT 19
#define DL_CAM 20
#define DL_CIRCLE 21
#define DL_SEGMENT 22
#define DL_DOWNLINK_STATUS 23
#define DL_MODEM_STATUS 24
#define DL_SVINFO 25
#define DL_DEBUG 26
#define DL_SURVEY 27
#define DL_WC_RSSI 28
#define DL_RANGEFINDER 29
#define DL_DOWNLINK 30
#define DL_DL_VALUE 31
#define DL_MARK 32
#define DL_SYS_MON 33
#define DL_MOTOR 34
#define DL_WP_MOVED 35
#define DL_GYRO_RATES 36
#define DL_ENERGY 37
#define DL_BARO_BMP85_CALIB 38
#define DL_BARO_BMP85 39
#define DL_SPEED_LOOP 40
#define DL_ALT_KALMAN 41
#define DL_ESTIMATOR 42
#define DL_TUNE_ROLL 43
#define DL_BARO_MS5534A 44
#define DL_PRESSURE 45
#define DL_BARO_WORDS 46
#define DL_WP_MOVED_LLA 47
#define DL_CHRONO 48
#define DL_WP_MOVED_ENU 49
#define DL_WINDTURBINE_STATUS_ 50
#define DL_RC_3CH_ 51
#define DL_MPPT 52
#define DL_DEBUG_IR_I2C 53
#define DL_AIRSPEED 54
#define DL_XSENS 55
#define DL_BARO_ETS 56
#define DL_AIRSPEED_ETS 57
#define DL_PBN 58
#define DL_GPS_LLA 59
#define DL_H_CTL_A 60
#define DL_TURB_PRESSURE_RAW 61
#define DL_TURB_PRESSURE_VOLTAGE 62
#define DL_VF_UPDATE 76
#define DL_VF_PREDICT 77
#define DL_CROSS_TRACK_ERROR 80
#define DL_ESTIMATOR_COMP_FILTER 81
#define DL_FORMATION_SLOT_TM 82
#define DL_FORMATION_STATUS_TM 83
#define DL_BMP_STATUS 84
#define DL_MLX_STATUS 85
#define DL_TMP_STATUS 86
#define DL_WIND_INFO_RET 87
#define DL_SCP_STATUS 88
#define DL_SHT_STATUS 89
#define DL_ENOSE_STATUS 90
#define DL_DPICCO_STATUS 91
#define DL_ANTENNA_DEBUG 92
#define DL_ANTENNA_STATUS 93
#define DL_MOTOR_BENCH_STATUS 94
#define DL_MOTOR_BENCH_STATIC 95
#define DL_HIH_STATUS 96
#define DL_TEMT_STATUS 97
#define DL_GP2Y_STATUS 98
#define DL_SHT_SERIAL 99
#define DL_PPM 100
#define DL_RC 101
#define DL_COMMANDS 102
#define DL_FBW_STATUS 103
#define DL_ADC 104
#define DL_ACTUATORS 105
#define DL_BETH 106
#define DL_BETH_ESTIMATOR 107
#define DL_BETH_CONTROLLER 108
#define DL_BETH_CONTROLLER_TWIST 109
#define DL_DC_SHOT 110
#define DL_TEST_BOARD_RESULTS 111
#define DL_BETH_CONTROLLER_SFB 112
#define DL_PAYLOAD 114
#define DL_TCAS_TA 120
#define DL_TCAS_RA 121
#define DL_TCAS_RESOLVED 122
#define DL_TCAS_DEBUG 123
#define DL_POTENTIAL 124
#define DL_VERTICAL_ENERGY 125
#define DL_STAB_ATTITUDE_FLOAT 130
#define DL_IMU_GYRO_SCALED 131
#define DL_IMU_ACCEL_SCALED 132
#define DL_IMU_MAG_SCALED 133
#define DL_FILTER 134
#define DL_FILTER2 135
#define DL_RATE_LOOP 136
#define DL_FILTER_ALIGNER 137
#define DL_FILTER_Q 138
#define DL_FILTER_COR 139
#define DL_STAB_ATTITUDE_INT 140
#define DL_STAB_ATTITUDE_REF_INT 141
#define DL_STAB_ATTITUDE_REF_FLOAT 142
#define DL_BOOZ2_CMD 143
#define DL_GUIDANCE 144
#define DL_VERT_LOOP 145
#define DL_HOVER_LOOP 146
#define DL_BOOZ2_FP 147
#define DL_BOOZ2_FMS_INFO 148
#define DL_GUIDANCE_H_REF_INT 149
#define DL_BOOZ2_TUNE_HOVER 150
#define DL_INS_Z 151
#define DL_INS_REF 154
#define DL_BOOZ2_GPS 155
#define DL_BOOZ2_AHRS_EULER 156
#define DL_BOOZ2_AHRS_QUAT 157
#define DL_BOOZ2_AHRS_RMAT 158
#define DL_ROTORCRAFT_NAV_STATUS 159
#define DL_BOOZ2_RADIO_CONTROL 160
#define DL_BOOZ_BARO_RAW 161
#define DL_VFF 162
#define DL_BOOZ2_TUNE_FF 163
#define DL_HFF 164
#define DL_HFF_DBG 165
#define DL_HFF_GPS 166
#define DL_BOOZ2_SONAR 167
#define DL_BOOZ2_CAM 168
#define DL_BOOZ2_AHRS_REF_QUAT 169
#define DL_EKF7_XHAT 170
#define DL_EKF7_Y 171
#define DL_EKF7_P_DIAG 172
#define DL_AHRS_EULER 173
#define DL_AHRS_MEASUREMENT_EULER 174
#define DL_WT 175
#define DL_CSC_CAN_DEBUG 176
#define DL_CSC_CAN_MSG 177
#define DL_BOOZ_AHRS_BIAS 178
#define DL_FMS_TIME 180
#define DL_LOADCELL 181
#define DL_FLA_DEBUG 182
#define DL_BLMC_FAULT_STATUS 183
#define DL_BLMC_SPEEDS 184
#define DL_AHRS_DEBUG_QUAT 185
#define DL_BLMC_BUSVOLTS 186
#define DL_SYSTEM_STATUS 187
#define DL_DYNAMIXEL 188
#define DL_RMAT_DEBUG 189
#define DL_SIMPLE_COMMANDS 190
#define DL_VANE_SENSOR 191
#define DL_CONTROLLER_GAINS 192
#define DL_AHRS_LKF 193
#define DL_AHRS_LKF_DEBUG 194
#define DL_AHRS_LKF_ACC_DBG 195
#define DL_AHRS_LKF_MAG_DBG 196
#define DL_BOOZ_SIM_SENSORS_SCALED 197
#define DL_INS 198
#define DL_GPS_ERROR 199
#define DL_IMU_GYRO 200
#define DL_IMU_MAG 201
#define DL_IMU_ACCEL 202
#define DL_IMU_GYRO_RAW 203
#define DL_IMU_ACCEL_RAW 204
#define DL_IMU_MAG_RAW 205
#define DL_IMU_GYRO_LP 209
#define DL_IMU_PRESSURE 210
#define DL_IMU_HS_GYRO 211
#define DL_TEST_PASSTHROUGH_STATUS 212
#define DL_WEATHER 219
#define DL_IMU_TURNTABLE 220
#define DL_BARO_RAW 221
#define DL_TIME 227
#define DL_ROTORCRAFT_STATUS 231
#define DL_OPTICFLOW 234
#define DL_VISUALTARGET 235
#define DL_BOOZ_SIM_POS_LLH 238
#define DL_BOOZ_SIM_RPMS 239
#define DL_BOOZ_SIM_SPEED_POS 240
#define DL_BOOZ_SIM_RATE_ATTITUDE 241
#define DL_BOOZ_SIM_GYRO_BIAS 242
#define DL_BOOZ_SIM_RANGE_METER 243
#define DL_BOOZ_SIM_WIND 244
#define DL_BOOZ_DEBUG_FOO 245
#define DL_BOOZ_MAX1167_ERR 246
#define DL_PPRZ_DEBUG 247
#define DL_BOOZ_SIM_ACCEL_LTP 248
#define DL_LOOSE_INS_GPS 249
#define DL_AFL_COEFFS 250
#define DL_BOOZ_ATT_REF_MODEL 251
#define DL_BOOZ2_FF_ADAP 252
#define DL_I2C_ERRORS 253
#define DL_RDYB_TRAJECTORY 254
#define DL_HENRY_GNSS 255
#define DL_MSG_telemetry_NB 206

#define MSG_telemetry_LENGTHS {0,(2+0+2),(2+0+1+nb_md5sum*1),(2+0),(2+0+2),(2+0+2+2+2+4+4+4),(2+0+4+4+4),(2+0+2+2+2+2+2),(2+0+1+4+4+2+4+2+2+2+4+1+1),(2+0+4+4+1),(2+0+1+1+4+4+4+4+1+1),(2+0+1+1+1+1+1+1),(2+0+2+1+2+2+1+2+2+2),(2+0+1+1+1),(2+0+4+1),(2+0+4+4),(2+0+4+4+4+4+4+4+4),(2+0+4+4+2+1),(2+0+2+2),(2+0+8+4),(2+0+1+1+2+2),(2+0+4+4+4),(2+0+4+4+4+4),(2+0+4+4+4+4+4+4+4),(2+0+1+4+1+4+4+4),(2+0+1+1+1+1+1+1+2),(2+0+1+nb_msg*1),(2+0+4+4+4+4),(2+0+1),(2+0+2+4+4+4+4+4+1),(2+0+1+2+2),(2+0+1+4),(2+0+1+4+4),(2+0+2+2+2+2+2+1),(2+0+2+4),(2+0+1+4+4+4+1),(2+0+2+4+4),(2+0+4+4+2+4),(2+0+2+2+2+2+2+2+2+2+2+2+2),(2+0+4+4+4+4+4),(2+0+4+4+4+4+4+4),(2+0+4+4+4+4),(2+0+4+4),(2+0+4+4+4),(2+0+4+2+4),(2+0+4+4+4+4),(2+0+2+2+2+2),(2+0+1+4+4+4),(2+0+1+4),(2+0+1+4+4+4),(2+0+1+1+4+4),(2+0+1+1+1),(2+0+1+nb_values*2),(2+0+2+2+2),(2+0+4+4+4+4),(2+0+2+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4+1+1+1+1+4+2+1+1),(2+0+2+2+4),(2+0+2+2+4),(2+0+2+2+4+4+2+2),(2+0+4+4+4+2+2+2+2+4+1+1),(2+0+4+4+4+4),(2+0+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4),(2+0+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4),0,0,0,0,0,0,0,0,0,0,0,0,0,(2+0+4+4),(2+0+4),0,0,(2+0+4+4),(2+0+4+4+4+4),(2+0+1+1+4+4+4),(2+0+1+1+1),(2+0+4+4),(2+0+2+4+2+4),(2+0+2+4),(2+0+4+4+4),(2+0+4+2),(2+0+2+2+4+4),(2+0+2+2+2+2+1+nb_heat*1),(2+0+2+2+4+4),(2+0+4+4+4+4+4+4+4+1+1),(2+0+4+4+1+1),(2+0+4+4+4+4+4+4+2+1),(2+0+4+4+4+2),(2+0+2+4+4),(2+0+2+4),(2+0+2+4),(2+0+4+4),(2+0+1+1+nb_values*2),(2+0+1+nb_values*2),(2+0+1+nb_values*2),(2+0+1+1+1+1+4),(2+0+1+1+nb_values*2),(2+0+1+nb_values*2),(2+0+2+2+2+4+2+2+1+1),(2+0+4+4+4+4+4+4),(2+0+4+4+4+4+4+4+4+4+4+4+4+4+4),(2+0+4+4+4+4),(2+0+2+4+4+4+1+2+2+2+2+4),(2+0+1+1+1+nb_servo*2),(2+0+4),0,(2+0+1+nb_values*1),0,0,0,0,0,(2+0+1),(2+0+1+1),(2+0+1),(2+0+1+4),(2+0+4+4+4+4+4),(2+0+4+4+4+4+4+4+4),0,0,0,0,(2+0+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4),(2+0+4+4+4),(2+0+4+4+4),(2+0+4+4+4),(2+0+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4),(2+0+4+4+4+4+4+4),(2+0+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4),(2+0+4+4+4+4+4+4+4+4),(2+0+4+4+4+4),(2+0+4+4+4+4+4+4+4),(2+0+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4),(2+0+4+4+4+4+4+4+4+4+4+4+4+4),(2+0+4+4+4+4+4+4+4+4+4+4+4+4),(2+0+4+4+4+4),(2+0+4+4+4+4),(2+0+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4),(2+0+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4),(2+0+4+4+4+4+4+4+4+4+4+4+4+4+4+4+2),(2+0+4),(2+0+4+4+4+4+4+4+4+4),(2+0+2+2+2+4+4+4+4+4+4+4+4+4+4),(2+0+4+4+4+4),0,0,(2+0+4+4+4+4+4+4+4+4),(2+0+4+4+4+4+4+4+4+4+4+4+4+4+2+1+1),(2+0+4+4+4+4+4+4),(2+0+4+4+4+4+4+4+4+4),(2+0+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4),(2+0+2+2+1+1+1),(2+0+2+2+2+2+2+2+1),(2+0+2+2+2),(2+0+4+4+4+4+4+4+4),(2+0+4+4+4),(2+0+4+4+4+4+4+4),(2+0+4+4+4+4+4+4+4+4),(2+0+2+2+2),(2+0+2+2+2+2),(2+0+2+2),(2+0+4+4+4+4+4+4+4+4),(2+0+4+4+4+4+4+4+4+4+4+4),(2+0+2+4+4+4+4+4+4+4+4+4),(2+0+4+4+4+4+4+4+4+4+4+4),(2+0+4+4+4),(2+0+4+4+4),(2+0+4),(2+0+4+4),(2+0+4+4+4+4),(2+0+4+4+4),0,(2+0+4+4+4),(2+0+4),(2+0+4+4+4+4),(2+0+1+nb_raw_fault*2),(2+0+1+nb_speeds*2),(2+0+4+4+4+4+4+4+4+4+4+4+4+4),(2+0+1+nb_busvolts*2),(2+0+4+4+4+4+4+4+4+1),(2+0+2+2+1+1+4+4+4+4+4),(2+0+4+4+4+4+4+4+4+4+4),(2+0+2+2+2),(2+0+4+4+4+4+4+4+4+4+4+4),(2+0+4+4+4+4+4+4+4+4+4),(2+0+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4),(2+0+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4),(2+0+4+4+4+4+4+4+4),(2+0+4+4+4+4+4+4+4),(2+0+4+4+4+4+4+4),(2+0+4+4+4+4+4+4+4+4+4),(2+0+4+4+4+4+4+4),(2+0+4+4+4),(2+0+4+4+4),(2+0+4+4+4),(2+0+4+4+4),(2+0+4+4+4),(2+0+4+4+4),0,0,0,(2+0+4+4+4),(2+0+4),(2+0+1+1+nb_samples*4),(2+0+4+4+4+4+1),0,0,0,0,0,0,(2+0+4+4+4+4),(2+0+4),(2+0+4+4),0,0,0,0,0,(2+0+4),0,0,0,(2+0+4+1+1+1+1+1+1+1+1+1+1+2),0,0,(2+0+2+4),(2+0+2+2),0,0,(2+0+4+4+4+4+4+4+4+4+4),(2+0+4+4+4+4),(2+0+4+4+4+4+4+4+4+4+4),(2+0+4+4+4+4+4+4),(2+0+4+4+4),(2+0+4),(2+0+4+4+4),(2+0+1),(2+0+1),(2+0+1+1),(2+0+4+4+4),(2+0+1+8+8+8+8+8+8+8+8+8+8+8+8+8+8+8+8+8+8+8+8+4+4+4),(2+0+4+4+4+4+4+4+4+4+4),(2+0+4+4+4+4+4+4),(2+0+4+4+4),(2+0+2+2+2+2+2+2+2+2+4),(2+0+4+4+4+4+4+4),(2+0+4+8+1+8+8+8+8+8+8+1+1+8+8+8),}

/*
 Size for non variable messages
173 : LOOSE_INS_GPS
96 : STAB_ATTITUDE_FLOAT
87 : HENRY_GNSS
84 : STAB_ATTITUDE_INT
84 : HOVER_LOOP
76 : RATE_LOOP
74 : XSENS
72 : BOOZ2_AHRS_RMAT
64 : TURB_PRESSURE_RAW
64 : TURB_PRESSURE_VOLTAGE
64 : AHRS_LKF
60 : FILTER
60 : VERT_LOOP
60 : AHRS_LKF_DEBUG
58 : BOOZ2_FP
52 : BETH_CONTROLLER
52 : BOOZ2_GPS
48 : STAB_ATTITUDE_REF_INT
48 : STAB_ATTITUDE_REF_FLOAT
48 : AHRS_DEBUG_QUAT
46 : BOOZ2_TUNE_HOVER
40 : EKF7_XHAT
40 : EKF7_P_DIAG
40 : VANE_SENSOR
38 : EKF7_Y
36 : RMAT_DEBUG
36 : CONTROLLER_GAINS
36 : INS
36 : BOOZ_SIM_POS_LLH
36 : BOOZ_SIM_SPEED_POS
36 : AFL_COEFFS
32 : FILTER_ALIGNER
32 : GUIDANCE_H_REF_INT
32 : INS_REF
32 : BOOZ2_AHRS_QUAT
32 : HFF_DBG
32 : BOOZ2_AHRS_REF_QUAT
30 : ANTENNA_DEBUG
29 : SYSTEM_STATUS
28 : DESIRED
28 : DOWNLINK_STATUS
28 : VERTICAL_ENERGY
28 : FILTER_COR
28 : VFF
28 : AHRS_LKF_ACC_DBG
28 : AHRS_LKF_MAG_DBG
27 : GPS
27 : MOTOR_BENCH_STATUS
27 : DC_SHOT
26 : GPS_LLA
26 : DYNAMIXEL
24 : SPEED_LOOP
24 : BETH_ESTIMATOR
24 : FILTER2
24 : BOOZ2_AHRS_EULER
24 : HFF
24 : BOOZ_SIM_SENSORS_SCALED
24 : GPS_ERROR
24 : BOOZ_SIM_RATE_ATTITUDE
24 : BOOZ_ATT_REF_MODEL
24 : RDYB_TRAJECTORY
23 : RANGEFINDER
22 : BARO_BMP85_CALIB
20 : NAVIGATION
20 : BARO_BMP85
20 : POTENTIAL
20 : I2C_ERRORS
18 : DebugChao
18 : MODEM_STATUS
17 : TEST_PASSTHROUGH_STATUS
16 : SEGMENT
16 : SURVEY
16 : ALT_KALMAN
16 : PRESSURE
16 : AIRSPEED
16 : PBN
16 : H_CTL_A
16 : ESTIMATOR_COMP_FILTER
16 : BETH
16 : BETH_CONTROLLER_TWIST
16 : FILTER_Q
16 : BOOZ2_CMD
16 : GUIDANCE
16 : INS_Z
16 : CSC_CAN_MSG
16 : FLA_DEBUG
16 : WEATHER
16 : ROTORCRAFT_STATUS
16 : BOOZ_SIM_RPMS
14 : BAT
14 : WP_MOVED
14 : ENERGY
14 : FORMATION_SLOT_TM
14 : MOTOR_BENCH_STATIC
13 : WP_MOVED_LLA
13 : WP_MOVED_ENU
13 : BOOZ2_RADIO_CONTROL
12 : ATTITUDE
12 : TEST_FORMAT
12 : CIRCLE
12 : TUNE_ROLL
12 : MLX_STATUS
12 : WIND_INFO_RET
12 : SHT_STATUS
12 : DPICCO_STATUS
12 : IMU_GYRO_SCALED
12 : IMU_ACCEL_SCALED
12 : IMU_MAG_SCALED
12 : BOOZ2_TUNE_FF
12 : AHRS_EULER
12 : AHRS_MEASUREMENT_EULER
12 : BOOZ_AHRS_BIAS
12 : FMS_TIME
12 : IMU_GYRO
12 : IMU_MAG
12 : IMU_ACCEL
12 : IMU_GYRO_RAW
12 : IMU_ACCEL_RAW
12 : IMU_MAG_RAW
12 : IMU_GYRO_LP
12 : BOOZ_SIM_GYRO_BIAS
12 : BOOZ_SIM_WIND
12 : BOOZ_SIM_ACCEL_LTP
12 : BOOZ2_FF_ADAP
11 : GPS_SOL
11 : SYS_MON
10 : IR_SENSORS
10 : GYRO_RATES
10 : BARO_MS5534A
10 : WINDTURBINE_STATUS_
10 : ANTENNA_STATUS
10 : HIH_STATUS
 9 : NAVIGATION_REF
 9 : MARK
 8 : SETTINGS
 8 : SVINFO
 8 : ESTIMATOR
 8 : BARO_WORDS
 8 : BARO_ETS
 8 : AIRSPEED_ETS
 8 : VF_UPDATE
 8 : CROSS_TRACK_ERROR
 8 : BMP_STATUS
 8 : SHT_SERIAL
 8 : FBW_STATUS
 8 : BOOZ2_SONAR
 8 : CSC_CAN_DEBUG
 8 : BARO_RAW
 7 : ROTORCRAFT_NAV_STATUS
 6 : PPRZ_MODE
 6 : CAM
 6 : MOTOR
 6 : DEBUG_IR_I2C
 6 : TMP_STATUS
 6 : SCP_STATUS
 6 : TEMT_STATUS
 6 : GP2Y_STATUS
 6 : BOOZ_BARO_RAW
 6 : HFF_GPS
 6 : SIMPLE_COMMANDS
 6 : OPTICFLOW
 5 : CALIBRATION
 5 : DOWNLINK
 5 : DL_VALUE
 5 : CHRONO
 5 : TCAS_DEBUG
 4 : ADC_GENERIC
 4 : VF_PREDICT
 4 : BETH_CONTROLLER_SFB
 4 : BOOZ2_FMS_INFO
 4 : BOOZ2_CAM
 4 : WT
 4 : LOADCELL
 4 : IMU_PRESSURE
 4 : IMU_TURNTABLE
 4 : TIME
 4 : VISUALTARGET
 4 : BOOZ_SIM_RANGE_METER
 3 : DEBUG_MCU_LINK
 3 : RC_3CH_
 3 : FORMATION_STATUS_TM
 2 : BOOT
 2 : TAKEOFF
 2 : TCAS_RA
 2 : PPRZ_DEBUG
 1 : WC_RSSI
 1 : TCAS_TA
 1 : TCAS_RESOLVED
 1 : BOOZ_DEBUG_FOO
 1 : BOOZ_MAX1167_ERR
 0 : ALIVE
 0 : PONG
 0 : DEBUG
 0 : MPPT
 0 : ENOSE_STATUS
 0 : PPM
 0 : RC
 0 : COMMANDS
 0 : ADC
 0 : ACTUATORS
 0 : TEST_BOARD_RESULTS
 0 : PAYLOAD
 0 : BLMC_FAULT_STATUS
 0 : BLMC_SPEEDS
 0 : BLMC_BUSVOLTS
 0 : IMU_HS_GYRO
*/
#define DOWNLINK_SEND_BOOT(_chan, version){ \
	if (DownlinkCheckFreeSpace(_chan, DownlinkSizeOf(_chan, 0+2))) {\
	  DownlinkCountBytes(_chan, DownlinkSizeOf(_chan, 0+2)); \
	  DownlinkStartMessage(_chan, "BOOT", DL_BOOT, 0+2) \
	  DownlinkPutUint16ByAddr(_chan, (version)); \
	  DownlinkEndMessage(_chan ) \
	} else \
	  DownlinkOverrun(_chan ); \
}

#define DOWNLINK_SEND_ALIVE(_chan, nb_md5sum, md5sum){ \
	if (DownlinkCheckFreeSpace(_chan, DownlinkSizeOf(_chan, 0+1+nb_md5sum*1))) {\
	  DownlinkCountBytes(_chan, DownlinkSizeOf(_chan, 0+1+nb_md5sum*1)); \
	  DownlinkStartMessage(_chan, "ALIVE", DL_ALIVE, 0+1+nb_md5sum*1) \
	  DownlinkPutUint8Array(_chan, nb_md5sum, md5sum); \
	  DownlinkEndMessage(_chan ) \
	} else \
	  DownlinkOverrun(_chan ); \
}

#define DOWNLINK_SEND_PONG(_chan ){ \
	if (DownlinkCheckFreeSpace(_chan, DownlinkSizeOf(_chan, 0))) {\
	  DownlinkCountBytes(_chan, DownlinkSizeOf(_chan, 0)); \
	  DownlinkStartMessage(_chan, "PONG", DL_PONG, 0) \
	  DownlinkEndMessage(_chan ) \
	} else \
	  DownlinkOverrun(_chan ); \
}

#define DOWNLINK_SEND_TAKEOFF(_chan, cpu_time){ \
	if (DownlinkCheckFreeSpace(_chan, DownlinkSizeOf(_chan, 0+2))) {\
	  DownlinkCountBytes(_chan, DownlinkSizeOf(_chan, 0+2)); \
	  DownlinkStartMessage(_chan, "TAKEOFF", DL_TAKEOFF, 0+2) \
	  DownlinkPutUint16ByAddr(_chan, (cpu_time)); \
	  DownlinkEndMessage(_chan ) \
	} else \
	  DownlinkOverrun(_chan ); \
}

#define DOWNLINK_SEND_DebugChao(_chan, int16_1, int16_2, int16_3, int32_1, int32_2, int32_3){ \
	if (DownlinkCheckFreeSpace(_chan, DownlinkSizeOf(_chan, 0+2+2+2+4+4+4))) {\
	  DownlinkCountBytes(_chan, DownlinkSizeOf(_chan, 0+2+2+2+4+4+4)); \
	  DownlinkStartMessage(_chan, "DebugChao", DL_DebugChao, 0+2+2+2+4+4+4) \
	  DownlinkPutInt16ByAddr(_chan, (int16_1)); \
	  DownlinkPutInt16ByAddr(_chan, (int16_2)); \
	  DownlinkPutInt16ByAddr(_chan, (int16_3)); \
	  DownlinkPutInt32ByAddr(_chan, (int32_1)); \
	  DownlinkPutInt32ByAddr(_chan, (int32_2)); \
	  DownlinkPutInt32ByAddr(_chan, (int32_3)); \
	  DownlinkEndMessage(_chan ) \
	} else \
	  DownlinkOverrun(_chan ); \
}

#define DOWNLINK_SEND_ATTITUDE(_chan, phi, psi, theta){ \
	if (DownlinkCheckFreeSpace(_chan, DownlinkSizeOf(_chan, 0+4+4+4))) {\
	  DownlinkCountBytes(_chan, DownlinkSizeOf(_chan, 0+4+4+4)); \
	  DownlinkStartMessage(_chan, "ATTITUDE", DL_ATTITUDE, 0+4+4+4) \
	  DownlinkPutFloatByAddr(_chan, (phi)); \
	  DownlinkPutFloatByAddr(_chan, (psi)); \
	  DownlinkPutFloatByAddr(_chan, (theta)); \
	  DownlinkEndMessage(_chan ) \
	} else \
	  DownlinkOverrun(_chan ); \
}

#define DOWNLINK_SEND_IR_SENSORS(_chan, ir1, ir2, longitudinal, lateral, vertical){ \
	if (DownlinkCheckFreeSpace(_chan, DownlinkSizeOf(_chan, 0+2+2+2+2+2))) {\
	  DownlinkCountBytes(_chan, DownlinkSizeOf(_chan, 0+2+2+2+2+2)); \
	  DownlinkStartMessage(_chan, "IR_SENSORS", DL_IR_SENSORS, 0+2+2+2+2+2) \
	  DownlinkPutInt16ByAddr(_chan, (ir1)); \
	  DownlinkPutInt16ByAddr(_chan, (ir2)); \
	  DownlinkPutInt16ByAddr(_chan, (longitudinal)); \
	  DownlinkPutInt16ByAddr(_chan, (lateral)); \
	  DownlinkPutInt16ByAddr(_chan, (vertical)); \
	  DownlinkEndMessage(_chan ) \
	} else \
	  DownlinkOverrun(_chan ); \
}

#define DOWNLINK_SEND_GPS(_chan, mode, utm_east, utm_north, course, alt, speed, climb, week, itow, utm_zone, gps_nb_err){ \
	if (DownlinkCheckFreeSpace(_chan, DownlinkSizeOf(_chan, 0+1+4+4+2+4+2+2+2+4+1+1))) {\
	  DownlinkCountBytes(_chan, DownlinkSizeOf(_chan, 0+1+4+4+2+4+2+2+2+4+1+1)); \
	  DownlinkStartMessage(_chan, "GPS", DL_GPS, 0+1+4+4+2+4+2+2+2+4+1+1) \
	  DownlinkPutUint8ByAddr(_chan, (mode)); \
	  DownlinkPutInt32ByAddr(_chan, (utm_east)); \
	  DownlinkPutInt32ByAddr(_chan, (utm_north)); \
	  DownlinkPutInt16ByAddr(_chan, (course)); \
	  DownlinkPutInt32ByAddr(_chan, (alt)); \
	  DownlinkPutUint16ByAddr(_chan, (speed)); \
	  DownlinkPutInt16ByAddr(_chan, (climb)); \
	  DownlinkPutUint16ByAddr(_chan, (week)); \
	  DownlinkPutUint32ByAddr(_chan, (itow)); \
	  DownlinkPutUint8ByAddr(_chan, (utm_zone)); \
	  DownlinkPutUint8ByAddr(_chan, (gps_nb_err)); \
	  DownlinkEndMessage(_chan ) \
	} else \
	  DownlinkOverrun(_chan ); \
}

#define DOWNLINK_SEND_NAVIGATION_REF(_chan, utm_east, utm_north, utm_zone){ \
	if (DownlinkCheckFreeSpace(_chan, DownlinkSizeOf(_chan, 0+4+4+1))) {\
	  DownlinkCountBytes(_chan, DownlinkSizeOf(_chan, 0+4+4+1)); \
	  DownlinkStartMessage(_chan, "NAVIGATION_REF", DL_NAVIGATION_REF, 0+4+4+1) \
	  DownlinkPutInt32ByAddr(_chan, (utm_east)); \
	  DownlinkPutInt32ByAddr(_chan, (utm_north)); \
	  DownlinkPutUint8ByAddr(_chan, (utm_zone)); \
	  DownlinkEndMessage(_chan ) \
	} else \
	  DownlinkOverrun(_chan ); \
}

#define DOWNLINK_SEND_NAVIGATION(_chan, cur_block, cur_stage, pos_x, pos_y, dist2_wp, dist2_home, circle_count, oval_count){ \
	if (DownlinkCheckFreeSpace(_chan, DownlinkSizeOf(_chan, 0+1+1+4+4+4+4+1+1))) {\
	  DownlinkCountBytes(_chan, DownlinkSizeOf(_chan, 0+1+1+4+4+4+4+1+1)); \
	  DownlinkStartMessage(_chan, "NAVIGATION", DL_NAVIGATION, 0+1+1+4+4+4+4+1+1) \
	  DownlinkPutUint8ByAddr(_chan, (cur_block)); \
	  DownlinkPutUint8ByAddr(_chan, (cur_stage)); \
	  DownlinkPutFloatByAddr(_chan, (pos_x)); \
	  DownlinkPutFloatByAddr(_chan, (pos_y)); \
	  DownlinkPutFloatByAddr(_chan, (dist2_wp)); \
	  DownlinkPutFloatByAddr(_chan, (dist2_home)); \
	  DownlinkPutUint8ByAddr(_chan, (circle_count)); \
	  DownlinkPutUint8ByAddr(_chan, (oval_count)); \
	  DownlinkEndMessage(_chan ) \
	} else \
	  DownlinkOverrun(_chan ); \
}

#define DOWNLINK_SEND_PPRZ_MODE(_chan, ap_mode, ap_gaz, ap_lateral, ap_horizontal, if_calib_mode, mcu1_status){ \
	if (DownlinkCheckFreeSpace(_chan, DownlinkSizeOf(_chan, 0+1+1+1+1+1+1))) {\
	  DownlinkCountBytes(_chan, DownlinkSizeOf(_chan, 0+1+1+1+1+1+1)); \
	  DownlinkStartMessage(_chan, "PPRZ_MODE", DL_PPRZ_MODE, 0+1+1+1+1+1+1) \
	  DownlinkPutUint8ByAddr(_chan, (ap_mode)); \
	  DownlinkPutUint8ByAddr(_chan, (ap_gaz)); \
	  DownlinkPutUint8ByAddr(_chan, (ap_lateral)); \
	  DownlinkPutUint8ByAddr(_chan, (ap_horizontal)); \
	  DownlinkPutUint8ByAddr(_chan, (if_calib_mode)); \
	  DownlinkPutUint8ByAddr(_chan, (mcu1_status)); \
	  DownlinkEndMessage(_chan ) \
	} else \
	  DownlinkOverrun(_chan ); \
}

#define DOWNLINK_SEND_BAT(_chan, throttle, voltage, amps, flight_time, kill_auto_throttle, block_time, stage_time, energy){ \
	if (DownlinkCheckFreeSpace(_chan, DownlinkSizeOf(_chan, 0+2+1+2+2+1+2+2+2))) {\
	  DownlinkCountBytes(_chan, DownlinkSizeOf(_chan, 0+2+1+2+2+1+2+2+2)); \
	  DownlinkStartMessage(_chan, "BAT", DL_BAT, 0+2+1+2+2+1+2+2+2) \
	  DownlinkPutInt16ByAddr(_chan, (throttle)); \
	  DownlinkPutUint8ByAddr(_chan, (voltage)); \
	  DownlinkPutInt16ByAddr(_chan, (amps)); \
	  DownlinkPutUint16ByAddr(_chan, (flight_time)); \
	  DownlinkPutUint8ByAddr(_chan, (kill_auto_throttle)); \
	  DownlinkPutUint16ByAddr(_chan, (block_time)); \
	  DownlinkPutUint16ByAddr(_chan, (stage_time)); \
	  DownlinkPutInt16ByAddr(_chan, (energy)); \
	  DownlinkEndMessage(_chan ) \
	} else \
	  DownlinkOverrun(_chan ); \
}

#define DOWNLINK_SEND_DEBUG_MCU_LINK(_chan, i2c_nb_err, i2c_mcu1_nb_err, ppm_rate){ \
	if (DownlinkCheckFreeSpace(_chan, DownlinkSizeOf(_chan, 0+1+1+1))) {\
	  DownlinkCountBytes(_chan, DownlinkSizeOf(_chan, 0+1+1+1)); \
	  DownlinkStartMessage(_chan, "DEBUG_MCU_LINK", DL_DEBUG_MCU_LINK, 0+1+1+1) \
	  DownlinkPutUint8ByAddr(_chan, (i2c_nb_err)); \
	  DownlinkPutUint8ByAddr(_chan, (i2c_mcu1_nb_err)); \
	  DownlinkPutUint8ByAddr(_chan, (ppm_rate)); \
	  DownlinkEndMessage(_chan ) \
	} else \
	  DownlinkOverrun(_chan ); \
}

#define DOWNLINK_SEND_CALIBRATION(_chan, climb_sum_err, climb_gaz_submode){ \
	if (DownlinkCheckFreeSpace(_chan, DownlinkSizeOf(_chan, 0+4+1))) {\
	  DownlinkCountBytes(_chan, DownlinkSizeOf(_chan, 0+4+1)); \
	  DownlinkStartMessage(_chan, "CALIBRATION", DL_CALIBRATION, 0+4+1) \
	  DownlinkPutFloatByAddr(_chan, (climb_sum_err)); \
	  DownlinkPutUint8ByAddr(_chan, (climb_gaz_submode)); \
	  DownlinkEndMessage(_chan ) \
	} else \
	  DownlinkOverrun(_chan ); \
}

#define DOWNLINK_SEND_SETTINGS(_chan, slider_1_val, slider_2_val){ \
	if (DownlinkCheckFreeSpace(_chan, DownlinkSizeOf(_chan, 0+4+4))) {\
	  DownlinkCountBytes(_chan, DownlinkSizeOf(_chan, 0+4+4)); \
	  DownlinkStartMessage(_chan, "SETTINGS", DL_SETTINGS, 0+4+4) \
	  DownlinkPutFloatByAddr(_chan, (slider_1_val)); \
	  DownlinkPutFloatByAddr(_chan, (slider_2_val)); \
	  DownlinkEndMessage(_chan ) \
	} else \
	  DownlinkOverrun(_chan ); \
}

#define DOWNLINK_SEND_DESIRED(_chan, roll, pitch, course, x, y, altitude, climb){ \
	if (DownlinkCheckFreeSpace(_chan, DownlinkSizeOf(_chan, 0+4+4+4+4+4+4+4))) {\
	  DownlinkCountBytes(_chan, DownlinkSizeOf(_chan, 0+4+4+4+4+4+4+4)); \
	  DownlinkStartMessage(_chan, "DESIRED", DL_DESIRED, 0+4+4+4+4+4+4+4) \
	  DownlinkPutFloatByAddr(_chan, (roll)); \
	  DownlinkPutFloatByAddr(_chan, (pitch)); \
	  DownlinkPutFloatByAddr(_chan, (course)); \
	  DownlinkPutFloatByAddr(_chan, (x)); \
	  DownlinkPutFloatByAddr(_chan, (y)); \
	  DownlinkPutFloatByAddr(_chan, (altitude)); \
	  DownlinkPutFloatByAddr(_chan, (climb)); \
	  DownlinkEndMessage(_chan ) \
	} else \
	  DownlinkOverrun(_chan ); \
}

#define DOWNLINK_SEND_GPS_SOL(_chan, Pacc, Sacc, PDOP, numSV){ \
	if (DownlinkCheckFreeSpace(_chan, DownlinkSizeOf(_chan, 0+4+4+2+1))) {\
	  DownlinkCountBytes(_chan, DownlinkSizeOf(_chan, 0+4+4+2+1)); \
	  DownlinkStartMessage(_chan, "GPS_SOL", DL_GPS_SOL, 0+4+4+2+1) \
	  DownlinkPutUint32ByAddr(_chan, (Pacc)); \
	  DownlinkPutUint32ByAddr(_chan, (Sacc)); \
	  DownlinkPutUint16ByAddr(_chan, (PDOP)); \
	  DownlinkPutUint8ByAddr(_chan, (numSV)); \
	  DownlinkEndMessage(_chan ) \
	} else \
	  DownlinkOverrun(_chan ); \
}

#define DOWNLINK_SEND_ADC_GENERIC(_chan, val1, val2){ \
	if (DownlinkCheckFreeSpace(_chan, DownlinkSizeOf(_chan, 0+2+2))) {\
	  DownlinkCountBytes(_chan, DownlinkSizeOf(_chan, 0+2+2)); \
	  DownlinkStartMessage(_chan, "ADC_GENERIC", DL_ADC_GENERIC, 0+2+2) \
	  DownlinkPutUint16ByAddr(_chan, (val1)); \
	  DownlinkPutUint16ByAddr(_chan, (val2)); \
	  DownlinkEndMessage(_chan ) \
	} else \
	  DownlinkOverrun(_chan ); \
}

#define DOWNLINK_SEND_TEST_FORMAT(_chan, val1, val2){ \
	if (DownlinkCheckFreeSpace(_chan, DownlinkSizeOf(_chan, 0+8+4))) {\
	  DownlinkCountBytes(_chan, DownlinkSizeOf(_chan, 0+8+4)); \
	  DownlinkStartMessage(_chan, "TEST_FORMAT", DL_TEST_FORMAT, 0+8+4) \
	  DownlinkPutDoubleByAddr(_chan, (val1)); \
	  DownlinkPutFloatByAddr(_chan, (val2)); \
	  DownlinkEndMessage(_chan ) \
	} else \
	  DownlinkOverrun(_chan ); \
}

#define DOWNLINK_SEND_CAM(_chan, phi, theta, target_x, target_y){ \
	if (DownlinkCheckFreeSpace(_chan, DownlinkSizeOf(_chan, 0+1+1+2+2))) {\
	  DownlinkCountBytes(_chan, DownlinkSizeOf(_chan, 0+1+1+2+2)); \
	  DownlinkStartMessage(_chan, "CAM", DL_CAM, 0+1+1+2+2) \
	  DownlinkPutInt8ByAddr(_chan, (phi)); \
	  DownlinkPutInt8ByAddr(_chan, (theta)); \
	  DownlinkPutInt16ByAddr(_chan, (target_x)); \
	  DownlinkPutInt16ByAddr(_chan, (target_y)); \
	  DownlinkEndMessage(_chan ) \
	} else \
	  DownlinkOverrun(_chan ); \
}

#define DOWNLINK_SEND_CIRCLE(_chan, center_east, center_north, radius){ \
	if (DownlinkCheckFreeSpace(_chan, DownlinkSizeOf(_chan, 0+4+4+4))) {\
	  DownlinkCountBytes(_chan, DownlinkSizeOf(_chan, 0+4+4+4)); \
	  DownlinkStartMessage(_chan, "CIRCLE", DL_CIRCLE, 0+4+4+4) \
	  DownlinkPutFloatByAddr(_chan, (center_east)); \
	  DownlinkPutFloatByAddr(_chan, (center_north)); \
	  DownlinkPutFloatByAddr(_chan, (radius)); \
	  DownlinkEndMessage(_chan ) \
	} else \
	  DownlinkOverrun(_chan ); \
}

#define DOWNLINK_SEND_SEGMENT(_chan, segment_east_1, segment_north_1, segment_east_2, segment_north_2){ \
	if (DownlinkCheckFreeSpace(_chan, DownlinkSizeOf(_chan, 0+4+4+4+4))) {\
	  DownlinkCountBytes(_chan, DownlinkSizeOf(_chan, 0+4+4+4+4)); \
	  DownlinkStartMessage(_chan, "SEGMENT", DL_SEGMENT, 0+4+4+4+4) \
	  DownlinkPutFloatByAddr(_chan, (segment_east_1)); \
	  DownlinkPutFloatByAddr(_chan, (segment_north_1)); \
	  DownlinkPutFloatByAddr(_chan, (segment_east_2)); \
	  DownlinkPutFloatByAddr(_chan, (segment_north_2)); \
	  DownlinkEndMessage(_chan ) \
	} else \
	  DownlinkOverrun(_chan ); \
}

#define DOWNLINK_SEND_DOWNLINK_STATUS(_chan, run_time, rx_bytes, rx_msgs, rx_err, rx_bytes_rate, rx_msgs_rate, ping_time){ \
	if (DownlinkCheckFreeSpace(_chan, DownlinkSizeOf(_chan, 0+4+4+4+4+4+4+4))) {\
	  DownlinkCountBytes(_chan, DownlinkSizeOf(_chan, 0+4+4+4+4+4+4+4)); \
	  DownlinkStartMessage(_chan, "DOWNLINK_STATUS", DL_DOWNLINK_STATUS, 0+4+4+4+4+4+4+4) \
	  DownlinkPutUint32ByAddr(_chan, (run_time)); \
	  DownlinkPutUint32ByAddr(_chan, (rx_bytes)); \
	  DownlinkPutUint32ByAddr(_chan, (rx_msgs)); \
	  DownlinkPutUint32ByAddr(_chan, (rx_err)); \
	  DownlinkPutFloatByAddr(_chan, (rx_bytes_rate)); \
	  DownlinkPutFloatByAddr(_chan, (rx_msgs_rate)); \
	  DownlinkPutFloatByAddr(_chan, (ping_time)); \
	  DownlinkEndMessage(_chan ) \
	} else \
	  DownlinkOverrun(_chan ); \
}

#define DOWNLINK_SEND_MODEM_STATUS(_chan, detected, valim, cd, nb_byte, nb_msg, nb_err){ \
	if (DownlinkCheckFreeSpace(_chan, DownlinkSizeOf(_chan, 0+1+4+1+4+4+4))) {\
	  DownlinkCountBytes(_chan, DownlinkSizeOf(_chan, 0+1+4+1+4+4+4)); \
	  DownlinkStartMessage(_chan, "MODEM_STATUS", DL_MODEM_STATUS, 0+1+4+1+4+4+4) \
	  DownlinkPutUint8ByAddr(_chan, (detected)); \
	  DownlinkPutFloatByAddr(_chan, (valim)); \
	  DownlinkPutUint8ByAddr(_chan, (cd)); \
	  DownlinkPutUint32ByAddr(_chan, (nb_byte)); \
	  DownlinkPutUint32ByAddr(_chan, (nb_msg)); \
	  DownlinkPutUint32ByAddr(_chan, (nb_err)); \
	  DownlinkEndMessage(_chan ) \
	} else \
	  DownlinkOverrun(_chan ); \
}

#define DOWNLINK_SEND_SVINFO(_chan, chn, SVID, Flags, QI, CNO, Elev, Azim){ \
	if (DownlinkCheckFreeSpace(_chan, DownlinkSizeOf(_chan, 0+1+1+1+1+1+1+2))) {\
	  DownlinkCountBytes(_chan, DownlinkSizeOf(_chan, 0+1+1+1+1+1+1+2)); \
	  DownlinkStartMessage(_chan, "SVINFO", DL_SVINFO, 0+1+1+1+1+1+1+2) \
	  DownlinkPutUint8ByAddr(_chan, (chn)); \
	  DownlinkPutUint8ByAddr(_chan, (SVID)); \
	  DownlinkPutUint8ByAddr(_chan, (Flags)); \
	  DownlinkPutUint8ByAddr(_chan, (QI)); \
	  DownlinkPutUint8ByAddr(_chan, (CNO)); \
	  DownlinkPutInt8ByAddr(_chan, (Elev)); \
	  DownlinkPutInt16ByAddr(_chan, (Azim)); \
	  DownlinkEndMessage(_chan ) \
	} else \
	  DownlinkOverrun(_chan ); \
}

#define DOWNLINK_SEND_DEBUG(_chan, nb_msg, msg){ \
	if (DownlinkCheckFreeSpace(_chan, DownlinkSizeOf(_chan, 0+1+nb_msg*1))) {\
	  DownlinkCountBytes(_chan, DownlinkSizeOf(_chan, 0+1+nb_msg*1)); \
	  DownlinkStartMessage(_chan, "DEBUG", DL_DEBUG, 0+1+nb_msg*1) \
	  DownlinkPutUint8Array(_chan, nb_msg, msg); \
	  DownlinkEndMessage(_chan ) \
	} else \
	  DownlinkOverrun(_chan ); \
}

#define DOWNLINK_SEND_SURVEY(_chan, east, north, west, south){ \
	if (DownlinkCheckFreeSpace(_chan, DownlinkSizeOf(_chan, 0+4+4+4+4))) {\
	  DownlinkCountBytes(_chan, DownlinkSizeOf(_chan, 0+4+4+4+4)); \
	  DownlinkStartMessage(_chan, "SURVEY", DL_SURVEY, 0+4+4+4+4) \
	  DownlinkPutFloatByAddr(_chan, (east)); \
	  DownlinkPutFloatByAddr(_chan, (north)); \
	  DownlinkPutFloatByAddr(_chan, (west)); \
	  DownlinkPutFloatByAddr(_chan, (south)); \
	  DownlinkEndMessage(_chan ) \
	} else \
	  DownlinkOverrun(_chan ); \
}

#define DOWNLINK_SEND_WC_RSSI(_chan, raw_level){ \
	if (DownlinkCheckFreeSpace(_chan, DownlinkSizeOf(_chan, 0+1))) {\
	  DownlinkCountBytes(_chan, DownlinkSizeOf(_chan, 0+1)); \
	  DownlinkStartMessage(_chan, "WC_RSSI", DL_WC_RSSI, 0+1) \
	  DownlinkPutUint8ByAddr(_chan, (raw_level)); \
	  DownlinkEndMessage(_chan ) \
	} else \
	  DownlinkOverrun(_chan ); \
}

#define DOWNLINK_SEND_RANGEFINDER(_chan, range, z_dot, z_dot_sum_err, z_dot_setpoint, z_sum_err, z_setpoint, flying){ \
	if (DownlinkCheckFreeSpace(_chan, DownlinkSizeOf(_chan, 0+2+4+4+4+4+4+1))) {\
	  DownlinkCountBytes(_chan, DownlinkSizeOf(_chan, 0+2+4+4+4+4+4+1)); \
	  DownlinkStartMessage(_chan, "RANGEFINDER", DL_RANGEFINDER, 0+2+4+4+4+4+4+1) \
	  DownlinkPutUint16ByAddr(_chan, (range)); \
	  DownlinkPutFloatByAddr(_chan, (z_dot)); \
	  DownlinkPutFloatByAddr(_chan, (z_dot_sum_err)); \
	  DownlinkPutFloatByAddr(_chan, (z_dot_setpoint)); \
	  DownlinkPutFloatByAddr(_chan, (z_sum_err)); \
	  DownlinkPutFloatByAddr(_chan, (z_setpoint)); \
	  DownlinkPutUint8ByAddr(_chan, (flying)); \
	  DownlinkEndMessage(_chan ) \
	} else \
	  DownlinkOverrun(_chan ); \
}

#define DOWNLINK_SEND_DOWNLINK(_chan, nb_ovrn, rate, nb_msgs){ \
	if (DownlinkCheckFreeSpace(_chan, DownlinkSizeOf(_chan, 0+1+2+2))) {\
	  DownlinkCountBytes(_chan, DownlinkSizeOf(_chan, 0+1+2+2)); \
	  DownlinkStartMessage(_chan, "DOWNLINK", DL_DOWNLINK, 0+1+2+2) \
	  DownlinkPutUint8ByAddr(_chan, (nb_ovrn)); \
	  DownlinkPutUint16ByAddr(_chan, (rate)); \
	  DownlinkPutUint16ByAddr(_chan, (nb_msgs)); \
	  DownlinkEndMessage(_chan ) \
	} else \
	  DownlinkOverrun(_chan ); \
}

#define DOWNLINK_SEND_DL_VALUE(_chan, index, value){ \
	if (DownlinkCheckFreeSpace(_chan, DownlinkSizeOf(_chan, 0+1+4))) {\
	  DownlinkCountBytes(_chan, DownlinkSizeOf(_chan, 0+1+4)); \
	  DownlinkStartMessage(_chan, "DL_VALUE", DL_DL_VALUE, 0+1+4) \
	  DownlinkPutUint8ByAddr(_chan, (index)); \
	  DownlinkPutFloatByAddr(_chan, (value)); \
	  DownlinkEndMessage(_chan ) \
	} else \
	  DownlinkOverrun(_chan ); \
}

#define DOWNLINK_SEND_MARK(_chan, ac_id, lat, long){ \
	if (DownlinkCheckFreeSpace(_chan, DownlinkSizeOf(_chan, 0+1+4+4))) {\
	  DownlinkCountBytes(_chan, DownlinkSizeOf(_chan, 0+1+4+4)); \
	  DownlinkStartMessage(_chan, "MARK", DL_MARK, 0+1+4+4) \
	  DownlinkPutUint8ByAddr(_chan, (ac_id)); \
	  DownlinkPutFloatByAddr(_chan, (lat)); \
	  DownlinkPutFloatByAddr(_chan, (long)); \
	  DownlinkEndMessage(_chan ) \
	} else \
	  DownlinkOverrun(_chan ); \
}

#define DOWNLINK_SEND_SYS_MON(_chan, periodic_time, periodic_cycle, periodic_cycle_min, periodic_cycle_max, event_number, cpu_load){ \
	if (DownlinkCheckFreeSpace(_chan, DownlinkSizeOf(_chan, 0+2+2+2+2+2+1))) {\
	  DownlinkCountBytes(_chan, DownlinkSizeOf(_chan, 0+2+2+2+2+2+1)); \
	  DownlinkStartMessage(_chan, "SYS_MON", DL_SYS_MON, 0+2+2+2+2+2+1) \
	  DownlinkPutUint16ByAddr(_chan, (periodic_time)); \
	  DownlinkPutUint16ByAddr(_chan, (periodic_cycle)); \
	  DownlinkPutUint16ByAddr(_chan, (periodic_cycle_min)); \
	  DownlinkPutUint16ByAddr(_chan, (periodic_cycle_max)); \
	  DownlinkPutUint16ByAddr(_chan, (event_number)); \
	  DownlinkPutUint8ByAddr(_chan, (cpu_load)); \
	  DownlinkEndMessage(_chan ) \
	} else \
	  DownlinkOverrun(_chan ); \
}

#define DOWNLINK_SEND_MOTOR(_chan, rpm, current){ \
	if (DownlinkCheckFreeSpace(_chan, DownlinkSizeOf(_chan, 0+2+4))) {\
	  DownlinkCountBytes(_chan, DownlinkSizeOf(_chan, 0+2+4)); \
	  DownlinkStartMessage(_chan, "MOTOR", DL_MOTOR, 0+2+4) \
	  DownlinkPutUint16ByAddr(_chan, (rpm)); \
	  DownlinkPutInt32ByAddr(_chan, (current)); \
	  DownlinkEndMessage(_chan ) \
	} else \
	  DownlinkOverrun(_chan ); \
}

#define DOWNLINK_SEND_WP_MOVED(_chan, wp_id, utm_east, utm_north, alt, utm_zone){ \
	if (DownlinkCheckFreeSpace(_chan, DownlinkSizeOf(_chan, 0+1+4+4+4+1))) {\
	  DownlinkCountBytes(_chan, DownlinkSizeOf(_chan, 0+1+4+4+4+1)); \
	  DownlinkStartMessage(_chan, "WP_MOVED", DL_WP_MOVED, 0+1+4+4+4+1) \
	  DownlinkPutUint8ByAddr(_chan, (wp_id)); \
	  DownlinkPutFloatByAddr(_chan, (utm_east)); \
	  DownlinkPutFloatByAddr(_chan, (utm_north)); \
	  DownlinkPutFloatByAddr(_chan, (alt)); \
	  DownlinkPutUint8ByAddr(_chan, (utm_zone)); \
	  DownlinkEndMessage(_chan ) \
	} else \
	  DownlinkOverrun(_chan ); \
}

#define DOWNLINK_SEND_GYRO_RATES(_chan, roll_adc, roll, pitch){ \
	if (DownlinkCheckFreeSpace(_chan, DownlinkSizeOf(_chan, 0+2+4+4))) {\
	  DownlinkCountBytes(_chan, DownlinkSizeOf(_chan, 0+2+4+4)); \
	  DownlinkStartMessage(_chan, "GYRO_RATES", DL_GYRO_RATES, 0+2+4+4) \
	  DownlinkPutInt16ByAddr(_chan, (roll_adc)); \
	  DownlinkPutFloatByAddr(_chan, (roll)); \
	  DownlinkPutFloatByAddr(_chan, (pitch)); \
	  DownlinkEndMessage(_chan ) \
	} else \
	  DownlinkOverrun(_chan ); \
}

#define DOWNLINK_SEND_ENERGY(_chan, bat, amp, energy, power){ \
	if (DownlinkCheckFreeSpace(_chan, DownlinkSizeOf(_chan, 0+4+4+2+4))) {\
	  DownlinkCountBytes(_chan, DownlinkSizeOf(_chan, 0+4+4+2+4)); \
	  DownlinkStartMessage(_chan, "ENERGY", DL_ENERGY, 0+4+4+2+4) \
	  DownlinkPutFloatByAddr(_chan, (bat)); \
	  DownlinkPutFloatByAddr(_chan, (amp)); \
	  DownlinkPutUint16ByAddr(_chan, (energy)); \
	  DownlinkPutFloatByAddr(_chan, (power)); \
	  DownlinkEndMessage(_chan ) \
	} else \
	  DownlinkOverrun(_chan ); \
}

#define DOWNLINK_SEND_BARO_BMP85_CALIB(_chan, a1, a2, a3, a4, a5, a6, b1, b2, mb, mc, md){ \
	if (DownlinkCheckFreeSpace(_chan, DownlinkSizeOf(_chan, 0+2+2+2+2+2+2+2+2+2+2+2))) {\
	  DownlinkCountBytes(_chan, DownlinkSizeOf(_chan, 0+2+2+2+2+2+2+2+2+2+2+2)); \
	  DownlinkStartMessage(_chan, "BARO_BMP85_CALIB", DL_BARO_BMP85_CALIB, 0+2+2+2+2+2+2+2+2+2+2+2) \
	  DownlinkPutInt16ByAddr(_chan, (a1)); \
	  DownlinkPutInt16ByAddr(_chan, (a2)); \
	  DownlinkPutInt16ByAddr(_chan, (a3)); \
	  DownlinkPutUint16ByAddr(_chan, (a4)); \
	  DownlinkPutUint16ByAddr(_chan, (a5)); \
	  DownlinkPutUint16ByAddr(_chan, (a6)); \
	  DownlinkPutInt16ByAddr(_chan, (b1)); \
	  DownlinkPutInt16ByAddr(_chan, (b2)); \
	  DownlinkPutInt16ByAddr(_chan, (mb)); \
	  DownlinkPutInt16ByAddr(_chan, (mc)); \
	  DownlinkPutInt16ByAddr(_chan, (md)); \
	  DownlinkEndMessage(_chan ) \
	} else \
	  DownlinkOverrun(_chan ); \
}

#define DOWNLINK_SEND_BARO_BMP85(_chan, UT, UP, P, T, MSL){ \
	if (DownlinkCheckFreeSpace(_chan, DownlinkSizeOf(_chan, 0+4+4+4+4+4))) {\
	  DownlinkCountBytes(_chan, DownlinkSizeOf(_chan, 0+4+4+4+4+4)); \
	  DownlinkStartMessage(_chan, "BARO_BMP85", DL_BARO_BMP85, 0+4+4+4+4+4) \
	  DownlinkPutInt32ByAddr(_chan, (UT)); \
	  DownlinkPutInt32ByAddr(_chan, (UP)); \
	  DownlinkPutUint32ByAddr(_chan, (P)); \
	  DownlinkPutFloatByAddr(_chan, (T)); \
	  DownlinkPutFloatByAddr(_chan, (MSL)); \
	  DownlinkEndMessage(_chan ) \
	} else \
	  DownlinkOverrun(_chan ); \
}

#define DOWNLINK_SEND_SPEED_LOOP(_chan, ve_set_point, ve, vn_set_point, vn, north_sp, east_sp){ \
	if (DownlinkCheckFreeSpace(_chan, DownlinkSizeOf(_chan, 0+4+4+4+4+4+4))) {\
	  DownlinkCountBytes(_chan, DownlinkSizeOf(_chan, 0+4+4+4+4+4+4)); \
	  DownlinkStartMessage(_chan, "SPEED_LOOP", DL_SPEED_LOOP, 0+4+4+4+4+4+4) \
	  DownlinkPutFloatByAddr(_chan, (ve_set_point)); \
	  DownlinkPutFloatByAddr(_chan, (ve)); \
	  DownlinkPutFloatByAddr(_chan, (vn_set_point)); \
	  DownlinkPutFloatByAddr(_chan, (vn)); \
	  DownlinkPutFloatByAddr(_chan, (north_sp)); \
	  DownlinkPutFloatByAddr(_chan, (east_sp)); \
	  DownlinkEndMessage(_chan ) \
	} else \
	  DownlinkOverrun(_chan ); \
}

#define DOWNLINK_SEND_ALT_KALMAN(_chan, p00, p01, p10, p11){ \
	if (DownlinkCheckFreeSpace(_chan, DownlinkSizeOf(_chan, 0+4+4+4+4))) {\
	  DownlinkCountBytes(_chan, DownlinkSizeOf(_chan, 0+4+4+4+4)); \
	  DownlinkStartMessage(_chan, "ALT_KALMAN", DL_ALT_KALMAN, 0+4+4+4+4) \
	  DownlinkPutFloatByAddr(_chan, (p00)); \
	  DownlinkPutFloatByAddr(_chan, (p01)); \
	  DownlinkPutFloatByAddr(_chan, (p10)); \
	  DownlinkPutFloatByAddr(_chan, (p11)); \
	  DownlinkEndMessage(_chan ) \
	} else \
	  DownlinkOverrun(_chan ); \
}

#define DOWNLINK_SEND_ESTIMATOR(_chan, z, z_dot){ \
	if (DownlinkCheckFreeSpace(_chan, DownlinkSizeOf(_chan, 0+4+4))) {\
	  DownlinkCountBytes(_chan, DownlinkSizeOf(_chan, 0+4+4)); \
	  DownlinkStartMessage(_chan, "ESTIMATOR", DL_ESTIMATOR, 0+4+4) \
	  DownlinkPutFloatByAddr(_chan, (z)); \
	  DownlinkPutFloatByAddr(_chan, (z_dot)); \
	  DownlinkEndMessage(_chan ) \
	} else \
	  DownlinkOverrun(_chan ); \
}

#define DOWNLINK_SEND_TUNE_ROLL(_chan, p, phi, phi_sp){ \
	if (DownlinkCheckFreeSpace(_chan, DownlinkSizeOf(_chan, 0+4+4+4))) {\
	  DownlinkCountBytes(_chan, DownlinkSizeOf(_chan, 0+4+4+4)); \
	  DownlinkStartMessage(_chan, "TUNE_ROLL", DL_TUNE_ROLL, 0+4+4+4) \
	  DownlinkPutFloatByAddr(_chan, (p)); \
	  DownlinkPutFloatByAddr(_chan, (phi)); \
	  DownlinkPutFloatByAddr(_chan, (phi_sp)); \
	  DownlinkEndMessage(_chan ) \
	} else \
	  DownlinkOverrun(_chan ); \
}

#define DOWNLINK_SEND_BARO_MS5534A(_chan, pressure, temp, alt){ \
	if (DownlinkCheckFreeSpace(_chan, DownlinkSizeOf(_chan, 0+4+2+4))) {\
	  DownlinkCountBytes(_chan, DownlinkSizeOf(_chan, 0+4+2+4)); \
	  DownlinkStartMessage(_chan, "BARO_MS5534A", DL_BARO_MS5534A, 0+4+2+4) \
	  DownlinkPutUint32ByAddr(_chan, (pressure)); \
	  DownlinkPutUint16ByAddr(_chan, (temp)); \
	  DownlinkPutFloatByAddr(_chan, (alt)); \
	  DownlinkEndMessage(_chan ) \
	} else \
	  DownlinkOverrun(_chan ); \
}

#define DOWNLINK_SEND_PRESSURE(_chan, airspeed_adc, airspeed, altitude_adc, altitude){ \
	if (DownlinkCheckFreeSpace(_chan, DownlinkSizeOf(_chan, 0+4+4+4+4))) {\
	  DownlinkCountBytes(_chan, DownlinkSizeOf(_chan, 0+4+4+4+4)); \
	  DownlinkStartMessage(_chan, "PRESSURE", DL_PRESSURE, 0+4+4+4+4) \
	  DownlinkPutFloatByAddr(_chan, (airspeed_adc)); \
	  DownlinkPutFloatByAddr(_chan, (airspeed)); \
	  DownlinkPutFloatByAddr(_chan, (altitude_adc)); \
	  DownlinkPutFloatByAddr(_chan, (altitude)); \
	  DownlinkEndMessage(_chan ) \
	} else \
	  DownlinkOverrun(_chan ); \
}

#define DOWNLINK_SEND_BARO_WORDS(_chan, w1, w2, w3, w4){ \
	if (DownlinkCheckFreeSpace(_chan, DownlinkSizeOf(_chan, 0+2+2+2+2))) {\
	  DownlinkCountBytes(_chan, DownlinkSizeOf(_chan, 0+2+2+2+2)); \
	  DownlinkStartMessage(_chan, "BARO_WORDS", DL_BARO_WORDS, 0+2+2+2+2) \
	  DownlinkPutUint16ByAddr(_chan, (w1)); \
	  DownlinkPutUint16ByAddr(_chan, (w2)); \
	  DownlinkPutUint16ByAddr(_chan, (w3)); \
	  DownlinkPutUint16ByAddr(_chan, (w4)); \
	  DownlinkEndMessage(_chan ) \
	} else \
	  DownlinkOverrun(_chan ); \
}

#define DOWNLINK_SEND_WP_MOVED_LLA(_chan, wp_id, lat, lon, alt){ \
	if (DownlinkCheckFreeSpace(_chan, DownlinkSizeOf(_chan, 0+1+4+4+4))) {\
	  DownlinkCountBytes(_chan, DownlinkSizeOf(_chan, 0+1+4+4+4)); \
	  DownlinkStartMessage(_chan, "WP_MOVED_LLA", DL_WP_MOVED_LLA, 0+1+4+4+4) \
	  DownlinkPutUint8ByAddr(_chan, (wp_id)); \
	  DownlinkPutInt32ByAddr(_chan, (lat)); \
	  DownlinkPutInt32ByAddr(_chan, (lon)); \
	  DownlinkPutInt32ByAddr(_chan, (alt)); \
	  DownlinkEndMessage(_chan ) \
	} else \
	  DownlinkOverrun(_chan ); \
}

#define DOWNLINK_SEND_CHRONO(_chan, tag, time){ \
	if (DownlinkCheckFreeSpace(_chan, DownlinkSizeOf(_chan, 0+1+4))) {\
	  DownlinkCountBytes(_chan, DownlinkSizeOf(_chan, 0+1+4)); \
	  DownlinkStartMessage(_chan, "CHRONO", DL_CHRONO, 0+1+4) \
	  DownlinkPutUint8ByAddr(_chan, (tag)); \
	  DownlinkPutUint32ByAddr(_chan, (time)); \
	  DownlinkEndMessage(_chan ) \
	} else \
	  DownlinkOverrun(_chan ); \
}

#define DOWNLINK_SEND_WP_MOVED_ENU(_chan, wp_id, east, north, up){ \
	if (DownlinkCheckFreeSpace(_chan, DownlinkSizeOf(_chan, 0+1+4+4+4))) {\
	  DownlinkCountBytes(_chan, DownlinkSizeOf(_chan, 0+1+4+4+4)); \
	  DownlinkStartMessage(_chan, "WP_MOVED_ENU", DL_WP_MOVED_ENU, 0+1+4+4+4) \
	  DownlinkPutUint8ByAddr(_chan, (wp_id)); \
	  DownlinkPutInt32ByAddr(_chan, (east)); \
	  DownlinkPutInt32ByAddr(_chan, (north)); \
	  DownlinkPutInt32ByAddr(_chan, (up)); \
	  DownlinkEndMessage(_chan ) \
	} else \
	  DownlinkOverrun(_chan ); \
}

#define DOWNLINK_SEND_WINDTURBINE_STATUS_(_chan, ac_id, tb_id, sync_itow, cycle_time){ \
	if (DownlinkCheckFreeSpace(_chan, DownlinkSizeOf(_chan, 0+1+1+4+4))) {\
	  DownlinkCountBytes(_chan, DownlinkSizeOf(_chan, 0+1+1+4+4)); \
	  DownlinkStartMessage(_chan, "WINDTURBINE_STATUS_", DL_WINDTURBINE_STATUS_, 0+1+1+4+4) \
	  DownlinkPutUint8ByAddr(_chan, (ac_id)); \
	  DownlinkPutUint8ByAddr(_chan, (tb_id)); \
	  DownlinkPutUint32ByAddr(_chan, (sync_itow)); \
	  DownlinkPutUint32ByAddr(_chan, (cycle_time)); \
	  DownlinkEndMessage(_chan ) \
	} else \
	  DownlinkOverrun(_chan ); \
}

#define DOWNLINK_SEND_RC_3CH_(_chan, throttle_mode, roll, pitch){ \
	if (DownlinkCheckFreeSpace(_chan, DownlinkSizeOf(_chan, 0+1+1+1))) {\
	  DownlinkCountBytes(_chan, DownlinkSizeOf(_chan, 0+1+1+1)); \
	  DownlinkStartMessage(_chan, "RC_3CH_", DL_RC_3CH_, 0+1+1+1) \
	  DownlinkPutUint8ByAddr(_chan, (throttle_mode)); \
	  DownlinkPutInt8ByAddr(_chan, (roll)); \
	  DownlinkPutInt8ByAddr(_chan, (pitch)); \
	  DownlinkEndMessage(_chan ) \
	} else \
	  DownlinkOverrun(_chan ); \
}

#define DOWNLINK_SEND_MPPT(_chan, nb_values, values){ \
	if (DownlinkCheckFreeSpace(_chan, DownlinkSizeOf(_chan, 0+1+nb_values*2))) {\
	  DownlinkCountBytes(_chan, DownlinkSizeOf(_chan, 0+1+nb_values*2)); \
	  DownlinkStartMessage(_chan, "MPPT", DL_MPPT, 0+1+nb_values*2) \
	  DownlinkPutInt16Array(_chan, nb_values, values); \
	  DownlinkEndMessage(_chan ) \
	} else \
	  DownlinkOverrun(_chan ); \
}

#define DOWNLINK_SEND_DEBUG_IR_I2C(_chan, ir1, ir2, top){ \
	if (DownlinkCheckFreeSpace(_chan, DownlinkSizeOf(_chan, 0+2+2+2))) {\
	  DownlinkCountBytes(_chan, DownlinkSizeOf(_chan, 0+2+2+2)); \
	  DownlinkStartMessage(_chan, "DEBUG_IR_I2C", DL_DEBUG_IR_I2C, 0+2+2+2) \
	  DownlinkPutInt16ByAddr(_chan, (ir1)); \
	  DownlinkPutInt16ByAddr(_chan, (ir2)); \
	  DownlinkPutInt16ByAddr(_chan, (top)); \
	  DownlinkEndMessage(_chan ) \
	} else \
	  DownlinkOverrun(_chan ); \
}

#define DOWNLINK_SEND_AIRSPEED(_chan, airspeed, airspeed_sp, airspeed_cnt, groundspeed_sp){ \
	if (DownlinkCheckFreeSpace(_chan, DownlinkSizeOf(_chan, 0+4+4+4+4))) {\
	  DownlinkCountBytes(_chan, DownlinkSizeOf(_chan, 0+4+4+4+4)); \
	  DownlinkStartMessage(_chan, "AIRSPEED", DL_AIRSPEED, 0+4+4+4+4) \
	  DownlinkPutFloatByAddr(_chan, (airspeed)); \
	  DownlinkPutFloatByAddr(_chan, (airspeed_sp)); \
	  DownlinkPutFloatByAddr(_chan, (airspeed_cnt)); \
	  DownlinkPutFloatByAddr(_chan, (groundspeed_sp)); \
	  DownlinkEndMessage(_chan ) \
	} else \
	  DownlinkOverrun(_chan ); \
}

#define DOWNLINK_SEND_XSENS(_chan, counter, p, q, r, phi, theta, psi, ax, ay, az, vx, vy, vz, lat, lon, alt, status, hour, min, sec, nanosec, year, month, day){ \
	if (DownlinkCheckFreeSpace(_chan, DownlinkSizeOf(_chan, 0+2+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4+1+1+1+1+4+2+1+1))) {\
	  DownlinkCountBytes(_chan, DownlinkSizeOf(_chan, 0+2+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4+1+1+1+1+4+2+1+1)); \
	  DownlinkStartMessage(_chan, "XSENS", DL_XSENS, 0+2+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4+1+1+1+1+4+2+1+1) \
	  DownlinkPutInt16ByAddr(_chan, (counter)); \
	  DownlinkPutFloatByAddr(_chan, (p)); \
	  DownlinkPutFloatByAddr(_chan, (q)); \
	  DownlinkPutFloatByAddr(_chan, (r)); \
	  DownlinkPutFloatByAddr(_chan, (phi)); \
	  DownlinkPutFloatByAddr(_chan, (theta)); \
	  DownlinkPutFloatByAddr(_chan, (psi)); \
	  DownlinkPutFloatByAddr(_chan, (ax)); \
	  DownlinkPutFloatByAddr(_chan, (ay)); \
	  DownlinkPutFloatByAddr(_chan, (az)); \
	  DownlinkPutFloatByAddr(_chan, (vx)); \
	  DownlinkPutFloatByAddr(_chan, (vy)); \
	  DownlinkPutFloatByAddr(_chan, (vz)); \
	  DownlinkPutFloatByAddr(_chan, (lat)); \
	  DownlinkPutFloatByAddr(_chan, (lon)); \
	  DownlinkPutFloatByAddr(_chan, (alt)); \
	  DownlinkPutUint8ByAddr(_chan, (status)); \
	  DownlinkPutUint8ByAddr(_chan, (hour)); \
	  DownlinkPutUint8ByAddr(_chan, (min)); \
	  DownlinkPutUint8ByAddr(_chan, (sec)); \
	  DownlinkPutUint32ByAddr(_chan, (nanosec)); \
	  DownlinkPutUint16ByAddr(_chan, (year)); \
	  DownlinkPutUint8ByAddr(_chan, (month)); \
	  DownlinkPutUint8ByAddr(_chan, (day)); \
	  DownlinkEndMessage(_chan ) \
	} else \
	  DownlinkOverrun(_chan ); \
}

#define DOWNLINK_SEND_BARO_ETS(_chan, adc, offset, scaled){ \
	if (DownlinkCheckFreeSpace(_chan, DownlinkSizeOf(_chan, 0+2+2+4))) {\
	  DownlinkCountBytes(_chan, DownlinkSizeOf(_chan, 0+2+2+4)); \
	  DownlinkStartMessage(_chan, "BARO_ETS", DL_BARO_ETS, 0+2+2+4) \
	  DownlinkPutUint16ByAddr(_chan, (adc)); \
	  DownlinkPutUint16ByAddr(_chan, (offset)); \
	  DownlinkPutFloatByAddr(_chan, (scaled)); \
	  DownlinkEndMessage(_chan ) \
	} else \
	  DownlinkOverrun(_chan ); \
}

#define DOWNLINK_SEND_AIRSPEED_ETS(_chan, adc, offset, scaled){ \
	if (DownlinkCheckFreeSpace(_chan, DownlinkSizeOf(_chan, 0+2+2+4))) {\
	  DownlinkCountBytes(_chan, DownlinkSizeOf(_chan, 0+2+2+4)); \
	  DownlinkStartMessage(_chan, "AIRSPEED_ETS", DL_AIRSPEED_ETS, 0+2+2+4) \
	  DownlinkPutUint16ByAddr(_chan, (adc)); \
	  DownlinkPutUint16ByAddr(_chan, (offset)); \
	  DownlinkPutFloatByAddr(_chan, (scaled)); \
	  DownlinkEndMessage(_chan ) \
	} else \
	  DownlinkOverrun(_chan ); \
}

#define DOWNLINK_SEND_PBN(_chan, airspeed_adc, altitude_adc, airspeed, altitude, airspeed_offset, altitude_offset){ \
	if (DownlinkCheckFreeSpace(_chan, DownlinkSizeOf(_chan, 0+2+2+4+4+2+2))) {\
	  DownlinkCountBytes(_chan, DownlinkSizeOf(_chan, 0+2+2+4+4+2+2)); \
	  DownlinkStartMessage(_chan, "PBN", DL_PBN, 0+2+2+4+4+2+2) \
	  DownlinkPutUint16ByAddr(_chan, (airspeed_adc)); \
	  DownlinkPutUint16ByAddr(_chan, (altitude_adc)); \
	  DownlinkPutFloatByAddr(_chan, (airspeed)); \
	  DownlinkPutFloatByAddr(_chan, (altitude)); \
	  DownlinkPutUint16ByAddr(_chan, (airspeed_offset)); \
	  DownlinkPutUint16ByAddr(_chan, (altitude_offset)); \
	  DownlinkEndMessage(_chan ) \
	} else \
	  DownlinkOverrun(_chan ); \
}

#define DOWNLINK_SEND_GPS_LLA(_chan, lat, lon, alt, course, speed, climb, week, itow, mode, gps_nb_err){ \
	if (DownlinkCheckFreeSpace(_chan, DownlinkSizeOf(_chan, 0+4+4+4+2+2+2+2+4+1+1))) {\
	  DownlinkCountBytes(_chan, DownlinkSizeOf(_chan, 0+4+4+4+2+2+2+2+4+1+1)); \
	  DownlinkStartMessage(_chan, "GPS_LLA", DL_GPS_LLA, 0+4+4+4+2+2+2+2+4+1+1) \
	  DownlinkPutInt32ByAddr(_chan, (lat)); \
	  DownlinkPutInt32ByAddr(_chan, (lon)); \
	  DownlinkPutInt32ByAddr(_chan, (alt)); \
	  DownlinkPutInt16ByAddr(_chan, (course)); \
	  DownlinkPutUint16ByAddr(_chan, (speed)); \
	  DownlinkPutInt16ByAddr(_chan, (climb)); \
	  DownlinkPutUint16ByAddr(_chan, (week)); \
	  DownlinkPutUint32ByAddr(_chan, (itow)); \
	  DownlinkPutUint8ByAddr(_chan, (mode)); \
	  DownlinkPutUint8ByAddr(_chan, (gps_nb_err)); \
	  DownlinkEndMessage(_chan ) \
	} else \
	  DownlinkOverrun(_chan ); \
}

#define DOWNLINK_SEND_H_CTL_A(_chan, roll_sum_err, ref_roll_angle, pitch_sum_err, ref_pitch_angle){ \
	if (DownlinkCheckFreeSpace(_chan, DownlinkSizeOf(_chan, 0+4+4+4+4))) {\
	  DownlinkCountBytes(_chan, DownlinkSizeOf(_chan, 0+4+4+4+4)); \
	  DownlinkStartMessage(_chan, "H_CTL_A", DL_H_CTL_A, 0+4+4+4+4) \
	  DownlinkPutFloatByAddr(_chan, (roll_sum_err)); \
	  DownlinkPutFloatByAddr(_chan, (ref_roll_angle)); \
	  DownlinkPutFloatByAddr(_chan, (pitch_sum_err)); \
	  DownlinkPutFloatByAddr(_chan, (ref_pitch_angle)); \
	  DownlinkEndMessage(_chan ) \
	} else \
	  DownlinkOverrun(_chan ); \
}

#define DOWNLINK_SEND_TURB_PRESSURE_RAW(_chan, ch_0, ch_1, ch_2, ch_3, ch_4, ch_5, ch_6, ch_7, ch_8, ch_9, ch_10, ch_11, ch_12, ch_13, ch_14, ch_15){ \
	if (DownlinkCheckFreeSpace(_chan, DownlinkSizeOf(_chan, 0+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4))) {\
	  DownlinkCountBytes(_chan, DownlinkSizeOf(_chan, 0+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4)); \
	  DownlinkStartMessage(_chan, "TURB_PRESSURE_RAW", DL_TURB_PRESSURE_RAW, 0+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4) \
	  DownlinkPutInt32ByAddr(_chan, (ch_0)); \
	  DownlinkPutInt32ByAddr(_chan, (ch_1)); \
	  DownlinkPutInt32ByAddr(_chan, (ch_2)); \
	  DownlinkPutInt32ByAddr(_chan, (ch_3)); \
	  DownlinkPutInt32ByAddr(_chan, (ch_4)); \
	  DownlinkPutInt32ByAddr(_chan, (ch_5)); \
	  DownlinkPutInt32ByAddr(_chan, (ch_6)); \
	  DownlinkPutInt32ByAddr(_chan, (ch_7)); \
	  DownlinkPutInt32ByAddr(_chan, (ch_8)); \
	  DownlinkPutInt32ByAddr(_chan, (ch_9)); \
	  DownlinkPutInt32ByAddr(_chan, (ch_10)); \
	  DownlinkPutInt32ByAddr(_chan, (ch_11)); \
	  DownlinkPutInt32ByAddr(_chan, (ch_12)); \
	  DownlinkPutInt32ByAddr(_chan, (ch_13)); \
	  DownlinkPutInt32ByAddr(_chan, (ch_14)); \
	  DownlinkPutInt32ByAddr(_chan, (ch_15)); \
	  DownlinkEndMessage(_chan ) \
	} else \
	  DownlinkOverrun(_chan ); \
}

#define DOWNLINK_SEND_TURB_PRESSURE_VOLTAGE(_chan, ch_1_p, ch_1_t, ch_2_p, ch_2_t, ch_3_p, ch_3_t, ch_4_p, ch_4_t, ch_5_p, ch_5_t, ch_6_p, ch_6_t, ch_7_p, ch_7_t, gnd1, gnd2){ \
	if (DownlinkCheckFreeSpace(_chan, DownlinkSizeOf(_chan, 0+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4))) {\
	  DownlinkCountBytes(_chan, DownlinkSizeOf(_chan, 0+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4)); \
	  DownlinkStartMessage(_chan, "TURB_PRESSURE_VOLTAGE", DL_TURB_PRESSURE_VOLTAGE, 0+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4) \
	  DownlinkPutFloatByAddr(_chan, (ch_1_p)); \
	  DownlinkPutFloatByAddr(_chan, (ch_1_t)); \
	  DownlinkPutFloatByAddr(_chan, (ch_2_p)); \
	  DownlinkPutFloatByAddr(_chan, (ch_2_t)); \
	  DownlinkPutFloatByAddr(_chan, (ch_3_p)); \
	  DownlinkPutFloatByAddr(_chan, (ch_3_t)); \
	  DownlinkPutFloatByAddr(_chan, (ch_4_p)); \
	  DownlinkPutFloatByAddr(_chan, (ch_4_t)); \
	  DownlinkPutFloatByAddr(_chan, (ch_5_p)); \
	  DownlinkPutFloatByAddr(_chan, (ch_5_t)); \
	  DownlinkPutFloatByAddr(_chan, (ch_6_p)); \
	  DownlinkPutFloatByAddr(_chan, (ch_6_t)); \
	  DownlinkPutFloatByAddr(_chan, (ch_7_p)); \
	  DownlinkPutFloatByAddr(_chan, (ch_7_t)); \
	  DownlinkPutFloatByAddr(_chan, (gnd1)); \
	  DownlinkPutFloatByAddr(_chan, (gnd2)); \
	  DownlinkEndMessage(_chan ) \
	} else \
	  DownlinkOverrun(_chan ); \
}

#define DOWNLINK_SEND_VF_UPDATE(_chan, baro, range_meter){ \
	if (DownlinkCheckFreeSpace(_chan, DownlinkSizeOf(_chan, 0+4+4))) {\
	  DownlinkCountBytes(_chan, DownlinkSizeOf(_chan, 0+4+4)); \
	  DownlinkStartMessage(_chan, "VF_UPDATE", DL_VF_UPDATE, 0+4+4) \
	  DownlinkPutFloatByAddr(_chan, (baro)); \
	  DownlinkPutFloatByAddr(_chan, (range_meter)); \
	  DownlinkEndMessage(_chan ) \
	} else \
	  DownlinkOverrun(_chan ); \
}

#define DOWNLINK_SEND_VF_PREDICT(_chan, accel){ \
	if (DownlinkCheckFreeSpace(_chan, DownlinkSizeOf(_chan, 0+4))) {\
	  DownlinkCountBytes(_chan, DownlinkSizeOf(_chan, 0+4)); \
	  DownlinkStartMessage(_chan, "VF_PREDICT", DL_VF_PREDICT, 0+4) \
	  DownlinkPutFloatByAddr(_chan, (accel)); \
	  DownlinkEndMessage(_chan ) \
	} else \
	  DownlinkOverrun(_chan ); \
}

#define DOWNLINK_SEND_CROSS_TRACK_ERROR(_chan, cross_track_error, cte_int){ \
	if (DownlinkCheckFreeSpace(_chan, DownlinkSizeOf(_chan, 0+4+4))) {\
	  DownlinkCountBytes(_chan, DownlinkSizeOf(_chan, 0+4+4)); \
	  DownlinkStartMessage(_chan, "CROSS_TRACK_ERROR", DL_CROSS_TRACK_ERROR, 0+4+4) \
	  DownlinkPutFloatByAddr(_chan, (cross_track_error)); \
	  DownlinkPutFloatByAddr(_chan, (cte_int)); \
	  DownlinkEndMessage(_chan ) \
	} else \
	  DownlinkOverrun(_chan ); \
}

#define DOWNLINK_SEND_ESTIMATOR_COMP_FILTER(_chan, gyro_hp_last_out, gyro_int, gps_lp_last_out, ir_lp_last_out){ \
	if (DownlinkCheckFreeSpace(_chan, DownlinkSizeOf(_chan, 0+4+4+4+4))) {\
	  DownlinkCountBytes(_chan, DownlinkSizeOf(_chan, 0+4+4+4+4)); \
	  DownlinkStartMessage(_chan, "ESTIMATOR_COMP_FILTER", DL_ESTIMATOR_COMP_FILTER, 0+4+4+4+4) \
	  DownlinkPutFloatByAddr(_chan, (gyro_hp_last_out)); \
	  DownlinkPutFloatByAddr(_chan, (gyro_int)); \
	  DownlinkPutFloatByAddr(_chan, (gps_lp_last_out)); \
	  DownlinkPutFloatByAddr(_chan, (ir_lp_last_out)); \
	  DownlinkEndMessage(_chan ) \
	} else \
	  DownlinkOverrun(_chan ); \
}

#define DOWNLINK_SEND_FORMATION_SLOT_TM(_chan, ac_id, mode, slot_east, slot_north, slot_alt){ \
	if (DownlinkCheckFreeSpace(_chan, DownlinkSizeOf(_chan, 0+1+1+4+4+4))) {\
	  DownlinkCountBytes(_chan, DownlinkSizeOf(_chan, 0+1+1+4+4+4)); \
	  DownlinkStartMessage(_chan, "FORMATION_SLOT_TM", DL_FORMATION_SLOT_TM, 0+1+1+4+4+4) \
	  DownlinkPutUint8ByAddr(_chan, (ac_id)); \
	  DownlinkPutUint8ByAddr(_chan, (mode)); \
	  DownlinkPutFloatByAddr(_chan, (slot_east)); \
	  DownlinkPutFloatByAddr(_chan, (slot_north)); \
	  DownlinkPutFloatByAddr(_chan, (slot_alt)); \
	  DownlinkEndMessage(_chan ) \
	} else \
	  DownlinkOverrun(_chan ); \
}

#define DOWNLINK_SEND_FORMATION_STATUS_TM(_chan, ac_id, leader_id, status){ \
	if (DownlinkCheckFreeSpace(_chan, DownlinkSizeOf(_chan, 0+1+1+1))) {\
	  DownlinkCountBytes(_chan, DownlinkSizeOf(_chan, 0+1+1+1)); \
	  DownlinkStartMessage(_chan, "FORMATION_STATUS_TM", DL_FORMATION_STATUS_TM, 0+1+1+1) \
	  DownlinkPutUint8ByAddr(_chan, (ac_id)); \
	  DownlinkPutUint8ByAddr(_chan, (leader_id)); \
	  DownlinkPutUint8ByAddr(_chan, (status)); \
	  DownlinkEndMessage(_chan ) \
	} else \
	  DownlinkOverrun(_chan ); \
}

#define DOWNLINK_SEND_BMP_STATUS(_chan, press, temp){ \
	if (DownlinkCheckFreeSpace(_chan, DownlinkSizeOf(_chan, 0+4+4))) {\
	  DownlinkCountBytes(_chan, DownlinkSizeOf(_chan, 0+4+4)); \
	  DownlinkStartMessage(_chan, "BMP_STATUS", DL_BMP_STATUS, 0+4+4) \
	  DownlinkPutInt32ByAddr(_chan, (press)); \
	  DownlinkPutInt32ByAddr(_chan, (temp)); \
	  DownlinkEndMessage(_chan ) \
	} else \
	  DownlinkOverrun(_chan ); \
}

#define DOWNLINK_SEND_MLX_STATUS(_chan, itemp_case, temp_case, itemp_obj, temp_obj){ \
	if (DownlinkCheckFreeSpace(_chan, DownlinkSizeOf(_chan, 0+2+4+2+4))) {\
	  DownlinkCountBytes(_chan, DownlinkSizeOf(_chan, 0+2+4+2+4)); \
	  DownlinkStartMessage(_chan, "MLX_STATUS", DL_MLX_STATUS, 0+2+4+2+4) \
	  DownlinkPutUint16ByAddr(_chan, (itemp_case)); \
	  DownlinkPutFloatByAddr(_chan, (temp_case)); \
	  DownlinkPutUint16ByAddr(_chan, (itemp_obj)); \
	  DownlinkPutFloatByAddr(_chan, (temp_obj)); \
	  DownlinkEndMessage(_chan ) \
	} else \
	  DownlinkOverrun(_chan ); \
}

#define DOWNLINK_SEND_TMP_STATUS(_chan, itemp, temp){ \
	if (DownlinkCheckFreeSpace(_chan, DownlinkSizeOf(_chan, 0+2+4))) {\
	  DownlinkCountBytes(_chan, DownlinkSizeOf(_chan, 0+2+4)); \
	  DownlinkStartMessage(_chan, "TMP_STATUS", DL_TMP_STATUS, 0+2+4) \
	  DownlinkPutUint16ByAddr(_chan, (itemp)); \
	  DownlinkPutFloatByAddr(_chan, (temp)); \
	  DownlinkEndMessage(_chan ) \
	} else \
	  DownlinkOverrun(_chan ); \
}

#define DOWNLINK_SEND_WIND_INFO_RET(_chan, east, north, airspeed){ \
	if (DownlinkCheckFreeSpace(_chan, DownlinkSizeOf(_chan, 0+4+4+4))) {\
	  DownlinkCountBytes(_chan, DownlinkSizeOf(_chan, 0+4+4+4)); \
	  DownlinkStartMessage(_chan, "WIND_INFO_RET", DL_WIND_INFO_RET, 0+4+4+4) \
	  DownlinkPutFloatByAddr(_chan, (east)); \
	  DownlinkPutFloatByAddr(_chan, (north)); \
	  DownlinkPutFloatByAddr(_chan, (airspeed)); \
	  DownlinkEndMessage(_chan ) \
	} else \
	  DownlinkOverrun(_chan ); \
}

#define DOWNLINK_SEND_SCP_STATUS(_chan, press, temp){ \
	if (DownlinkCheckFreeSpace(_chan, DownlinkSizeOf(_chan, 0+4+2))) {\
	  DownlinkCountBytes(_chan, DownlinkSizeOf(_chan, 0+4+2)); \
	  DownlinkStartMessage(_chan, "SCP_STATUS", DL_SCP_STATUS, 0+4+2) \
	  DownlinkPutUint32ByAddr(_chan, (press)); \
	  DownlinkPutInt16ByAddr(_chan, (temp)); \
	  DownlinkEndMessage(_chan ) \
	} else \
	  DownlinkOverrun(_chan ); \
}

#define DOWNLINK_SEND_SHT_STATUS(_chan, ihumid, itemp, humid, temp){ \
	if (DownlinkCheckFreeSpace(_chan, DownlinkSizeOf(_chan, 0+2+2+4+4))) {\
	  DownlinkCountBytes(_chan, DownlinkSizeOf(_chan, 0+2+2+4+4)); \
	  DownlinkStartMessage(_chan, "SHT_STATUS", DL_SHT_STATUS, 0+2+2+4+4) \
	  DownlinkPutUint16ByAddr(_chan, (ihumid)); \
	  DownlinkPutUint16ByAddr(_chan, (itemp)); \
	  DownlinkPutFloatByAddr(_chan, (humid)); \
	  DownlinkPutFloatByAddr(_chan, (temp)); \
	  DownlinkEndMessage(_chan ) \
	} else \
	  DownlinkOverrun(_chan ); \
}

#define DOWNLINK_SEND_ENOSE_STATUS(_chan, val1, val2, val3, PID, nb_heat, heat){ \
	if (DownlinkCheckFreeSpace(_chan, DownlinkSizeOf(_chan, 0+2+2+2+2+1+nb_heat*1))) {\
	  DownlinkCountBytes(_chan, DownlinkSizeOf(_chan, 0+2+2+2+2+1+nb_heat*1)); \
	  DownlinkStartMessage(_chan, "ENOSE_STATUS", DL_ENOSE_STATUS, 0+2+2+2+2+1+nb_heat*1) \
	  DownlinkPutUint16ByAddr(_chan, (val1)); \
	  DownlinkPutUint16ByAddr(_chan, (val2)); \
	  DownlinkPutUint16ByAddr(_chan, (val3)); \
	  DownlinkPutUint16ByAddr(_chan, (PID)); \
	  DownlinkPutUint8Array(_chan, nb_heat, heat); \
	  DownlinkEndMessage(_chan ) \
	} else \
	  DownlinkOverrun(_chan ); \
}

#define DOWNLINK_SEND_DPICCO_STATUS(_chan, humid, temp, fhumid, ftemp){ \
	if (DownlinkCheckFreeSpace(_chan, DownlinkSizeOf(_chan, 0+2+2+4+4))) {\
	  DownlinkCountBytes(_chan, DownlinkSizeOf(_chan, 0+2+2+4+4)); \
	  DownlinkStartMessage(_chan, "DPICCO_STATUS", DL_DPICCO_STATUS, 0+2+2+4+4) \
	  DownlinkPutUint16ByAddr(_chan, (humid)); \
	  DownlinkPutUint16ByAddr(_chan, (temp)); \
	  DownlinkPutFloatByAddr(_chan, (fhumid)); \
	  DownlinkPutFloatByAddr(_chan, (ftemp)); \
	  DownlinkEndMessage(_chan ) \
	} else \
	  DownlinkOverrun(_chan ); \
}

#define DOWNLINK_SEND_ANTENNA_DEBUG(_chan, mag_xraw, mag_yraw, mag_xcal, mag_ycal, mag_heading, mag_magnitude, mag_temp, mag_distor, mag_cal_status){ \
	if (DownlinkCheckFreeSpace(_chan, DownlinkSizeOf(_chan, 0+4+4+4+4+4+4+4+1+1))) {\
	  DownlinkCountBytes(_chan, DownlinkSizeOf(_chan, 0+4+4+4+4+4+4+4+1+1)); \
	  DownlinkStartMessage(_chan, "ANTENNA_DEBUG", DL_ANTENNA_DEBUG, 0+4+4+4+4+4+4+4+1+1) \
	  DownlinkPutInt32ByAddr(_chan, (mag_xraw)); \
	  DownlinkPutInt32ByAddr(_chan, (mag_yraw)); \
	  DownlinkPutFloatByAddr(_chan, (mag_xcal)); \
	  DownlinkPutFloatByAddr(_chan, (mag_ycal)); \
	  DownlinkPutFloatByAddr(_chan, (mag_heading)); \
	  DownlinkPutFloatByAddr(_chan, (mag_magnitude)); \
	  DownlinkPutFloatByAddr(_chan, (mag_temp)); \
	  DownlinkPutUint8ByAddr(_chan, (mag_distor)); \
	  DownlinkPutUint8ByAddr(_chan, (mag_cal_status)); \
	  DownlinkEndMessage(_chan ) \
	} else \
	  DownlinkOverrun(_chan ); \
}

#define DOWNLINK_SEND_ANTENNA_STATUS(_chan, azim_sp, elev_sp, id_sp, mode){ \
	if (DownlinkCheckFreeSpace(_chan, DownlinkSizeOf(_chan, 0+4+4+1+1))) {\
	  DownlinkCountBytes(_chan, DownlinkSizeOf(_chan, 0+4+4+1+1)); \
	  DownlinkStartMessage(_chan, "ANTENNA_STATUS", DL_ANTENNA_STATUS, 0+4+4+1+1) \
	  DownlinkPutFloatByAddr(_chan, (azim_sp)); \
	  DownlinkPutFloatByAddr(_chan, (elev_sp)); \
	  DownlinkPutUint8ByAddr(_chan, (id_sp)); \
	  DownlinkPutUint8ByAddr(_chan, (mode)); \
	  DownlinkEndMessage(_chan ) \
	} else \
	  DownlinkOverrun(_chan ); \
}

#define DOWNLINK_SEND_MOTOR_BENCH_STATUS(_chan, time_ticks, throttle, rpm, current, thrust, torque, time_s, mode){ \
	if (DownlinkCheckFreeSpace(_chan, DownlinkSizeOf(_chan, 0+4+4+4+4+4+4+2+1))) {\
	  DownlinkCountBytes(_chan, DownlinkSizeOf(_chan, 0+4+4+4+4+4+4+2+1)); \
	  DownlinkStartMessage(_chan, "MOTOR_BENCH_STATUS", DL_MOTOR_BENCH_STATUS, 0+4+4+4+4+4+4+2+1) \
	  DownlinkPutUint32ByAddr(_chan, (time_ticks)); \
	  DownlinkPutFloatByAddr(_chan, (throttle)); \
	  DownlinkPutFloatByAddr(_chan, (rpm)); \
	  DownlinkPutFloatByAddr(_chan, (current)); \
	  DownlinkPutFloatByAddr(_chan, (thrust)); \
	  DownlinkPutFloatByAddr(_chan, (torque)); \
	  DownlinkPutUint16ByAddr(_chan, (time_s)); \
	  DownlinkPutUint8ByAddr(_chan, (mode)); \
	  DownlinkEndMessage(_chan ) \
	} else \
	  DownlinkOverrun(_chan ); \
}

#define DOWNLINK_SEND_MOTOR_BENCH_STATIC(_chan, av_rpm, av_thrust, av_current, throttle){ \
	if (DownlinkCheckFreeSpace(_chan, DownlinkSizeOf(_chan, 0+4+4+4+2))) {\
	  DownlinkCountBytes(_chan, DownlinkSizeOf(_chan, 0+4+4+4+2)); \
	  DownlinkStartMessage(_chan, "MOTOR_BENCH_STATIC", DL_MOTOR_BENCH_STATIC, 0+4+4+4+2) \
	  DownlinkPutFloatByAddr(_chan, (av_rpm)); \
	  DownlinkPutFloatByAddr(_chan, (av_thrust)); \
	  DownlinkPutFloatByAddr(_chan, (av_current)); \
	  DownlinkPutUint16ByAddr(_chan, (throttle)); \
	  DownlinkEndMessage(_chan ) \
	} else \
	  DownlinkOverrun(_chan ); \
}

#define DOWNLINK_SEND_HIH_STATUS(_chan, humid, fhumid, ftemp){ \
	if (DownlinkCheckFreeSpace(_chan, DownlinkSizeOf(_chan, 0+2+4+4))) {\
	  DownlinkCountBytes(_chan, DownlinkSizeOf(_chan, 0+2+4+4)); \
	  DownlinkStartMessage(_chan, "HIH_STATUS", DL_HIH_STATUS, 0+2+4+4) \
	  DownlinkPutUint16ByAddr(_chan, (humid)); \
	  DownlinkPutFloatByAddr(_chan, (fhumid)); \
	  DownlinkPutFloatByAddr(_chan, (ftemp)); \
	  DownlinkEndMessage(_chan ) \
	} else \
	  DownlinkOverrun(_chan ); \
}

#define DOWNLINK_SEND_TEMT_STATUS(_chan, light, f_light){ \
	if (DownlinkCheckFreeSpace(_chan, DownlinkSizeOf(_chan, 0+2+4))) {\
	  DownlinkCountBytes(_chan, DownlinkSizeOf(_chan, 0+2+4)); \
	  DownlinkStartMessage(_chan, "TEMT_STATUS", DL_TEMT_STATUS, 0+2+4) \
	  DownlinkPutUint16ByAddr(_chan, (light)); \
	  DownlinkPutFloatByAddr(_chan, (f_light)); \
	  DownlinkEndMessage(_chan ) \
	} else \
	  DownlinkOverrun(_chan ); \
}

#define DOWNLINK_SEND_GP2Y_STATUS(_chan, idensity, density){ \
	if (DownlinkCheckFreeSpace(_chan, DownlinkSizeOf(_chan, 0+2+4))) {\
	  DownlinkCountBytes(_chan, DownlinkSizeOf(_chan, 0+2+4)); \
	  DownlinkStartMessage(_chan, "GP2Y_STATUS", DL_GP2Y_STATUS, 0+2+4) \
	  DownlinkPutUint16ByAddr(_chan, (idensity)); \
	  DownlinkPutFloatByAddr(_chan, (density)); \
	  DownlinkEndMessage(_chan ) \
	} else \
	  DownlinkOverrun(_chan ); \
}

#define DOWNLINK_SEND_SHT_SERIAL(_chan, serial0, serial1){ \
	if (DownlinkCheckFreeSpace(_chan, DownlinkSizeOf(_chan, 0+4+4))) {\
	  DownlinkCountBytes(_chan, DownlinkSizeOf(_chan, 0+4+4)); \
	  DownlinkStartMessage(_chan, "SHT_SERIAL", DL_SHT_SERIAL, 0+4+4) \
	  DownlinkPutUint32ByAddr(_chan, (serial0)); \
	  DownlinkPutUint32ByAddr(_chan, (serial1)); \
	  DownlinkEndMessage(_chan ) \
	} else \
	  DownlinkOverrun(_chan ); \
}

#define DOWNLINK_SEND_PPM(_chan, ppm_rate, nb_values, values){ \
	if (DownlinkCheckFreeSpace(_chan, DownlinkSizeOf(_chan, 0+1+1+nb_values*2))) {\
	  DownlinkCountBytes(_chan, DownlinkSizeOf(_chan, 0+1+1+nb_values*2)); \
	  DownlinkStartMessage(_chan, "PPM", DL_PPM, 0+1+1+nb_values*2) \
	  DownlinkPutUint8ByAddr(_chan, (ppm_rate)); \
	  DownlinkPutUint16Array(_chan, nb_values, values); \
	  DownlinkEndMessage(_chan ) \
	} else \
	  DownlinkOverrun(_chan ); \
}

#define DOWNLINK_SEND_RC(_chan, nb_values, values){ \
	if (DownlinkCheckFreeSpace(_chan, DownlinkSizeOf(_chan, 0+1+nb_values*2))) {\
	  DownlinkCountBytes(_chan, DownlinkSizeOf(_chan, 0+1+nb_values*2)); \
	  DownlinkStartMessage(_chan, "RC", DL_RC, 0+1+nb_values*2) \
	  DownlinkPutInt16Array(_chan, nb_values, values); \
	  DownlinkEndMessage(_chan ) \
	} else \
	  DownlinkOverrun(_chan ); \
}

#define DOWNLINK_SEND_COMMANDS(_chan, nb_values, values){ \
	if (DownlinkCheckFreeSpace(_chan, DownlinkSizeOf(_chan, 0+1+nb_values*2))) {\
	  DownlinkCountBytes(_chan, DownlinkSizeOf(_chan, 0+1+nb_values*2)); \
	  DownlinkStartMessage(_chan, "COMMANDS", DL_COMMANDS, 0+1+nb_values*2) \
	  DownlinkPutInt16Array(_chan, nb_values, values); \
	  DownlinkEndMessage(_chan ) \
	} else \
	  DownlinkOverrun(_chan ); \
}

#define DOWNLINK_SEND_FBW_STATUS(_chan, rc_status, frame_rate, mode, vsupply, current){ \
	if (DownlinkCheckFreeSpace(_chan, DownlinkSizeOf(_chan, 0+1+1+1+1+4))) {\
	  DownlinkCountBytes(_chan, DownlinkSizeOf(_chan, 0+1+1+1+1+4)); \
	  DownlinkStartMessage(_chan, "FBW_STATUS", DL_FBW_STATUS, 0+1+1+1+1+4) \
	  DownlinkPutUint8ByAddr(_chan, (rc_status)); \
	  DownlinkPutUint8ByAddr(_chan, (frame_rate)); \
	  DownlinkPutUint8ByAddr(_chan, (mode)); \
	  DownlinkPutUint8ByAddr(_chan, (vsupply)); \
	  DownlinkPutInt32ByAddr(_chan, (current)); \
	  DownlinkEndMessage(_chan ) \
	} else \
	  DownlinkOverrun(_chan ); \
}

#define DOWNLINK_SEND_ADC(_chan, mcu, nb_values, values){ \
	if (DownlinkCheckFreeSpace(_chan, DownlinkSizeOf(_chan, 0+1+1+nb_values*2))) {\
	  DownlinkCountBytes(_chan, DownlinkSizeOf(_chan, 0+1+1+nb_values*2)); \
	  DownlinkStartMessage(_chan, "ADC", DL_ADC, 0+1+1+nb_values*2) \
	  DownlinkPutUint8ByAddr(_chan, (mcu)); \
	  DownlinkPutUint16Array(_chan, nb_values, values); \
	  DownlinkEndMessage(_chan ) \
	} else \
	  DownlinkOverrun(_chan ); \
}

#define DOWNLINK_SEND_ACTUATORS(_chan, nb_values, values){ \
	if (DownlinkCheckFreeSpace(_chan, DownlinkSizeOf(_chan, 0+1+nb_values*2))) {\
	  DownlinkCountBytes(_chan, DownlinkSizeOf(_chan, 0+1+nb_values*2)); \
	  DownlinkStartMessage(_chan, "ACTUATORS", DL_ACTUATORS, 0+1+nb_values*2) \
	  DownlinkPutUint16Array(_chan, nb_values, values); \
	  DownlinkEndMessage(_chan ) \
	} else \
	  DownlinkOverrun(_chan ); \
}

#define DOWNLINK_SEND_BETH(_chan, azimuth, elevation, tilt, counter, can_errs, spi_errs, thrust_out, pitch_out){ \
	if (DownlinkCheckFreeSpace(_chan, DownlinkSizeOf(_chan, 0+2+2+2+4+2+2+1+1))) {\
	  DownlinkCountBytes(_chan, DownlinkSizeOf(_chan, 0+2+2+2+4+2+2+1+1)); \
	  DownlinkStartMessage(_chan, "BETH", DL_BETH, 0+2+2+2+4+2+2+1+1) \
	  DownlinkPutInt16ByAddr(_chan, (azimuth)); \
	  DownlinkPutInt16ByAddr(_chan, (elevation)); \
	  DownlinkPutInt16ByAddr(_chan, (tilt)); \
	  DownlinkPutUint32ByAddr(_chan, (counter)); \
	  DownlinkPutUint16ByAddr(_chan, (can_errs)); \
	  DownlinkPutUint16ByAddr(_chan, (spi_errs)); \
	  DownlinkPutInt8ByAddr(_chan, (thrust_out)); \
	  DownlinkPutInt8ByAddr(_chan, (pitch_out)); \
	  DownlinkEndMessage(_chan ) \
	} else \
	  DownlinkOverrun(_chan ); \
}

#define DOWNLINK_SEND_BETH_ESTIMATOR(_chan, tilt, tilt_dot, elevation, elevation_dot, azimuth, azimuth_dot){ \
	if (DownlinkCheckFreeSpace(_chan, DownlinkSizeOf(_chan, 0+4+4+4+4+4+4))) {\
	  DownlinkCountBytes(_chan, DownlinkSizeOf(_chan, 0+4+4+4+4+4+4)); \
	  DownlinkStartMessage(_chan, "BETH_ESTIMATOR", DL_BETH_ESTIMATOR, 0+4+4+4+4+4+4) \
	  DownlinkPutFloatByAddr(_chan, (tilt)); \
	  DownlinkPutFloatByAddr(_chan, (tilt_dot)); \
	  DownlinkPutFloatByAddr(_chan, (elevation)); \
	  DownlinkPutFloatByAddr(_chan, (elevation_dot)); \
	  DownlinkPutFloatByAddr(_chan, (azimuth)); \
	  DownlinkPutFloatByAddr(_chan, (azimuth_dot)); \
	  DownlinkEndMessage(_chan ) \
	} else \
	  DownlinkOverrun(_chan ); \
}

#define DOWNLINK_SEND_BETH_CONTROLLER(_chan, pitch, thrust, pitch_ff, pitch_fb, thrust_ff, thrust_fb, tilt_sp, tilt_ref, tilt_dot_ref, elevation_sp , elevation_ref , elevation_dot_ref, azimuth_sp){ \
	if (DownlinkCheckFreeSpace(_chan, DownlinkSizeOf(_chan, 0+4+4+4+4+4+4+4+4+4+4+4+4+4))) {\
	  DownlinkCountBytes(_chan, DownlinkSizeOf(_chan, 0+4+4+4+4+4+4+4+4+4+4+4+4+4)); \
	  DownlinkStartMessage(_chan, "BETH_CONTROLLER", DL_BETH_CONTROLLER, 0+4+4+4+4+4+4+4+4+4+4+4+4+4) \
	  DownlinkPutFloatByAddr(_chan, (pitch)); \
	  DownlinkPutFloatByAddr(_chan, (thrust)); \
	  DownlinkPutFloatByAddr(_chan, (pitch_ff)); \
	  DownlinkPutFloatByAddr(_chan, (pitch_fb)); \
	  DownlinkPutFloatByAddr(_chan, (thrust_ff)); \
	  DownlinkPutFloatByAddr(_chan, (thrust_fb)); \
	  DownlinkPutFloatByAddr(_chan, (tilt_sp)); \
	  DownlinkPutFloatByAddr(_chan, (tilt_ref)); \
	  DownlinkPutFloatByAddr(_chan, (tilt_dot_ref)); \
	  DownlinkPutFloatByAddr(_chan, (elevation_sp )); \
	  DownlinkPutFloatByAddr(_chan, (elevation_ref )); \
	  DownlinkPutFloatByAddr(_chan, (elevation_dot_ref)); \
	  DownlinkPutFloatByAddr(_chan, (azimuth_sp)); \
	  DownlinkEndMessage(_chan ) \
	} else \
	  DownlinkOverrun(_chan ); \
}

#define DOWNLINK_SEND_BETH_CONTROLLER_TWIST(_chan, S, S_dot, U_twt, error){ \
	if (DownlinkCheckFreeSpace(_chan, DownlinkSizeOf(_chan, 0+4+4+4+4))) {\
	  DownlinkCountBytes(_chan, DownlinkSizeOf(_chan, 0+4+4+4+4)); \
	  DownlinkStartMessage(_chan, "BETH_CONTROLLER_TWIST", DL_BETH_CONTROLLER_TWIST, 0+4+4+4+4) \
	  DownlinkPutFloatByAddr(_chan, (S)); \
	  DownlinkPutFloatByAddr(_chan, (S_dot)); \
	  DownlinkPutFloatByAddr(_chan, (U_twt)); \
	  DownlinkPutFloatByAddr(_chan, (error)); \
	  DownlinkEndMessage(_chan ) \
	} else \
	  DownlinkOverrun(_chan ); \
}

#define DOWNLINK_SEND_DC_SHOT(_chan, photo_nr, utm_east, utm_north, z, utm_zone, phi, theta, course, speed, itow){ \
	if (DownlinkCheckFreeSpace(_chan, DownlinkSizeOf(_chan, 0+2+4+4+4+1+2+2+2+2+4))) {\
	  DownlinkCountBytes(_chan, DownlinkSizeOf(_chan, 0+2+4+4+4+1+2+2+2+2+4)); \
	  DownlinkStartMessage(_chan, "DC_SHOT", DL_DC_SHOT, 0+2+4+4+4+1+2+2+2+2+4) \
	  DownlinkPutInt16ByAddr(_chan, (photo_nr)); \
	  DownlinkPutInt32ByAddr(_chan, (utm_east)); \
	  DownlinkPutInt32ByAddr(_chan, (utm_north)); \
	  DownlinkPutFloatByAddr(_chan, (z)); \
	  DownlinkPutUint8ByAddr(_chan, (utm_zone)); \
	  DownlinkPutInt16ByAddr(_chan, (phi)); \
	  DownlinkPutInt16ByAddr(_chan, (theta)); \
	  DownlinkPutInt16ByAddr(_chan, (course)); \
	  DownlinkPutUint16ByAddr(_chan, (speed)); \
	  DownlinkPutUint32ByAddr(_chan, (itow)); \
	  DownlinkEndMessage(_chan ) \
	} else \
	  DownlinkOverrun(_chan ); \
}

#define DOWNLINK_SEND_TEST_BOARD_RESULTS(_chan, uart, ppm, nb_servo, servo){ \
	if (DownlinkCheckFreeSpace(_chan, DownlinkSizeOf(_chan, 0+1+1+1+nb_servo*2))) {\
	  DownlinkCountBytes(_chan, DownlinkSizeOf(_chan, 0+1+1+1+nb_servo*2)); \
	  DownlinkStartMessage(_chan, "TEST_BOARD_RESULTS", DL_TEST_BOARD_RESULTS, 0+1+1+1+nb_servo*2) \
	  DownlinkPutUint8ByAddr(_chan, (uart)); \
	  DownlinkPutUint8ByAddr(_chan, (ppm)); \
	  DownlinkPutUint16Array(_chan, nb_servo, servo); \
	  DownlinkEndMessage(_chan ) \
	} else \
	  DownlinkOverrun(_chan ); \
}

#define DOWNLINK_SEND_BETH_CONTROLLER_SFB(_chan, one){ \
	if (DownlinkCheckFreeSpace(_chan, DownlinkSizeOf(_chan, 0+4))) {\
	  DownlinkCountBytes(_chan, DownlinkSizeOf(_chan, 0+4)); \
	  DownlinkStartMessage(_chan, "BETH_CONTROLLER_SFB", DL_BETH_CONTROLLER_SFB, 0+4) \
	  DownlinkPutFloatByAddr(_chan, (one)); \
	  DownlinkEndMessage(_chan ) \
	} else \
	  DownlinkOverrun(_chan ); \
}

#define DOWNLINK_SEND_PAYLOAD(_chan, nb_values, values){ \
	if (DownlinkCheckFreeSpace(_chan, DownlinkSizeOf(_chan, 0+1+nb_values*1))) {\
	  DownlinkCountBytes(_chan, DownlinkSizeOf(_chan, 0+1+nb_values*1)); \
	  DownlinkStartMessage(_chan, "PAYLOAD", DL_PAYLOAD, 0+1+nb_values*1) \
	  DownlinkPutUint8Array(_chan, nb_values, values); \
	  DownlinkEndMessage(_chan ) \
	} else \
	  DownlinkOverrun(_chan ); \
}

#define DOWNLINK_SEND_TCAS_TA(_chan, ac_id){ \
	if (DownlinkCheckFreeSpace(_chan, DownlinkSizeOf(_chan, 0+1))) {\
	  DownlinkCountBytes(_chan, DownlinkSizeOf(_chan, 0+1)); \
	  DownlinkStartMessage(_chan, "TCAS_TA", DL_TCAS_TA, 0+1) \
	  DownlinkPutUint8ByAddr(_chan, (ac_id)); \
	  DownlinkEndMessage(_chan ) \
	} else \
	  DownlinkOverrun(_chan ); \
}

#define DOWNLINK_SEND_TCAS_RA(_chan, ac_id, resolve){ \
	if (DownlinkCheckFreeSpace(_chan, DownlinkSizeOf(_chan, 0+1+1))) {\
	  DownlinkCountBytes(_chan, DownlinkSizeOf(_chan, 0+1+1)); \
	  DownlinkStartMessage(_chan, "TCAS_RA", DL_TCAS_RA, 0+1+1) \
	  DownlinkPutUint8ByAddr(_chan, (ac_id)); \
	  DownlinkPutUint8ByAddr(_chan, (resolve)); \
	  DownlinkEndMessage(_chan ) \
	} else \
	  DownlinkOverrun(_chan ); \
}

#define DOWNLINK_SEND_TCAS_RESOLVED(_chan, ac_id){ \
	if (DownlinkCheckFreeSpace(_chan, DownlinkSizeOf(_chan, 0+1))) {\
	  DownlinkCountBytes(_chan, DownlinkSizeOf(_chan, 0+1)); \
	  DownlinkStartMessage(_chan, "TCAS_RESOLVED", DL_TCAS_RESOLVED, 0+1) \
	  DownlinkPutUint8ByAddr(_chan, (ac_id)); \
	  DownlinkEndMessage(_chan ) \
	} else \
	  DownlinkOverrun(_chan ); \
}

#define DOWNLINK_SEND_TCAS_DEBUG(_chan, ac_id, tau){ \
	if (DownlinkCheckFreeSpace(_chan, DownlinkSizeOf(_chan, 0+1+4))) {\
	  DownlinkCountBytes(_chan, DownlinkSizeOf(_chan, 0+1+4)); \
	  DownlinkStartMessage(_chan, "TCAS_DEBUG", DL_TCAS_DEBUG, 0+1+4) \
	  DownlinkPutUint8ByAddr(_chan, (ac_id)); \
	  DownlinkPutFloatByAddr(_chan, (tau)); \
	  DownlinkEndMessage(_chan ) \
	} else \
	  DownlinkOverrun(_chan ); \
}

#define DOWNLINK_SEND_POTENTIAL(_chan, east, north, alt, speed, climb){ \
	if (DownlinkCheckFreeSpace(_chan, DownlinkSizeOf(_chan, 0+4+4+4+4+4))) {\
	  DownlinkCountBytes(_chan, DownlinkSizeOf(_chan, 0+4+4+4+4+4)); \
	  DownlinkStartMessage(_chan, "POTENTIAL", DL_POTENTIAL, 0+4+4+4+4+4) \
	  DownlinkPutFloatByAddr(_chan, (east)); \
	  DownlinkPutFloatByAddr(_chan, (north)); \
	  DownlinkPutFloatByAddr(_chan, (alt)); \
	  DownlinkPutFloatByAddr(_chan, (speed)); \
	  DownlinkPutFloatByAddr(_chan, (climb)); \
	  DownlinkEndMessage(_chan ) \
	} else \
	  DownlinkOverrun(_chan ); \
}

#define DOWNLINK_SEND_VERTICAL_ENERGY(_chan, Epot_err, Ekin_err, Etot_err, Edis_err, throttle, nav_pitch, speed_sp){ \
	if (DownlinkCheckFreeSpace(_chan, DownlinkSizeOf(_chan, 0+4+4+4+4+4+4+4))) {\
	  DownlinkCountBytes(_chan, DownlinkSizeOf(_chan, 0+4+4+4+4+4+4+4)); \
	  DownlinkStartMessage(_chan, "VERTICAL_ENERGY", DL_VERTICAL_ENERGY, 0+4+4+4+4+4+4+4) \
	  DownlinkPutFloatByAddr(_chan, (Epot_err)); \
	  DownlinkPutFloatByAddr(_chan, (Ekin_err)); \
	  DownlinkPutFloatByAddr(_chan, (Etot_err)); \
	  DownlinkPutFloatByAddr(_chan, (Edis_err)); \
	  DownlinkPutFloatByAddr(_chan, (throttle)); \
	  DownlinkPutFloatByAddr(_chan, (nav_pitch)); \
	  DownlinkPutFloatByAddr(_chan, (speed_sp)); \
	  DownlinkEndMessage(_chan ) \
	} else \
	  DownlinkOverrun(_chan ); \
}

#define DOWNLINK_SEND_STAB_ATTITUDE_FLOAT(_chan, est_p, est_q, est_r, est_phi, est_theta, est_psi, ref_phi, ref_theta, ref_psi, sum_err_phi, sum_err_theta, sum_err_psi, delta_a_fb, delta_e_fb, delta_r_fb, delta_a_ff, delta_e_ff, delta_r_ff, delta_a, delta_e, delta_r, est_p_d, est_q_d, est_r_d){ \
	if (DownlinkCheckFreeSpace(_chan, DownlinkSizeOf(_chan, 0+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4))) {\
	  DownlinkCountBytes(_chan, DownlinkSizeOf(_chan, 0+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4)); \
	  DownlinkStartMessage(_chan, "STAB_ATTITUDE_FLOAT", DL_STAB_ATTITUDE_FLOAT, 0+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4) \
	  DownlinkPutFloatByAddr(_chan, (est_p)); \
	  DownlinkPutFloatByAddr(_chan, (est_q)); \
	  DownlinkPutFloatByAddr(_chan, (est_r)); \
	  DownlinkPutFloatByAddr(_chan, (est_phi)); \
	  DownlinkPutFloatByAddr(_chan, (est_theta)); \
	  DownlinkPutFloatByAddr(_chan, (est_psi)); \
	  DownlinkPutFloatByAddr(_chan, (ref_phi)); \
	  DownlinkPutFloatByAddr(_chan, (ref_theta)); \
	  DownlinkPutFloatByAddr(_chan, (ref_psi)); \
	  DownlinkPutFloatByAddr(_chan, (sum_err_phi)); \
	  DownlinkPutFloatByAddr(_chan, (sum_err_theta)); \
	  DownlinkPutFloatByAddr(_chan, (sum_err_psi)); \
	  DownlinkPutFloatByAddr(_chan, (delta_a_fb)); \
	  DownlinkPutFloatByAddr(_chan, (delta_e_fb)); \
	  DownlinkPutFloatByAddr(_chan, (delta_r_fb)); \
	  DownlinkPutFloatByAddr(_chan, (delta_a_ff)); \
	  DownlinkPutFloatByAddr(_chan, (delta_e_ff)); \
	  DownlinkPutFloatByAddr(_chan, (delta_r_ff)); \
	  DownlinkPutInt32ByAddr(_chan, (delta_a)); \
	  DownlinkPutInt32ByAddr(_chan, (delta_e)); \
	  DownlinkPutInt32ByAddr(_chan, (delta_r)); \
	  DownlinkPutFloatByAddr(_chan, (est_p_d)); \
	  DownlinkPutFloatByAddr(_chan, (est_q_d)); \
	  DownlinkPutFloatByAddr(_chan, (est_r_d)); \
	  DownlinkEndMessage(_chan ) \
	} else \
	  DownlinkOverrun(_chan ); \
}

#define DOWNLINK_SEND_IMU_GYRO_SCALED(_chan, gp, gq, gr){ \
	if (DownlinkCheckFreeSpace(_chan, DownlinkSizeOf(_chan, 0+4+4+4))) {\
	  DownlinkCountBytes(_chan, DownlinkSizeOf(_chan, 0+4+4+4)); \
	  DownlinkStartMessage(_chan, "IMU_GYRO_SCALED", DL_IMU_GYRO_SCALED, 0+4+4+4) \
	  DownlinkPutInt32ByAddr(_chan, (gp)); \
	  DownlinkPutInt32ByAddr(_chan, (gq)); \
	  DownlinkPutInt32ByAddr(_chan, (gr)); \
	  DownlinkEndMessage(_chan ) \
	} else \
	  DownlinkOverrun(_chan ); \
}

#define DOWNLINK_SEND_IMU_ACCEL_SCALED(_chan, ax, ay, az){ \
	if (DownlinkCheckFreeSpace(_chan, DownlinkSizeOf(_chan, 0+4+4+4))) {\
	  DownlinkCountBytes(_chan, DownlinkSizeOf(_chan, 0+4+4+4)); \
	  DownlinkStartMessage(_chan, "IMU_ACCEL_SCALED", DL_IMU_ACCEL_SCALED, 0+4+4+4) \
	  DownlinkPutInt32ByAddr(_chan, (ax)); \
	  DownlinkPutInt32ByAddr(_chan, (ay)); \
	  DownlinkPutInt32ByAddr(_chan, (az)); \
	  DownlinkEndMessage(_chan ) \
	} else \
	  DownlinkOverrun(_chan ); \
}

#define DOWNLINK_SEND_IMU_MAG_SCALED(_chan, mx, my, mz){ \
	if (DownlinkCheckFreeSpace(_chan, DownlinkSizeOf(_chan, 0+4+4+4))) {\
	  DownlinkCountBytes(_chan, DownlinkSizeOf(_chan, 0+4+4+4)); \
	  DownlinkStartMessage(_chan, "IMU_MAG_SCALED", DL_IMU_MAG_SCALED, 0+4+4+4) \
	  DownlinkPutInt32ByAddr(_chan, (mx)); \
	  DownlinkPutInt32ByAddr(_chan, (my)); \
	  DownlinkPutInt32ByAddr(_chan, (mz)); \
	  DownlinkEndMessage(_chan ) \
	} else \
	  DownlinkOverrun(_chan ); \
}

#define DOWNLINK_SEND_FILTER(_chan, phi, theta, psi, measure_phi, measure_theta, measure_psi, corrected_phi, corrected_theta, corrected_psi, correction_phi, correction_theta, correction_psi, bp, bq, br){ \
	if (DownlinkCheckFreeSpace(_chan, DownlinkSizeOf(_chan, 0+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4))) {\
	  DownlinkCountBytes(_chan, DownlinkSizeOf(_chan, 0+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4)); \
	  DownlinkStartMessage(_chan, "FILTER", DL_FILTER, 0+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4) \
	  DownlinkPutInt32ByAddr(_chan, (phi)); \
	  DownlinkPutInt32ByAddr(_chan, (theta)); \
	  DownlinkPutInt32ByAddr(_chan, (psi)); \
	  DownlinkPutInt32ByAddr(_chan, (measure_phi)); \
	  DownlinkPutInt32ByAddr(_chan, (measure_theta)); \
	  DownlinkPutInt32ByAddr(_chan, (measure_psi)); \
	  DownlinkPutInt32ByAddr(_chan, (corrected_phi)); \
	  DownlinkPutInt32ByAddr(_chan, (corrected_theta)); \
	  DownlinkPutInt32ByAddr(_chan, (corrected_psi)); \
	  DownlinkPutInt32ByAddr(_chan, (correction_phi)); \
	  DownlinkPutInt32ByAddr(_chan, (correction_theta)); \
	  DownlinkPutInt32ByAddr(_chan, (correction_psi)); \
	  DownlinkPutInt32ByAddr(_chan, (bp)); \
	  DownlinkPutInt32ByAddr(_chan, (bq)); \
	  DownlinkPutInt32ByAddr(_chan, (br)); \
	  DownlinkEndMessage(_chan ) \
	} else \
	  DownlinkOverrun(_chan ); \
}

#define DOWNLINK_SEND_FILTER2(_chan, px, py, pz, gsx, gsy, gsz){ \
	if (DownlinkCheckFreeSpace(_chan, DownlinkSizeOf(_chan, 0+4+4+4+4+4+4))) {\
	  DownlinkCountBytes(_chan, DownlinkSizeOf(_chan, 0+4+4+4+4+4+4)); \
	  DownlinkStartMessage(_chan, "FILTER2", DL_FILTER2, 0+4+4+4+4+4+4) \
	  DownlinkPutInt32ByAddr(_chan, (px)); \
	  DownlinkPutInt32ByAddr(_chan, (py)); \
	  DownlinkPutInt32ByAddr(_chan, (pz)); \
	  DownlinkPutInt32ByAddr(_chan, (gsx)); \
	  DownlinkPutInt32ByAddr(_chan, (gsy)); \
	  DownlinkPutInt32ByAddr(_chan, (gsz)); \
	  DownlinkEndMessage(_chan ) \
	} else \
	  DownlinkOverrun(_chan ); \
}

#define DOWNLINK_SEND_RATE_LOOP(_chan, sp_p, sp_q, sp_r, ref_p, ref_q, ref_r, refdot_p, refdot_q, refdot_r, sumerr_p, sumerr_q, sumerr_r, ff_p, ff_q, ff_r, fb_p, fb_q, fb_r, delta_t){ \
	if (DownlinkCheckFreeSpace(_chan, DownlinkSizeOf(_chan, 0+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4))) {\
	  DownlinkCountBytes(_chan, DownlinkSizeOf(_chan, 0+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4)); \
	  DownlinkStartMessage(_chan, "RATE_LOOP", DL_RATE_LOOP, 0+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4) \
	  DownlinkPutInt32ByAddr(_chan, (sp_p)); \
	  DownlinkPutInt32ByAddr(_chan, (sp_q)); \
	  DownlinkPutInt32ByAddr(_chan, (sp_r)); \
	  DownlinkPutInt32ByAddr(_chan, (ref_p)); \
	  DownlinkPutInt32ByAddr(_chan, (ref_q)); \
	  DownlinkPutInt32ByAddr(_chan, (ref_r)); \
	  DownlinkPutInt32ByAddr(_chan, (refdot_p)); \
	  DownlinkPutInt32ByAddr(_chan, (refdot_q)); \
	  DownlinkPutInt32ByAddr(_chan, (refdot_r)); \
	  DownlinkPutInt32ByAddr(_chan, (sumerr_p)); \
	  DownlinkPutInt32ByAddr(_chan, (sumerr_q)); \
	  DownlinkPutInt32ByAddr(_chan, (sumerr_r)); \
	  DownlinkPutInt32ByAddr(_chan, (ff_p)); \
	  DownlinkPutInt32ByAddr(_chan, (ff_q)); \
	  DownlinkPutInt32ByAddr(_chan, (ff_r)); \
	  DownlinkPutInt32ByAddr(_chan, (fb_p)); \
	  DownlinkPutInt32ByAddr(_chan, (fb_q)); \
	  DownlinkPutInt32ByAddr(_chan, (fb_r)); \
	  DownlinkPutInt32ByAddr(_chan, (delta_t)); \
	  DownlinkEndMessage(_chan ) \
	} else \
	  DownlinkOverrun(_chan ); \
}

#define DOWNLINK_SEND_FILTER_ALIGNER(_chan, lp_gp, lp_gq, lp_gr, gp, gq, gr, noise, cnt){ \
	if (DownlinkCheckFreeSpace(_chan, DownlinkSizeOf(_chan, 0+4+4+4+4+4+4+4+4))) {\
	  DownlinkCountBytes(_chan, DownlinkSizeOf(_chan, 0+4+4+4+4+4+4+4+4)); \
	  DownlinkStartMessage(_chan, "FILTER_ALIGNER", DL_FILTER_ALIGNER, 0+4+4+4+4+4+4+4+4) \
	  DownlinkPutInt32ByAddr(_chan, (lp_gp)); \
	  DownlinkPutInt32ByAddr(_chan, (lp_gq)); \
	  DownlinkPutInt32ByAddr(_chan, (lp_gr)); \
	  DownlinkPutInt32ByAddr(_chan, (gp)); \
	  DownlinkPutInt32ByAddr(_chan, (gq)); \
	  DownlinkPutInt32ByAddr(_chan, (gr)); \
	  DownlinkPutInt32ByAddr(_chan, (noise)); \
	  DownlinkPutInt32ByAddr(_chan, (cnt)); \
	  DownlinkEndMessage(_chan ) \
	} else \
	  DownlinkOverrun(_chan ); \
}

#define DOWNLINK_SEND_FILTER_Q(_chan, qi, qx, qy, qz){ \
	if (DownlinkCheckFreeSpace(_chan, DownlinkSizeOf(_chan, 0+4+4+4+4))) {\
	  DownlinkCountBytes(_chan, DownlinkSizeOf(_chan, 0+4+4+4+4)); \
	  DownlinkStartMessage(_chan, "FILTER_Q", DL_FILTER_Q, 0+4+4+4+4) \
	  DownlinkPutInt32ByAddr(_chan, (qi)); \
	  DownlinkPutInt32ByAddr(_chan, (qx)); \
	  DownlinkPutInt32ByAddr(_chan, (qy)); \
	  DownlinkPutInt32ByAddr(_chan, (qz)); \
	  DownlinkEndMessage(_chan ) \
	} else \
	  DownlinkOverrun(_chan ); \
}

#define DOWNLINK_SEND_FILTER_COR(_chan, mphi, mtheta, mpsi, qi, qx, qy, qz){ \
	if (DownlinkCheckFreeSpace(_chan, DownlinkSizeOf(_chan, 0+4+4+4+4+4+4+4))) {\
	  DownlinkCountBytes(_chan, DownlinkSizeOf(_chan, 0+4+4+4+4+4+4+4)); \
	  DownlinkStartMessage(_chan, "FILTER_COR", DL_FILTER_COR, 0+4+4+4+4+4+4+4) \
	  DownlinkPutInt32ByAddr(_chan, (mphi)); \
	  DownlinkPutInt32ByAddr(_chan, (mtheta)); \
	  DownlinkPutInt32ByAddr(_chan, (mpsi)); \
	  DownlinkPutInt32ByAddr(_chan, (qi)); \
	  DownlinkPutInt32ByAddr(_chan, (qx)); \
	  DownlinkPutInt32ByAddr(_chan, (qy)); \
	  DownlinkPutInt32ByAddr(_chan, (qz)); \
	  DownlinkEndMessage(_chan ) \
	} else \
	  DownlinkOverrun(_chan ); \
}

#define DOWNLINK_SEND_STAB_ATTITUDE_INT(_chan, est_p, est_q, est_r, est_phi, est_theta, est_psi, sp_phi, sp_theta, sp_psi, sum_err_phi, sum_err_theta, sum_err_psi, delta_a_fb, delta_e_fb, delta_r_fb, delta_a_ff, delta_e_ff, delta_r_ff, delta_a, delta_e, delta_r){ \
	if (DownlinkCheckFreeSpace(_chan, DownlinkSizeOf(_chan, 0+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4))) {\
	  DownlinkCountBytes(_chan, DownlinkSizeOf(_chan, 0+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4)); \
	  DownlinkStartMessage(_chan, "STAB_ATTITUDE_INT", DL_STAB_ATTITUDE_INT, 0+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4) \
	  DownlinkPutInt32ByAddr(_chan, (est_p)); \
	  DownlinkPutInt32ByAddr(_chan, (est_q)); \
	  DownlinkPutInt32ByAddr(_chan, (est_r)); \
	  DownlinkPutInt32ByAddr(_chan, (est_phi)); \
	  DownlinkPutInt32ByAddr(_chan, (est_theta)); \
	  DownlinkPutInt32ByAddr(_chan, (est_psi)); \
	  DownlinkPutInt32ByAddr(_chan, (sp_phi)); \
	  DownlinkPutInt32ByAddr(_chan, (sp_theta)); \
	  DownlinkPutInt32ByAddr(_chan, (sp_psi)); \
	  DownlinkPutInt32ByAddr(_chan, (sum_err_phi)); \
	  DownlinkPutInt32ByAddr(_chan, (sum_err_theta)); \
	  DownlinkPutInt32ByAddr(_chan, (sum_err_psi)); \
	  DownlinkPutInt32ByAddr(_chan, (delta_a_fb)); \
	  DownlinkPutInt32ByAddr(_chan, (delta_e_fb)); \
	  DownlinkPutInt32ByAddr(_chan, (delta_r_fb)); \
	  DownlinkPutInt32ByAddr(_chan, (delta_a_ff)); \
	  DownlinkPutInt32ByAddr(_chan, (delta_e_ff)); \
	  DownlinkPutInt32ByAddr(_chan, (delta_r_ff)); \
	  DownlinkPutInt32ByAddr(_chan, (delta_a)); \
	  DownlinkPutInt32ByAddr(_chan, (delta_e)); \
	  DownlinkPutInt32ByAddr(_chan, (delta_r)); \
	  DownlinkEndMessage(_chan ) \
	} else \
	  DownlinkOverrun(_chan ); \
}

#define DOWNLINK_SEND_STAB_ATTITUDE_REF_INT(_chan, sp_phi, sp_theta, sp_psi, ref_phi, ref_theta, ref_psi, ref_p, ref_q, ref_r, ref_pd, ref_qd, ref_rd){ \
	if (DownlinkCheckFreeSpace(_chan, DownlinkSizeOf(_chan, 0+4+4+4+4+4+4+4+4+4+4+4+4))) {\
	  DownlinkCountBytes(_chan, DownlinkSizeOf(_chan, 0+4+4+4+4+4+4+4+4+4+4+4+4)); \
	  DownlinkStartMessage(_chan, "STAB_ATTITUDE_REF_INT", DL_STAB_ATTITUDE_REF_INT, 0+4+4+4+4+4+4+4+4+4+4+4+4) \
	  DownlinkPutInt32ByAddr(_chan, (sp_phi)); \
	  DownlinkPutInt32ByAddr(_chan, (sp_theta)); \
	  DownlinkPutInt32ByAddr(_chan, (sp_psi)); \
	  DownlinkPutInt32ByAddr(_chan, (ref_phi)); \
	  DownlinkPutInt32ByAddr(_chan, (ref_theta)); \
	  DownlinkPutInt32ByAddr(_chan, (ref_psi)); \
	  DownlinkPutInt32ByAddr(_chan, (ref_p)); \
	  DownlinkPutInt32ByAddr(_chan, (ref_q)); \
	  DownlinkPutInt32ByAddr(_chan, (ref_r)); \
	  DownlinkPutInt32ByAddr(_chan, (ref_pd)); \
	  DownlinkPutInt32ByAddr(_chan, (ref_qd)); \
	  DownlinkPutInt32ByAddr(_chan, (ref_rd)); \
	  DownlinkEndMessage(_chan ) \
	} else \
	  DownlinkOverrun(_chan ); \
}

#define DOWNLINK_SEND_STAB_ATTITUDE_REF_FLOAT(_chan, sp_phi, sp_theta, sp_psi, ref_phi, ref_theta, ref_psi, ref_p, ref_q, ref_r, ref_pd, ref_qd, ref_rd){ \
	if (DownlinkCheckFreeSpace(_chan, DownlinkSizeOf(_chan, 0+4+4+4+4+4+4+4+4+4+4+4+4))) {\
	  DownlinkCountBytes(_chan, DownlinkSizeOf(_chan, 0+4+4+4+4+4+4+4+4+4+4+4+4)); \
	  DownlinkStartMessage(_chan, "STAB_ATTITUDE_REF_FLOAT", DL_STAB_ATTITUDE_REF_FLOAT, 0+4+4+4+4+4+4+4+4+4+4+4+4) \
	  DownlinkPutFloatByAddr(_chan, (sp_phi)); \
	  DownlinkPutFloatByAddr(_chan, (sp_theta)); \
	  DownlinkPutFloatByAddr(_chan, (sp_psi)); \
	  DownlinkPutFloatByAddr(_chan, (ref_phi)); \
	  DownlinkPutFloatByAddr(_chan, (ref_theta)); \
	  DownlinkPutFloatByAddr(_chan, (ref_psi)); \
	  DownlinkPutFloatByAddr(_chan, (ref_p)); \
	  DownlinkPutFloatByAddr(_chan, (ref_q)); \
	  DownlinkPutFloatByAddr(_chan, (ref_r)); \
	  DownlinkPutFloatByAddr(_chan, (ref_pd)); \
	  DownlinkPutFloatByAddr(_chan, (ref_qd)); \
	  DownlinkPutFloatByAddr(_chan, (ref_rd)); \
	  DownlinkEndMessage(_chan ) \
	} else \
	  DownlinkOverrun(_chan ); \
}

#define DOWNLINK_SEND_BOOZ2_CMD(_chan, cmd_roll, cmd_pitch, cmd_yaw, cmd_thrust){ \
	if (DownlinkCheckFreeSpace(_chan, DownlinkSizeOf(_chan, 0+4+4+4+4))) {\
	  DownlinkCountBytes(_chan, DownlinkSizeOf(_chan, 0+4+4+4+4)); \
	  DownlinkStartMessage(_chan, "BOOZ2_CMD", DL_BOOZ2_CMD, 0+4+4+4+4) \
	  DownlinkPutInt32ByAddr(_chan, (cmd_roll)); \
	  DownlinkPutInt32ByAddr(_chan, (cmd_pitch)); \
	  DownlinkPutInt32ByAddr(_chan, (cmd_yaw)); \
	  DownlinkPutInt32ByAddr(_chan, (cmd_thrust)); \
	  DownlinkEndMessage(_chan ) \
	} else \
	  DownlinkOverrun(_chan ); \
}

#define DOWNLINK_SEND_GUIDANCE(_chan, pos_n, pos_e, sp_pos_n, sp_pos_e){ \
	if (DownlinkCheckFreeSpace(_chan, DownlinkSizeOf(_chan, 0+4+4+4+4))) {\
	  DownlinkCountBytes(_chan, DownlinkSizeOf(_chan, 0+4+4+4+4)); \
	  DownlinkStartMessage(_chan, "GUIDANCE", DL_GUIDANCE, 0+4+4+4+4) \
	  DownlinkPutInt32ByAddr(_chan, (pos_n)); \
	  DownlinkPutInt32ByAddr(_chan, (pos_e)); \
	  DownlinkPutInt32ByAddr(_chan, (sp_pos_n)); \
	  DownlinkPutInt32ByAddr(_chan, (sp_pos_e)); \
	  DownlinkEndMessage(_chan ) \
	} else \
	  DownlinkOverrun(_chan ); \
}

#define DOWNLINK_SEND_VERT_LOOP(_chan, z_sp, zd_sp, est_z, est_zd, est_zdd, ref_z, ref_zd, ref_zdd, adp_inv_m, adp_cov, adp_meas, sum_err, ff_cmd, fb_cmd, delta_t){ \
	if (DownlinkCheckFreeSpace(_chan, DownlinkSizeOf(_chan, 0+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4))) {\
	  DownlinkCountBytes(_chan, DownlinkSizeOf(_chan, 0+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4)); \
	  DownlinkStartMessage(_chan, "VERT_LOOP", DL_VERT_LOOP, 0+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4) \
	  DownlinkPutInt32ByAddr(_chan, (z_sp)); \
	  DownlinkPutInt32ByAddr(_chan, (zd_sp)); \
	  DownlinkPutInt32ByAddr(_chan, (est_z)); \
	  DownlinkPutInt32ByAddr(_chan, (est_zd)); \
	  DownlinkPutInt32ByAddr(_chan, (est_zdd)); \
	  DownlinkPutInt32ByAddr(_chan, (ref_z)); \
	  DownlinkPutInt32ByAddr(_chan, (ref_zd)); \
	  DownlinkPutInt32ByAddr(_chan, (ref_zdd)); \
	  DownlinkPutInt32ByAddr(_chan, (adp_inv_m)); \
	  DownlinkPutInt32ByAddr(_chan, (adp_cov)); \
	  DownlinkPutInt32ByAddr(_chan, (adp_meas)); \
	  DownlinkPutInt32ByAddr(_chan, (sum_err)); \
	  DownlinkPutInt32ByAddr(_chan, (ff_cmd)); \
	  DownlinkPutInt32ByAddr(_chan, (fb_cmd)); \
	  DownlinkPutInt32ByAddr(_chan, (delta_t)); \
	  DownlinkEndMessage(_chan ) \
	} else \
	  DownlinkOverrun(_chan ); \
}

#define DOWNLINK_SEND_HOVER_LOOP(_chan, sp_x, sp_y, est_x, est_y, est_xd, est_yd, est_xdd, est_ydd, err_x, err_y, err_xd, err_yd, err_sum_x, err_sum_y, err_nav_x, err_nav_y, cmd_x, cmd_y, cmd_phi, cmd_theta, cmd_psi){ \
	if (DownlinkCheckFreeSpace(_chan, DownlinkSizeOf(_chan, 0+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4))) {\
	  DownlinkCountBytes(_chan, DownlinkSizeOf(_chan, 0+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4)); \
	  DownlinkStartMessage(_chan, "HOVER_LOOP", DL_HOVER_LOOP, 0+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4) \
	  DownlinkPutInt32ByAddr(_chan, (sp_x)); \
	  DownlinkPutInt32ByAddr(_chan, (sp_y)); \
	  DownlinkPutInt32ByAddr(_chan, (est_x)); \
	  DownlinkPutInt32ByAddr(_chan, (est_y)); \
	  DownlinkPutInt32ByAddr(_chan, (est_xd)); \
	  DownlinkPutInt32ByAddr(_chan, (est_yd)); \
	  DownlinkPutInt32ByAddr(_chan, (est_xdd)); \
	  DownlinkPutInt32ByAddr(_chan, (est_ydd)); \
	  DownlinkPutInt32ByAddr(_chan, (err_x)); \
	  DownlinkPutInt32ByAddr(_chan, (err_y)); \
	  DownlinkPutInt32ByAddr(_chan, (err_xd)); \
	  DownlinkPutInt32ByAddr(_chan, (err_yd)); \
	  DownlinkPutInt32ByAddr(_chan, (err_sum_x)); \
	  DownlinkPutInt32ByAddr(_chan, (err_sum_y)); \
	  DownlinkPutInt32ByAddr(_chan, (err_nav_x)); \
	  DownlinkPutInt32ByAddr(_chan, (err_nav_y)); \
	  DownlinkPutInt32ByAddr(_chan, (cmd_x)); \
	  DownlinkPutInt32ByAddr(_chan, (cmd_y)); \
	  DownlinkPutInt32ByAddr(_chan, (cmd_phi)); \
	  DownlinkPutInt32ByAddr(_chan, (cmd_theta)); \
	  DownlinkPutInt32ByAddr(_chan, (cmd_psi)); \
	  DownlinkEndMessage(_chan ) \
	} else \
	  DownlinkOverrun(_chan ); \
}

#define DOWNLINK_SEND_BOOZ2_FP(_chan, east, north, up, veast, vnorth, vup, phi, theta, psi, carrot_east, carrot_north, carrot_up, carrot_psi, thrust, flight_time){ \
	if (DownlinkCheckFreeSpace(_chan, DownlinkSizeOf(_chan, 0+4+4+4+4+4+4+4+4+4+4+4+4+4+4+2))) {\
	  DownlinkCountBytes(_chan, DownlinkSizeOf(_chan, 0+4+4+4+4+4+4+4+4+4+4+4+4+4+4+2)); \
	  DownlinkStartMessage(_chan, "BOOZ2_FP", DL_BOOZ2_FP, 0+4+4+4+4+4+4+4+4+4+4+4+4+4+4+2) \
	  DownlinkPutInt32ByAddr(_chan, (east)); \
	  DownlinkPutInt32ByAddr(_chan, (north)); \
	  DownlinkPutInt32ByAddr(_chan, (up)); \
	  DownlinkPutInt32ByAddr(_chan, (veast)); \
	  DownlinkPutInt32ByAddr(_chan, (vnorth)); \
	  DownlinkPutInt32ByAddr(_chan, (vup)); \
	  DownlinkPutInt32ByAddr(_chan, (phi)); \
	  DownlinkPutInt32ByAddr(_chan, (theta)); \
	  DownlinkPutInt32ByAddr(_chan, (psi)); \
	  DownlinkPutInt32ByAddr(_chan, (carrot_east)); \
	  DownlinkPutInt32ByAddr(_chan, (carrot_north)); \
	  DownlinkPutInt32ByAddr(_chan, (carrot_up)); \
	  DownlinkPutInt32ByAddr(_chan, (carrot_psi)); \
	  DownlinkPutInt32ByAddr(_chan, (thrust)); \
	  DownlinkPutUint16ByAddr(_chan, (flight_time)); \
	  DownlinkEndMessage(_chan ) \
	} else \
	  DownlinkOverrun(_chan ); \
}

#define DOWNLINK_SEND_BOOZ2_FMS_INFO(_chan, tbd){ \
	if (DownlinkCheckFreeSpace(_chan, DownlinkSizeOf(_chan, 0+4))) {\
	  DownlinkCountBytes(_chan, DownlinkSizeOf(_chan, 0+4)); \
	  DownlinkStartMessage(_chan, "BOOZ2_FMS_INFO", DL_BOOZ2_FMS_INFO, 0+4) \
	  DownlinkPutFloatByAddr(_chan, (tbd)); \
	  DownlinkEndMessage(_chan ) \
	} else \
	  DownlinkOverrun(_chan ); \
}

#define DOWNLINK_SEND_GUIDANCE_H_REF_INT(_chan, sp_x, ref_x, ref_xd, ref_xdd, sp_y, ref_y, ref_yd, ref_ydd){ \
	if (DownlinkCheckFreeSpace(_chan, DownlinkSizeOf(_chan, 0+4+4+4+4+4+4+4+4))) {\
	  DownlinkCountBytes(_chan, DownlinkSizeOf(_chan, 0+4+4+4+4+4+4+4+4)); \
	  DownlinkStartMessage(_chan, "GUIDANCE_H_REF_INT", DL_GUIDANCE_H_REF_INT, 0+4+4+4+4+4+4+4+4) \
	  DownlinkPutInt32ByAddr(_chan, (sp_x)); \
	  DownlinkPutInt32ByAddr(_chan, (ref_x)); \
	  DownlinkPutInt32ByAddr(_chan, (ref_xd)); \
	  DownlinkPutInt32ByAddr(_chan, (ref_xdd)); \
	  DownlinkPutInt32ByAddr(_chan, (sp_y)); \
	  DownlinkPutInt32ByAddr(_chan, (ref_y)); \
	  DownlinkPutInt32ByAddr(_chan, (ref_yd)); \
	  DownlinkPutInt32ByAddr(_chan, (ref_ydd)); \
	  DownlinkEndMessage(_chan ) \
	} else \
	  DownlinkOverrun(_chan ); \
}

#define DOWNLINK_SEND_BOOZ2_TUNE_HOVER(_chan, rc_roll, rc_pitch, rc_yaw, cmd_roll, cmd_pitch, cmd_yaw, cmd_thrust, imu_phi, imu_theta, imu_psi, body_phi, body_theta, body_psi){ \
	if (DownlinkCheckFreeSpace(_chan, DownlinkSizeOf(_chan, 0+2+2+2+4+4+4+4+4+4+4+4+4+4))) {\
	  DownlinkCountBytes(_chan, DownlinkSizeOf(_chan, 0+2+2+2+4+4+4+4+4+4+4+4+4+4)); \
	  DownlinkStartMessage(_chan, "BOOZ2_TUNE_HOVER", DL_BOOZ2_TUNE_HOVER, 0+2+2+2+4+4+4+4+4+4+4+4+4+4) \
	  DownlinkPutInt16ByAddr(_chan, (rc_roll)); \
	  DownlinkPutInt16ByAddr(_chan, (rc_pitch)); \
	  DownlinkPutInt16ByAddr(_chan, (rc_yaw)); \
	  DownlinkPutInt32ByAddr(_chan, (cmd_roll)); \
	  DownlinkPutInt32ByAddr(_chan, (cmd_pitch)); \
	  DownlinkPutInt32ByAddr(_chan, (cmd_yaw)); \
	  DownlinkPutInt32ByAddr(_chan, (cmd_thrust)); \
	  DownlinkPutInt32ByAddr(_chan, (imu_phi)); \
	  DownlinkPutInt32ByAddr(_chan, (imu_theta)); \
	  DownlinkPutInt32ByAddr(_chan, (imu_psi)); \
	  DownlinkPutInt32ByAddr(_chan, (body_phi)); \
	  DownlinkPutInt32ByAddr(_chan, (body_theta)); \
	  DownlinkPutInt32ByAddr(_chan, (body_psi)); \
	  DownlinkEndMessage(_chan ) \
	} else \
	  DownlinkOverrun(_chan ); \
}

#define DOWNLINK_SEND_INS_Z(_chan, baro_alt, ins_z, ins_zd, ins_zdd){ \
	if (DownlinkCheckFreeSpace(_chan, DownlinkSizeOf(_chan, 0+4+4+4+4))) {\
	  DownlinkCountBytes(_chan, DownlinkSizeOf(_chan, 0+4+4+4+4)); \
	  DownlinkStartMessage(_chan, "INS_Z", DL_INS_Z, 0+4+4+4+4) \
	  DownlinkPutInt32ByAddr(_chan, (baro_alt)); \
	  DownlinkPutInt32ByAddr(_chan, (ins_z)); \
	  DownlinkPutInt32ByAddr(_chan, (ins_zd)); \
	  DownlinkPutInt32ByAddr(_chan, (ins_zdd)); \
	  DownlinkEndMessage(_chan ) \
	} else \
	  DownlinkOverrun(_chan ); \
}

#define DOWNLINK_SEND_INS_REF(_chan, ecef_x0, ecef_y0, ecef_z0, lat0, lon0, alt0, hmsl0, baro_qfe){ \
	if (DownlinkCheckFreeSpace(_chan, DownlinkSizeOf(_chan, 0+4+4+4+4+4+4+4+4))) {\
	  DownlinkCountBytes(_chan, DownlinkSizeOf(_chan, 0+4+4+4+4+4+4+4+4)); \
	  DownlinkStartMessage(_chan, "INS_REF", DL_INS_REF, 0+4+4+4+4+4+4+4+4) \
	  DownlinkPutInt32ByAddr(_chan, (ecef_x0)); \
	  DownlinkPutInt32ByAddr(_chan, (ecef_y0)); \
	  DownlinkPutInt32ByAddr(_chan, (ecef_z0)); \
	  DownlinkPutInt32ByAddr(_chan, (lat0)); \
	  DownlinkPutInt32ByAddr(_chan, (lon0)); \
	  DownlinkPutInt32ByAddr(_chan, (alt0)); \
	  DownlinkPutInt32ByAddr(_chan, (hmsl0)); \
	  DownlinkPutInt32ByAddr(_chan, (baro_qfe)); \
	  DownlinkEndMessage(_chan ) \
	} else \
	  DownlinkOverrun(_chan ); \
}

#define DOWNLINK_SEND_BOOZ2_GPS(_chan, ecef_x, ecef_y, ecef_z, lat, lon, alt, ecef_xd, ecef_yd, ecef_zd, pacc, sacc, tow, pdop, numsv, fix){ \
	if (DownlinkCheckFreeSpace(_chan, DownlinkSizeOf(_chan, 0+4+4+4+4+4+4+4+4+4+4+4+4+2+1+1))) {\
	  DownlinkCountBytes(_chan, DownlinkSizeOf(_chan, 0+4+4+4+4+4+4+4+4+4+4+4+4+2+1+1)); \
	  DownlinkStartMessage(_chan, "BOOZ2_GPS", DL_BOOZ2_GPS, 0+4+4+4+4+4+4+4+4+4+4+4+4+2+1+1) \
	  DownlinkPutInt32ByAddr(_chan, (ecef_x)); \
	  DownlinkPutInt32ByAddr(_chan, (ecef_y)); \
	  DownlinkPutInt32ByAddr(_chan, (ecef_z)); \
	  DownlinkPutInt32ByAddr(_chan, (lat)); \
	  DownlinkPutInt32ByAddr(_chan, (lon)); \
	  DownlinkPutInt32ByAddr(_chan, (alt)); \
	  DownlinkPutInt32ByAddr(_chan, (ecef_xd)); \
	  DownlinkPutInt32ByAddr(_chan, (ecef_yd)); \
	  DownlinkPutInt32ByAddr(_chan, (ecef_zd)); \
	  DownlinkPutInt32ByAddr(_chan, (pacc)); \
	  DownlinkPutInt32ByAddr(_chan, (sacc)); \
	  DownlinkPutUint32ByAddr(_chan, (tow)); \
	  DownlinkPutUint16ByAddr(_chan, (pdop)); \
	  DownlinkPutUint8ByAddr(_chan, (numsv)); \
	  DownlinkPutUint8ByAddr(_chan, (fix)); \
	  DownlinkEndMessage(_chan ) \
	} else \
	  DownlinkOverrun(_chan ); \
}

#define DOWNLINK_SEND_BOOZ2_AHRS_EULER(_chan, imu_phi, imu_theta, imu_psi, body_phi, body_theta, body_psi){ \
	if (DownlinkCheckFreeSpace(_chan, DownlinkSizeOf(_chan, 0+4+4+4+4+4+4))) {\
	  DownlinkCountBytes(_chan, DownlinkSizeOf(_chan, 0+4+4+4+4+4+4)); \
	  DownlinkStartMessage(_chan, "BOOZ2_AHRS_EULER", DL_BOOZ2_AHRS_EULER, 0+4+4+4+4+4+4) \
	  DownlinkPutInt32ByAddr(_chan, (imu_phi)); \
	  DownlinkPutInt32ByAddr(_chan, (imu_theta)); \
	  DownlinkPutInt32ByAddr(_chan, (imu_psi)); \
	  DownlinkPutInt32ByAddr(_chan, (body_phi)); \
	  DownlinkPutInt32ByAddr(_chan, (body_theta)); \
	  DownlinkPutInt32ByAddr(_chan, (body_psi)); \
	  DownlinkEndMessage(_chan ) \
	} else \
	  DownlinkOverrun(_chan ); \
}

#define DOWNLINK_SEND_BOOZ2_AHRS_QUAT(_chan, imu_qi, imu_qx, imu_qy, imu_qz, body_qi, body_qx, body_qy, body_qz){ \
	if (DownlinkCheckFreeSpace(_chan, DownlinkSizeOf(_chan, 0+4+4+4+4+4+4+4+4))) {\
	  DownlinkCountBytes(_chan, DownlinkSizeOf(_chan, 0+4+4+4+4+4+4+4+4)); \
	  DownlinkStartMessage(_chan, "BOOZ2_AHRS_QUAT", DL_BOOZ2_AHRS_QUAT, 0+4+4+4+4+4+4+4+4) \
	  DownlinkPutInt32ByAddr(_chan, (imu_qi)); \
	  DownlinkPutInt32ByAddr(_chan, (imu_qx)); \
	  DownlinkPutInt32ByAddr(_chan, (imu_qy)); \
	  DownlinkPutInt32ByAddr(_chan, (imu_qz)); \
	  DownlinkPutInt32ByAddr(_chan, (body_qi)); \
	  DownlinkPutInt32ByAddr(_chan, (body_qx)); \
	  DownlinkPutInt32ByAddr(_chan, (body_qy)); \
	  DownlinkPutInt32ByAddr(_chan, (body_qz)); \
	  DownlinkEndMessage(_chan ) \
	} else \
	  DownlinkOverrun(_chan ); \
}

#define DOWNLINK_SEND_BOOZ2_AHRS_RMAT(_chan, imu_m00, imu_m01, imu_m02, imu_m10, imu_m11, imu_m12, imu_m20, imu_m21, imu_m22, body_m00, body_m01, body_m02, body_m10, body_m11, body_m12, body_m20, body_m21, body_m22){ \
	if (DownlinkCheckFreeSpace(_chan, DownlinkSizeOf(_chan, 0+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4))) {\
	  DownlinkCountBytes(_chan, DownlinkSizeOf(_chan, 0+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4)); \
	  DownlinkStartMessage(_chan, "BOOZ2_AHRS_RMAT", DL_BOOZ2_AHRS_RMAT, 0+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4) \
	  DownlinkPutInt32ByAddr(_chan, (imu_m00)); \
	  DownlinkPutInt32ByAddr(_chan, (imu_m01)); \
	  DownlinkPutInt32ByAddr(_chan, (imu_m02)); \
	  DownlinkPutInt32ByAddr(_chan, (imu_m10)); \
	  DownlinkPutInt32ByAddr(_chan, (imu_m11)); \
	  DownlinkPutInt32ByAddr(_chan, (imu_m12)); \
	  DownlinkPutInt32ByAddr(_chan, (imu_m20)); \
	  DownlinkPutInt32ByAddr(_chan, (imu_m21)); \
	  DownlinkPutInt32ByAddr(_chan, (imu_m22)); \
	  DownlinkPutInt32ByAddr(_chan, (body_m00)); \
	  DownlinkPutInt32ByAddr(_chan, (body_m01)); \
	  DownlinkPutInt32ByAddr(_chan, (body_m02)); \
	  DownlinkPutInt32ByAddr(_chan, (body_m10)); \
	  DownlinkPutInt32ByAddr(_chan, (body_m11)); \
	  DownlinkPutInt32ByAddr(_chan, (body_m12)); \
	  DownlinkPutInt32ByAddr(_chan, (body_m20)); \
	  DownlinkPutInt32ByAddr(_chan, (body_m21)); \
	  DownlinkPutInt32ByAddr(_chan, (body_m22)); \
	  DownlinkEndMessage(_chan ) \
	} else \
	  DownlinkOverrun(_chan ); \
}

#define DOWNLINK_SEND_ROTORCRAFT_NAV_STATUS(_chan, block_time, stage_time, cur_block, cur_stage, horizontal_mode){ \
	if (DownlinkCheckFreeSpace(_chan, DownlinkSizeOf(_chan, 0+2+2+1+1+1))) {\
	  DownlinkCountBytes(_chan, DownlinkSizeOf(_chan, 0+2+2+1+1+1)); \
	  DownlinkStartMessage(_chan, "ROTORCRAFT_NAV_STATUS", DL_ROTORCRAFT_NAV_STATUS, 0+2+2+1+1+1) \
	  DownlinkPutUint16ByAddr(_chan, (block_time)); \
	  DownlinkPutUint16ByAddr(_chan, (stage_time)); \
	  DownlinkPutUint8ByAddr(_chan, (cur_block)); \
	  DownlinkPutUint8ByAddr(_chan, (cur_stage)); \
	  DownlinkPutUint8ByAddr(_chan, (horizontal_mode)); \
	  DownlinkEndMessage(_chan ) \
	} else \
	  DownlinkOverrun(_chan ); \
}

#define DOWNLINK_SEND_BOOZ2_RADIO_CONTROL(_chan, roll, pitch, yaw, throttle, mode, kill, status){ \
	if (DownlinkCheckFreeSpace(_chan, DownlinkSizeOf(_chan, 0+2+2+2+2+2+2+1))) {\
	  DownlinkCountBytes(_chan, DownlinkSizeOf(_chan, 0+2+2+2+2+2+2+1)); \
	  DownlinkStartMessage(_chan, "BOOZ2_RADIO_CONTROL", DL_BOOZ2_RADIO_CONTROL, 0+2+2+2+2+2+2+1) \
	  DownlinkPutInt16ByAddr(_chan, (roll)); \
	  DownlinkPutInt16ByAddr(_chan, (pitch)); \
	  DownlinkPutInt16ByAddr(_chan, (yaw)); \
	  DownlinkPutInt16ByAddr(_chan, (throttle)); \
	  DownlinkPutInt16ByAddr(_chan, (mode)); \
	  DownlinkPutInt16ByAddr(_chan, (kill)); \
	  DownlinkPutUint8ByAddr(_chan, (status)); \
	  DownlinkEndMessage(_chan ) \
	} else \
	  DownlinkOverrun(_chan ); \
}

#define DOWNLINK_SEND_BOOZ_BARO_RAW(_chan, offset, value, value_filtered){ \
	if (DownlinkCheckFreeSpace(_chan, DownlinkSizeOf(_chan, 0+2+2+2))) {\
	  DownlinkCountBytes(_chan, DownlinkSizeOf(_chan, 0+2+2+2)); \
	  DownlinkStartMessage(_chan, "BOOZ_BARO_RAW", DL_BOOZ_BARO_RAW, 0+2+2+2) \
	  DownlinkPutUint16ByAddr(_chan, (offset)); \
	  DownlinkPutUint16ByAddr(_chan, (value)); \
	  DownlinkPutUint16ByAddr(_chan, (value_filtered)); \
	  DownlinkEndMessage(_chan ) \
	} else \
	  DownlinkOverrun(_chan ); \
}

#define DOWNLINK_SEND_VFF(_chan, measure, z, zd, bias, Pzz, Pzdzd, Pbb){ \
	if (DownlinkCheckFreeSpace(_chan, DownlinkSizeOf(_chan, 0+4+4+4+4+4+4+4))) {\
	  DownlinkCountBytes(_chan, DownlinkSizeOf(_chan, 0+4+4+4+4+4+4+4)); \
	  DownlinkStartMessage(_chan, "VFF", DL_VFF, 0+4+4+4+4+4+4+4) \
	  DownlinkPutFloatByAddr(_chan, (measure)); \
	  DownlinkPutFloatByAddr(_chan, (z)); \
	  DownlinkPutFloatByAddr(_chan, (zd)); \
	  DownlinkPutFloatByAddr(_chan, (bias)); \
	  DownlinkPutFloatByAddr(_chan, (Pzz)); \
	  DownlinkPutFloatByAddr(_chan, (Pzdzd)); \
	  DownlinkPutFloatByAddr(_chan, (Pbb)); \
	  DownlinkEndMessage(_chan ) \
	} else \
	  DownlinkOverrun(_chan ); \
}

#define DOWNLINK_SEND_BOOZ2_TUNE_FF(_chan, fb_rms, dg, g){ \
	if (DownlinkCheckFreeSpace(_chan, DownlinkSizeOf(_chan, 0+4+4+4))) {\
	  DownlinkCountBytes(_chan, DownlinkSizeOf(_chan, 0+4+4+4)); \
	  DownlinkStartMessage(_chan, "BOOZ2_TUNE_FF", DL_BOOZ2_TUNE_FF, 0+4+4+4) \
	  DownlinkPutFloatByAddr(_chan, (fb_rms)); \
	  DownlinkPutFloatByAddr(_chan, (dg)); \
	  DownlinkPutFloatByAddr(_chan, (g)); \
	  DownlinkEndMessage(_chan ) \
	} else \
	  DownlinkOverrun(_chan ); \
}

#define DOWNLINK_SEND_HFF(_chan, x, y, xd, yd, xdd, ydd){ \
	if (DownlinkCheckFreeSpace(_chan, DownlinkSizeOf(_chan, 0+4+4+4+4+4+4))) {\
	  DownlinkCountBytes(_chan, DownlinkSizeOf(_chan, 0+4+4+4+4+4+4)); \
	  DownlinkStartMessage(_chan, "HFF", DL_HFF, 0+4+4+4+4+4+4) \
	  DownlinkPutFloatByAddr(_chan, (x)); \
	  DownlinkPutFloatByAddr(_chan, (y)); \
	  DownlinkPutFloatByAddr(_chan, (xd)); \
	  DownlinkPutFloatByAddr(_chan, (yd)); \
	  DownlinkPutFloatByAddr(_chan, (xdd)); \
	  DownlinkPutFloatByAddr(_chan, (ydd)); \
	  DownlinkEndMessage(_chan ) \
	} else \
	  DownlinkOverrun(_chan ); \
}

#define DOWNLINK_SEND_HFF_DBG(_chan, x_measure, y_measure, yd_measure, xd_measure, Pxx, Pyy, Pxdxd, Pydyd){ \
	if (DownlinkCheckFreeSpace(_chan, DownlinkSizeOf(_chan, 0+4+4+4+4+4+4+4+4))) {\
	  DownlinkCountBytes(_chan, DownlinkSizeOf(_chan, 0+4+4+4+4+4+4+4+4)); \
	  DownlinkStartMessage(_chan, "HFF_DBG", DL_HFF_DBG, 0+4+4+4+4+4+4+4+4) \
	  DownlinkPutFloatByAddr(_chan, (x_measure)); \
	  DownlinkPutFloatByAddr(_chan, (y_measure)); \
	  DownlinkPutFloatByAddr(_chan, (yd_measure)); \
	  DownlinkPutFloatByAddr(_chan, (xd_measure)); \
	  DownlinkPutFloatByAddr(_chan, (Pxx)); \
	  DownlinkPutFloatByAddr(_chan, (Pyy)); \
	  DownlinkPutFloatByAddr(_chan, (Pxdxd)); \
	  DownlinkPutFloatByAddr(_chan, (Pydyd)); \
	  DownlinkEndMessage(_chan ) \
	} else \
	  DownlinkOverrun(_chan ); \
}

#define DOWNLINK_SEND_HFF_GPS(_chan, lag_cnt, lag_cnt_err, save_cnt){ \
	if (DownlinkCheckFreeSpace(_chan, DownlinkSizeOf(_chan, 0+2+2+2))) {\
	  DownlinkCountBytes(_chan, DownlinkSizeOf(_chan, 0+2+2+2)); \
	  DownlinkStartMessage(_chan, "HFF_GPS", DL_HFF_GPS, 0+2+2+2) \
	  DownlinkPutUint16ByAddr(_chan, (lag_cnt)); \
	  DownlinkPutInt16ByAddr(_chan, (lag_cnt_err)); \
	  DownlinkPutInt16ByAddr(_chan, (save_cnt)); \
	  DownlinkEndMessage(_chan ) \
	} else \
	  DownlinkOverrun(_chan ); \
}

#define DOWNLINK_SEND_BOOZ2_SONAR(_chan, front, back, right, left){ \
	if (DownlinkCheckFreeSpace(_chan, DownlinkSizeOf(_chan, 0+2+2+2+2))) {\
	  DownlinkCountBytes(_chan, DownlinkSizeOf(_chan, 0+2+2+2+2)); \
	  DownlinkStartMessage(_chan, "BOOZ2_SONAR", DL_BOOZ2_SONAR, 0+2+2+2+2) \
	  DownlinkPutUint16ByAddr(_chan, (front)); \
	  DownlinkPutUint16ByAddr(_chan, (back)); \
	  DownlinkPutUint16ByAddr(_chan, (right)); \
	  DownlinkPutUint16ByAddr(_chan, (left)); \
	  DownlinkEndMessage(_chan ) \
	} else \
	  DownlinkOverrun(_chan ); \
}

#define DOWNLINK_SEND_BOOZ2_CAM(_chan, tilt, pan){ \
	if (DownlinkCheckFreeSpace(_chan, DownlinkSizeOf(_chan, 0+2+2))) {\
	  DownlinkCountBytes(_chan, DownlinkSizeOf(_chan, 0+2+2)); \
	  DownlinkStartMessage(_chan, "BOOZ2_CAM", DL_BOOZ2_CAM, 0+2+2) \
	  DownlinkPutInt16ByAddr(_chan, (tilt)); \
	  DownlinkPutInt16ByAddr(_chan, (pan)); \
	  DownlinkEndMessage(_chan ) \
	} else \
	  DownlinkOverrun(_chan ); \
}

#define DOWNLINK_SEND_BOOZ2_AHRS_REF_QUAT(_chan, ref_qi, ref_qx, ref_qy, ref_qz, body_qi, body_qx, body_qy, body_qz){ \
	if (DownlinkCheckFreeSpace(_chan, DownlinkSizeOf(_chan, 0+4+4+4+4+4+4+4+4))) {\
	  DownlinkCountBytes(_chan, DownlinkSizeOf(_chan, 0+4+4+4+4+4+4+4+4)); \
	  DownlinkStartMessage(_chan, "BOOZ2_AHRS_REF_QUAT", DL_BOOZ2_AHRS_REF_QUAT, 0+4+4+4+4+4+4+4+4) \
	  DownlinkPutFloatByAddr(_chan, (ref_qi)); \
	  DownlinkPutFloatByAddr(_chan, (ref_qx)); \
	  DownlinkPutFloatByAddr(_chan, (ref_qy)); \
	  DownlinkPutFloatByAddr(_chan, (ref_qz)); \
	  DownlinkPutFloatByAddr(_chan, (body_qi)); \
	  DownlinkPutFloatByAddr(_chan, (body_qx)); \
	  DownlinkPutFloatByAddr(_chan, (body_qy)); \
	  DownlinkPutFloatByAddr(_chan, (body_qz)); \
	  DownlinkEndMessage(_chan ) \
	} else \
	  DownlinkOverrun(_chan ); \
}

#define DOWNLINK_SEND_EKF7_XHAT(_chan, c, s1, s2, s3, p, q, r, bp, bq, br){ \
	if (DownlinkCheckFreeSpace(_chan, DownlinkSizeOf(_chan, 0+4+4+4+4+4+4+4+4+4+4))) {\
	  DownlinkCountBytes(_chan, DownlinkSizeOf(_chan, 0+4+4+4+4+4+4+4+4+4+4)); \
	  DownlinkStartMessage(_chan, "EKF7_XHAT", DL_EKF7_XHAT, 0+4+4+4+4+4+4+4+4+4+4) \
	  DownlinkPutFloatByAddr(_chan, (c)); \
	  DownlinkPutFloatByAddr(_chan, (s1)); \
	  DownlinkPutFloatByAddr(_chan, (s2)); \
	  DownlinkPutFloatByAddr(_chan, (s3)); \
	  DownlinkPutFloatByAddr(_chan, (p)); \
	  DownlinkPutFloatByAddr(_chan, (q)); \
	  DownlinkPutFloatByAddr(_chan, (r)); \
	  DownlinkPutFloatByAddr(_chan, (bp)); \
	  DownlinkPutFloatByAddr(_chan, (bq)); \
	  DownlinkPutFloatByAddr(_chan, (br)); \
	  DownlinkEndMessage(_chan ) \
	} else \
	  DownlinkOverrun(_chan ); \
}

#define DOWNLINK_SEND_EKF7_Y(_chan, timecount, g1, g2, g3, m1, m2, m3, p, q, r){ \
	if (DownlinkCheckFreeSpace(_chan, DownlinkSizeOf(_chan, 0+2+4+4+4+4+4+4+4+4+4))) {\
	  DownlinkCountBytes(_chan, DownlinkSizeOf(_chan, 0+2+4+4+4+4+4+4+4+4+4)); \
	  DownlinkStartMessage(_chan, "EKF7_Y", DL_EKF7_Y, 0+2+4+4+4+4+4+4+4+4+4) \
	  DownlinkPutUint16ByAddr(_chan, (timecount)); \
	  DownlinkPutFloatByAddr(_chan, (g1)); \
	  DownlinkPutFloatByAddr(_chan, (g2)); \
	  DownlinkPutFloatByAddr(_chan, (g3)); \
	  DownlinkPutFloatByAddr(_chan, (m1)); \
	  DownlinkPutFloatByAddr(_chan, (m2)); \
	  DownlinkPutFloatByAddr(_chan, (m3)); \
	  DownlinkPutFloatByAddr(_chan, (p)); \
	  DownlinkPutFloatByAddr(_chan, (q)); \
	  DownlinkPutFloatByAddr(_chan, (r)); \
	  DownlinkEndMessage(_chan ) \
	} else \
	  DownlinkOverrun(_chan ); \
}

#define DOWNLINK_SEND_EKF7_P_DIAG(_chan, c, s1, s2, s3, p, q, r, bp, bq, br){ \
	if (DownlinkCheckFreeSpace(_chan, DownlinkSizeOf(_chan, 0+4+4+4+4+4+4+4+4+4+4))) {\
	  DownlinkCountBytes(_chan, DownlinkSizeOf(_chan, 0+4+4+4+4+4+4+4+4+4+4)); \
	  DownlinkStartMessage(_chan, "EKF7_P_DIAG", DL_EKF7_P_DIAG, 0+4+4+4+4+4+4+4+4+4+4) \
	  DownlinkPutFloatByAddr(_chan, (c)); \
	  DownlinkPutFloatByAddr(_chan, (s1)); \
	  DownlinkPutFloatByAddr(_chan, (s2)); \
	  DownlinkPutFloatByAddr(_chan, (s3)); \
	  DownlinkPutFloatByAddr(_chan, (p)); \
	  DownlinkPutFloatByAddr(_chan, (q)); \
	  DownlinkPutFloatByAddr(_chan, (r)); \
	  DownlinkPutFloatByAddr(_chan, (bp)); \
	  DownlinkPutFloatByAddr(_chan, (bq)); \
	  DownlinkPutFloatByAddr(_chan, (br)); \
	  DownlinkEndMessage(_chan ) \
	} else \
	  DownlinkOverrun(_chan ); \
}

#define DOWNLINK_SEND_AHRS_EULER(_chan, phi, theta, psi){ \
	if (DownlinkCheckFreeSpace(_chan, DownlinkSizeOf(_chan, 0+4+4+4))) {\
	  DownlinkCountBytes(_chan, DownlinkSizeOf(_chan, 0+4+4+4)); \
	  DownlinkStartMessage(_chan, "AHRS_EULER", DL_AHRS_EULER, 0+4+4+4) \
	  DownlinkPutFloatByAddr(_chan, (phi)); \
	  DownlinkPutFloatByAddr(_chan, (theta)); \
	  DownlinkPutFloatByAddr(_chan, (psi)); \
	  DownlinkEndMessage(_chan ) \
	} else \
	  DownlinkOverrun(_chan ); \
}

#define DOWNLINK_SEND_AHRS_MEASUREMENT_EULER(_chan, phi, theta, psi){ \
	if (DownlinkCheckFreeSpace(_chan, DownlinkSizeOf(_chan, 0+4+4+4))) {\
	  DownlinkCountBytes(_chan, DownlinkSizeOf(_chan, 0+4+4+4)); \
	  DownlinkStartMessage(_chan, "AHRS_MEASUREMENT_EULER", DL_AHRS_MEASUREMENT_EULER, 0+4+4+4) \
	  DownlinkPutFloatByAddr(_chan, (phi)); \
	  DownlinkPutFloatByAddr(_chan, (theta)); \
	  DownlinkPutFloatByAddr(_chan, (psi)); \
	  DownlinkEndMessage(_chan ) \
	} else \
	  DownlinkOverrun(_chan ); \
}

#define DOWNLINK_SEND_WT(_chan, rpm){ \
	if (DownlinkCheckFreeSpace(_chan, DownlinkSizeOf(_chan, 0+4))) {\
	  DownlinkCountBytes(_chan, DownlinkSizeOf(_chan, 0+4)); \
	  DownlinkStartMessage(_chan, "WT", DL_WT, 0+4) \
	  DownlinkPutFloatByAddr(_chan, (rpm)); \
	  DownlinkEndMessage(_chan ) \
	} else \
	  DownlinkOverrun(_chan ); \
}

#define DOWNLINK_SEND_CSC_CAN_DEBUG(_chan, err_nb, err_code){ \
	if (DownlinkCheckFreeSpace(_chan, DownlinkSizeOf(_chan, 0+4+4))) {\
	  DownlinkCountBytes(_chan, DownlinkSizeOf(_chan, 0+4+4)); \
	  DownlinkStartMessage(_chan, "CSC_CAN_DEBUG", DL_CSC_CAN_DEBUG, 0+4+4) \
	  DownlinkPutUint32ByAddr(_chan, (err_nb)); \
	  DownlinkPutUint32ByAddr(_chan, (err_code)); \
	  DownlinkEndMessage(_chan ) \
	} else \
	  DownlinkOverrun(_chan ); \
}

#define DOWNLINK_SEND_CSC_CAN_MSG(_chan, frame, id, data_a, data_b){ \
	if (DownlinkCheckFreeSpace(_chan, DownlinkSizeOf(_chan, 0+4+4+4+4))) {\
	  DownlinkCountBytes(_chan, DownlinkSizeOf(_chan, 0+4+4+4+4)); \
	  DownlinkStartMessage(_chan, "CSC_CAN_MSG", DL_CSC_CAN_MSG, 0+4+4+4+4) \
	  DownlinkPutUint32ByAddr(_chan, (frame)); \
	  DownlinkPutUint32ByAddr(_chan, (id)); \
	  DownlinkPutUint32ByAddr(_chan, (data_a)); \
	  DownlinkPutUint32ByAddr(_chan, (data_b)); \
	  DownlinkEndMessage(_chan ) \
	} else \
	  DownlinkOverrun(_chan ); \
}

#define DOWNLINK_SEND_BOOZ_AHRS_BIAS(_chan, bp, bq, br){ \
	if (DownlinkCheckFreeSpace(_chan, DownlinkSizeOf(_chan, 0+4+4+4))) {\
	  DownlinkCountBytes(_chan, DownlinkSizeOf(_chan, 0+4+4+4)); \
	  DownlinkStartMessage(_chan, "BOOZ_AHRS_BIAS", DL_BOOZ_AHRS_BIAS, 0+4+4+4) \
	  DownlinkPutInt32ByAddr(_chan, (bp)); \
	  DownlinkPutInt32ByAddr(_chan, (bq)); \
	  DownlinkPutInt32ByAddr(_chan, (br)); \
	  DownlinkEndMessage(_chan ) \
	} else \
	  DownlinkOverrun(_chan ); \
}

#define DOWNLINK_SEND_FMS_TIME(_chan, tv_sec, tv_nsec, delay_ns){ \
	if (DownlinkCheckFreeSpace(_chan, DownlinkSizeOf(_chan, 0+4+4+4))) {\
	  DownlinkCountBytes(_chan, DownlinkSizeOf(_chan, 0+4+4+4)); \
	  DownlinkStartMessage(_chan, "FMS_TIME", DL_FMS_TIME, 0+4+4+4) \
	  DownlinkPutUint32ByAddr(_chan, (tv_sec)); \
	  DownlinkPutUint32ByAddr(_chan, (tv_nsec)); \
	  DownlinkPutUint32ByAddr(_chan, (delay_ns)); \
	  DownlinkEndMessage(_chan ) \
	} else \
	  DownlinkOverrun(_chan ); \
}

#define DOWNLINK_SEND_LOADCELL(_chan, load){ \
	if (DownlinkCheckFreeSpace(_chan, DownlinkSizeOf(_chan, 0+4))) {\
	  DownlinkCountBytes(_chan, DownlinkSizeOf(_chan, 0+4)); \
	  DownlinkStartMessage(_chan, "LOADCELL", DL_LOADCELL, 0+4) \
	  DownlinkPutInt32ByAddr(_chan, (load)); \
	  DownlinkEndMessage(_chan ) \
	} else \
	  DownlinkOverrun(_chan ); \
}

#define DOWNLINK_SEND_FLA_DEBUG(_chan, past_input, imu_rate, desired_accel, motor_command){ \
	if (DownlinkCheckFreeSpace(_chan, DownlinkSizeOf(_chan, 0+4+4+4+4))) {\
	  DownlinkCountBytes(_chan, DownlinkSizeOf(_chan, 0+4+4+4+4)); \
	  DownlinkStartMessage(_chan, "FLA_DEBUG", DL_FLA_DEBUG, 0+4+4+4+4) \
	  DownlinkPutFloatByAddr(_chan, (past_input)); \
	  DownlinkPutFloatByAddr(_chan, (imu_rate)); \
	  DownlinkPutFloatByAddr(_chan, (desired_accel)); \
	  DownlinkPutFloatByAddr(_chan, (motor_command)); \
	  DownlinkEndMessage(_chan ) \
	} else \
	  DownlinkOverrun(_chan ); \
}

#define DOWNLINK_SEND_BLMC_FAULT_STATUS(_chan, nb_raw_fault, raw_fault){ \
	if (DownlinkCheckFreeSpace(_chan, DownlinkSizeOf(_chan, 0+1+nb_raw_fault*2))) {\
	  DownlinkCountBytes(_chan, DownlinkSizeOf(_chan, 0+1+nb_raw_fault*2)); \
	  DownlinkStartMessage(_chan, "BLMC_FAULT_STATUS", DL_BLMC_FAULT_STATUS, 0+1+nb_raw_fault*2) \
	  DownlinkPutUint16Array(_chan, nb_raw_fault, raw_fault); \
	  DownlinkEndMessage(_chan ) \
	} else \
	  DownlinkOverrun(_chan ); \
}

#define DOWNLINK_SEND_BLMC_SPEEDS(_chan, nb_speeds, speeds){ \
	if (DownlinkCheckFreeSpace(_chan, DownlinkSizeOf(_chan, 0+1+nb_speeds*2))) {\
	  DownlinkCountBytes(_chan, DownlinkSizeOf(_chan, 0+1+nb_speeds*2)); \
	  DownlinkStartMessage(_chan, "BLMC_SPEEDS", DL_BLMC_SPEEDS, 0+1+nb_speeds*2) \
	  DownlinkPutInt16Array(_chan, nb_speeds, speeds); \
	  DownlinkEndMessage(_chan ) \
	} else \
	  DownlinkOverrun(_chan ); \
}

#define DOWNLINK_SEND_AHRS_DEBUG_QUAT(_chan, jqi, jqx, jqy, jqz, xqi, xqx, xqy, xqz, mqi, mqx, mqy, mqz){ \
	if (DownlinkCheckFreeSpace(_chan, DownlinkSizeOf(_chan, 0+4+4+4+4+4+4+4+4+4+4+4+4))) {\
	  DownlinkCountBytes(_chan, DownlinkSizeOf(_chan, 0+4+4+4+4+4+4+4+4+4+4+4+4)); \
	  DownlinkStartMessage(_chan, "AHRS_DEBUG_QUAT", DL_AHRS_DEBUG_QUAT, 0+4+4+4+4+4+4+4+4+4+4+4+4) \
	  DownlinkPutFloatByAddr(_chan, (jqi)); \
	  DownlinkPutFloatByAddr(_chan, (jqx)); \
	  DownlinkPutFloatByAddr(_chan, (jqy)); \
	  DownlinkPutFloatByAddr(_chan, (jqz)); \
	  DownlinkPutFloatByAddr(_chan, (xqi)); \
	  DownlinkPutFloatByAddr(_chan, (xqx)); \
	  DownlinkPutFloatByAddr(_chan, (xqy)); \
	  DownlinkPutFloatByAddr(_chan, (xqz)); \
	  DownlinkPutFloatByAddr(_chan, (mqi)); \
	  DownlinkPutFloatByAddr(_chan, (mqx)); \
	  DownlinkPutFloatByAddr(_chan, (mqy)); \
	  DownlinkPutFloatByAddr(_chan, (mqz)); \
	  DownlinkEndMessage(_chan ) \
	} else \
	  DownlinkOverrun(_chan ); \
}

#define DOWNLINK_SEND_BLMC_BUSVOLTS(_chan, nb_busvolts, busvolts){ \
	if (DownlinkCheckFreeSpace(_chan, DownlinkSizeOf(_chan, 0+1+nb_busvolts*2))) {\
	  DownlinkCountBytes(_chan, DownlinkSizeOf(_chan, 0+1+nb_busvolts*2)); \
	  DownlinkStartMessage(_chan, "BLMC_BUSVOLTS", DL_BLMC_BUSVOLTS, 0+1+nb_busvolts*2) \
	  DownlinkPutUint16Array(_chan, nb_busvolts, busvolts); \
	  DownlinkEndMessage(_chan ) \
	} else \
	  DownlinkOverrun(_chan ); \
}

#define DOWNLINK_SEND_SYSTEM_STATUS(_chan, csc1_loop_count, csc1_msg_count, csc2_loop_count, csc2_msg_count, can_rx_err, can_tx_err, rc_parser_err, system_fault){ \
	if (DownlinkCheckFreeSpace(_chan, DownlinkSizeOf(_chan, 0+4+4+4+4+4+4+4+1))) {\
	  DownlinkCountBytes(_chan, DownlinkSizeOf(_chan, 0+4+4+4+4+4+4+4+1)); \
	  DownlinkStartMessage(_chan, "SYSTEM_STATUS", DL_SYSTEM_STATUS, 0+4+4+4+4+4+4+4+1) \
	  DownlinkPutUint32ByAddr(_chan, (csc1_loop_count)); \
	  DownlinkPutUint32ByAddr(_chan, (csc1_msg_count)); \
	  DownlinkPutUint32ByAddr(_chan, (csc2_loop_count)); \
	  DownlinkPutUint32ByAddr(_chan, (csc2_msg_count)); \
	  DownlinkPutUint32ByAddr(_chan, (can_rx_err)); \
	  DownlinkPutUint32ByAddr(_chan, (can_tx_err)); \
	  DownlinkPutUint32ByAddr(_chan, (rc_parser_err)); \
	  DownlinkPutUint8ByAddr(_chan, (system_fault)); \
	  DownlinkEndMessage(_chan ) \
	} else \
	  DownlinkOverrun(_chan ); \
}

#define DOWNLINK_SEND_DYNAMIXEL(_chan, left_wing, right_wing, left_wing_flag, right_wing_flag, invalid_position, timeout_events, checksum_errors, fuse_rotation_angle, fuse_rotation_rate){ \
	if (DownlinkCheckFreeSpace(_chan, DownlinkSizeOf(_chan, 0+2+2+1+1+4+4+4+4+4))) {\
	  DownlinkCountBytes(_chan, DownlinkSizeOf(_chan, 0+2+2+1+1+4+4+4+4+4)); \
	  DownlinkStartMessage(_chan, "DYNAMIXEL", DL_DYNAMIXEL, 0+2+2+1+1+4+4+4+4+4) \
	  DownlinkPutUint16ByAddr(_chan, (left_wing)); \
	  DownlinkPutUint16ByAddr(_chan, (right_wing)); \
	  DownlinkPutUint8ByAddr(_chan, (left_wing_flag)); \
	  DownlinkPutUint8ByAddr(_chan, (right_wing_flag)); \
	  DownlinkPutUint32ByAddr(_chan, (invalid_position)); \
	  DownlinkPutUint32ByAddr(_chan, (timeout_events)); \
	  DownlinkPutUint32ByAddr(_chan, (checksum_errors)); \
	  DownlinkPutFloatByAddr(_chan, (fuse_rotation_angle)); \
	  DownlinkPutFloatByAddr(_chan, (fuse_rotation_rate)); \
	  DownlinkEndMessage(_chan ) \
	} else \
	  DownlinkOverrun(_chan ); \
}

#define DOWNLINK_SEND_RMAT_DEBUG(_chan, a, b, c, d, e, f, g, h, i){ \
	if (DownlinkCheckFreeSpace(_chan, DownlinkSizeOf(_chan, 0+4+4+4+4+4+4+4+4+4))) {\
	  DownlinkCountBytes(_chan, DownlinkSizeOf(_chan, 0+4+4+4+4+4+4+4+4+4)); \
	  DownlinkStartMessage(_chan, "RMAT_DEBUG", DL_RMAT_DEBUG, 0+4+4+4+4+4+4+4+4+4) \
	  DownlinkPutFloatByAddr(_chan, (a)); \
	  DownlinkPutFloatByAddr(_chan, (b)); \
	  DownlinkPutFloatByAddr(_chan, (c)); \
	  DownlinkPutFloatByAddr(_chan, (d)); \
	  DownlinkPutFloatByAddr(_chan, (e)); \
	  DownlinkPutFloatByAddr(_chan, (f)); \
	  DownlinkPutFloatByAddr(_chan, (g)); \
	  DownlinkPutFloatByAddr(_chan, (h)); \
	  DownlinkPutFloatByAddr(_chan, (i)); \
	  DownlinkEndMessage(_chan ) \
	} else \
	  DownlinkOverrun(_chan ); \
}

#define DOWNLINK_SEND_SIMPLE_COMMANDS(_chan, roll, pitch, yaw){ \
	if (DownlinkCheckFreeSpace(_chan, DownlinkSizeOf(_chan, 0+2+2+2))) {\
	  DownlinkCountBytes(_chan, DownlinkSizeOf(_chan, 0+2+2+2)); \
	  DownlinkStartMessage(_chan, "SIMPLE_COMMANDS", DL_SIMPLE_COMMANDS, 0+2+2+2) \
	  DownlinkPutInt16ByAddr(_chan, (roll)); \
	  DownlinkPutInt16ByAddr(_chan, (pitch)); \
	  DownlinkPutInt16ByAddr(_chan, (yaw)); \
	  DownlinkEndMessage(_chan ) \
	} else \
	  DownlinkOverrun(_chan ); \
}

#define DOWNLINK_SEND_VANE_SENSOR(_chan, alpha, alpha_filtered, alpha_target, alpha_vane_error, alpha2, beta, beta_filtered, beta_target, beta_vane_error, beta2){ \
	if (DownlinkCheckFreeSpace(_chan, DownlinkSizeOf(_chan, 0+4+4+4+4+4+4+4+4+4+4))) {\
	  DownlinkCountBytes(_chan, DownlinkSizeOf(_chan, 0+4+4+4+4+4+4+4+4+4+4)); \
	  DownlinkStartMessage(_chan, "VANE_SENSOR", DL_VANE_SENSOR, 0+4+4+4+4+4+4+4+4+4+4) \
	  DownlinkPutFloatByAddr(_chan, (alpha)); \
	  DownlinkPutFloatByAddr(_chan, (alpha_filtered)); \
	  DownlinkPutFloatByAddr(_chan, (alpha_target)); \
	  DownlinkPutFloatByAddr(_chan, (alpha_vane_error)); \
	  DownlinkPutFloatByAddr(_chan, (alpha2)); \
	  DownlinkPutFloatByAddr(_chan, (beta)); \
	  DownlinkPutFloatByAddr(_chan, (beta_filtered)); \
	  DownlinkPutFloatByAddr(_chan, (beta_target)); \
	  DownlinkPutFloatByAddr(_chan, (beta_vane_error)); \
	  DownlinkPutFloatByAddr(_chan, (beta2)); \
	  DownlinkEndMessage(_chan ) \
	} else \
	  DownlinkOverrun(_chan ); \
}

#define DOWNLINK_SEND_CONTROLLER_GAINS(_chan, roll_gamma_p, roll_gamma_d, roll_gamma_i, pitch_gamma_p, pitch_gamma_d, pitch_gamma_i, yaw_gamma_p, yaw_gamma_d, yaw_gamma_i){ \
	if (DownlinkCheckFreeSpace(_chan, DownlinkSizeOf(_chan, 0+4+4+4+4+4+4+4+4+4))) {\
	  DownlinkCountBytes(_chan, DownlinkSizeOf(_chan, 0+4+4+4+4+4+4+4+4+4)); \
	  DownlinkStartMessage(_chan, "CONTROLLER_GAINS", DL_CONTROLLER_GAINS, 0+4+4+4+4+4+4+4+4+4) \
	  DownlinkPutFloatByAddr(_chan, (roll_gamma_p)); \
	  DownlinkPutFloatByAddr(_chan, (roll_gamma_d)); \
	  DownlinkPutFloatByAddr(_chan, (roll_gamma_i)); \
	  DownlinkPutFloatByAddr(_chan, (pitch_gamma_p)); \
	  DownlinkPutFloatByAddr(_chan, (pitch_gamma_d)); \
	  DownlinkPutFloatByAddr(_chan, (pitch_gamma_i)); \
	  DownlinkPutFloatByAddr(_chan, (yaw_gamma_p)); \
	  DownlinkPutFloatByAddr(_chan, (yaw_gamma_d)); \
	  DownlinkPutFloatByAddr(_chan, (yaw_gamma_i)); \
	  DownlinkEndMessage(_chan ) \
	} else \
	  DownlinkOverrun(_chan ); \
}

#define DOWNLINK_SEND_AHRS_LKF(_chan, phi, theta, psi, qi, qx, qy, qz, p, q, r, ax, ay, az, mx, my, mz){ \
	if (DownlinkCheckFreeSpace(_chan, DownlinkSizeOf(_chan, 0+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4))) {\
	  DownlinkCountBytes(_chan, DownlinkSizeOf(_chan, 0+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4)); \
	  DownlinkStartMessage(_chan, "AHRS_LKF", DL_AHRS_LKF, 0+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4) \
	  DownlinkPutFloatByAddr(_chan, (phi)); \
	  DownlinkPutFloatByAddr(_chan, (theta)); \
	  DownlinkPutFloatByAddr(_chan, (psi)); \
	  DownlinkPutFloatByAddr(_chan, (qi)); \
	  DownlinkPutFloatByAddr(_chan, (qx)); \
	  DownlinkPutFloatByAddr(_chan, (qy)); \
	  DownlinkPutFloatByAddr(_chan, (qz)); \
	  DownlinkPutFloatByAddr(_chan, (p)); \
	  DownlinkPutFloatByAddr(_chan, (q)); \
	  DownlinkPutFloatByAddr(_chan, (r)); \
	  DownlinkPutFloatByAddr(_chan, (ax)); \
	  DownlinkPutFloatByAddr(_chan, (ay)); \
	  DownlinkPutFloatByAddr(_chan, (az)); \
	  DownlinkPutFloatByAddr(_chan, (mx)); \
	  DownlinkPutFloatByAddr(_chan, (my)); \
	  DownlinkPutFloatByAddr(_chan, (mz)); \
	  DownlinkEndMessage(_chan ) \
	} else \
	  DownlinkOverrun(_chan ); \
}

#define DOWNLINK_SEND_AHRS_LKF_DEBUG(_chan, phi_err, theta_err, psi_err, bp, bq, br, quat_norm, phi_accel, theta_accel, phi_cov, theta_cov, psi_cov, bp_cov, bq_cov, br_cov){ \
	if (DownlinkCheckFreeSpace(_chan, DownlinkSizeOf(_chan, 0+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4))) {\
	  DownlinkCountBytes(_chan, DownlinkSizeOf(_chan, 0+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4)); \
	  DownlinkStartMessage(_chan, "AHRS_LKF_DEBUG", DL_AHRS_LKF_DEBUG, 0+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4) \
	  DownlinkPutFloatByAddr(_chan, (phi_err)); \
	  DownlinkPutFloatByAddr(_chan, (theta_err)); \
	  DownlinkPutFloatByAddr(_chan, (psi_err)); \
	  DownlinkPutFloatByAddr(_chan, (bp)); \
	  DownlinkPutFloatByAddr(_chan, (bq)); \
	  DownlinkPutFloatByAddr(_chan, (br)); \
	  DownlinkPutFloatByAddr(_chan, (quat_norm)); \
	  DownlinkPutFloatByAddr(_chan, (phi_accel)); \
	  DownlinkPutFloatByAddr(_chan, (theta_accel)); \
	  DownlinkPutFloatByAddr(_chan, (phi_cov)); \
	  DownlinkPutFloatByAddr(_chan, (theta_cov)); \
	  DownlinkPutFloatByAddr(_chan, (psi_cov)); \
	  DownlinkPutFloatByAddr(_chan, (bp_cov)); \
	  DownlinkPutFloatByAddr(_chan, (bq_cov)); \
	  DownlinkPutFloatByAddr(_chan, (br_cov)); \
	  DownlinkEndMessage(_chan ) \
	} else \
	  DownlinkOverrun(_chan ); \
}

#define DOWNLINK_SEND_AHRS_LKF_ACC_DBG(_chan, qi_err, qx_err, qy_err, qz_err, bp_err, bq_err, br_err){ \
	if (DownlinkCheckFreeSpace(_chan, DownlinkSizeOf(_chan, 0+4+4+4+4+4+4+4))) {\
	  DownlinkCountBytes(_chan, DownlinkSizeOf(_chan, 0+4+4+4+4+4+4+4)); \
	  DownlinkStartMessage(_chan, "AHRS_LKF_ACC_DBG", DL_AHRS_LKF_ACC_DBG, 0+4+4+4+4+4+4+4) \
	  DownlinkPutFloatByAddr(_chan, (qi_err)); \
	  DownlinkPutFloatByAddr(_chan, (qx_err)); \
	  DownlinkPutFloatByAddr(_chan, (qy_err)); \
	  DownlinkPutFloatByAddr(_chan, (qz_err)); \
	  DownlinkPutFloatByAddr(_chan, (bp_err)); \
	  DownlinkPutFloatByAddr(_chan, (bq_err)); \
	  DownlinkPutFloatByAddr(_chan, (br_err)); \
	  DownlinkEndMessage(_chan ) \
	} else \
	  DownlinkOverrun(_chan ); \
}

#define DOWNLINK_SEND_AHRS_LKF_MAG_DBG(_chan, qi_err, qx_err, qy_err, qz_err, bp_err, bq_err, br_err){ \
	if (DownlinkCheckFreeSpace(_chan, DownlinkSizeOf(_chan, 0+4+4+4+4+4+4+4))) {\
	  DownlinkCountBytes(_chan, DownlinkSizeOf(_chan, 0+4+4+4+4+4+4+4)); \
	  DownlinkStartMessage(_chan, "AHRS_LKF_MAG_DBG", DL_AHRS_LKF_MAG_DBG, 0+4+4+4+4+4+4+4) \
	  DownlinkPutFloatByAddr(_chan, (qi_err)); \
	  DownlinkPutFloatByAddr(_chan, (qx_err)); \
	  DownlinkPutFloatByAddr(_chan, (qy_err)); \
	  DownlinkPutFloatByAddr(_chan, (qz_err)); \
	  DownlinkPutFloatByAddr(_chan, (bp_err)); \
	  DownlinkPutFloatByAddr(_chan, (bq_err)); \
	  DownlinkPutFloatByAddr(_chan, (br_err)); \
	  DownlinkEndMessage(_chan ) \
	} else \
	  DownlinkOverrun(_chan ); \
}

#define DOWNLINK_SEND_BOOZ_SIM_SENSORS_SCALED(_chan, acc_x, acc_y, acc_z, mag_x, mag_y, mag_z){ \
	if (DownlinkCheckFreeSpace(_chan, DownlinkSizeOf(_chan, 0+4+4+4+4+4+4))) {\
	  DownlinkCountBytes(_chan, DownlinkSizeOf(_chan, 0+4+4+4+4+4+4)); \
	  DownlinkStartMessage(_chan, "BOOZ_SIM_SENSORS_SCALED", DL_BOOZ_SIM_SENSORS_SCALED, 0+4+4+4+4+4+4) \
	  DownlinkPutFloatByAddr(_chan, (acc_x)); \
	  DownlinkPutFloatByAddr(_chan, (acc_y)); \
	  DownlinkPutFloatByAddr(_chan, (acc_z)); \
	  DownlinkPutFloatByAddr(_chan, (mag_x)); \
	  DownlinkPutFloatByAddr(_chan, (mag_y)); \
	  DownlinkPutFloatByAddr(_chan, (mag_z)); \
	  DownlinkEndMessage(_chan ) \
	} else \
	  DownlinkOverrun(_chan ); \
}

#define DOWNLINK_SEND_INS(_chan, ins_x, ins_y, ins_z, ins_xd, ins_yd, ins_zd, ins_xdd, ins_ydd, ins_zdd){ \
	if (DownlinkCheckFreeSpace(_chan, DownlinkSizeOf(_chan, 0+4+4+4+4+4+4+4+4+4))) {\
	  DownlinkCountBytes(_chan, DownlinkSizeOf(_chan, 0+4+4+4+4+4+4+4+4+4)); \
	  DownlinkStartMessage(_chan, "INS", DL_INS, 0+4+4+4+4+4+4+4+4+4) \
	  DownlinkPutInt32ByAddr(_chan, (ins_x)); \
	  DownlinkPutInt32ByAddr(_chan, (ins_y)); \
	  DownlinkPutInt32ByAddr(_chan, (ins_z)); \
	  DownlinkPutInt32ByAddr(_chan, (ins_xd)); \
	  DownlinkPutInt32ByAddr(_chan, (ins_yd)); \
	  DownlinkPutInt32ByAddr(_chan, (ins_zd)); \
	  DownlinkPutInt32ByAddr(_chan, (ins_xdd)); \
	  DownlinkPutInt32ByAddr(_chan, (ins_ydd)); \
	  DownlinkPutInt32ByAddr(_chan, (ins_zdd)); \
	  DownlinkEndMessage(_chan ) \
	} else \
	  DownlinkOverrun(_chan ); \
}

#define DOWNLINK_SEND_GPS_ERROR(_chan, x_position, y_position, z_position, x_velocity, y_velocity, z_velocity){ \
	if (DownlinkCheckFreeSpace(_chan, DownlinkSizeOf(_chan, 0+4+4+4+4+4+4))) {\
	  DownlinkCountBytes(_chan, DownlinkSizeOf(_chan, 0+4+4+4+4+4+4)); \
	  DownlinkStartMessage(_chan, "GPS_ERROR", DL_GPS_ERROR, 0+4+4+4+4+4+4) \
	  DownlinkPutFloatByAddr(_chan, (x_position)); \
	  DownlinkPutFloatByAddr(_chan, (y_position)); \
	  DownlinkPutFloatByAddr(_chan, (z_position)); \
	  DownlinkPutFloatByAddr(_chan, (x_velocity)); \
	  DownlinkPutFloatByAddr(_chan, (y_velocity)); \
	  DownlinkPutFloatByAddr(_chan, (z_velocity)); \
	  DownlinkEndMessage(_chan ) \
	} else \
	  DownlinkOverrun(_chan ); \
}

#define DOWNLINK_SEND_IMU_GYRO(_chan, gp, gq, gr){ \
	if (DownlinkCheckFreeSpace(_chan, DownlinkSizeOf(_chan, 0+4+4+4))) {\
	  DownlinkCountBytes(_chan, DownlinkSizeOf(_chan, 0+4+4+4)); \
	  DownlinkStartMessage(_chan, "IMU_GYRO", DL_IMU_GYRO, 0+4+4+4) \
	  DownlinkPutFloatByAddr(_chan, (gp)); \
	  DownlinkPutFloatByAddr(_chan, (gq)); \
	  DownlinkPutFloatByAddr(_chan, (gr)); \
	  DownlinkEndMessage(_chan ) \
	} else \
	  DownlinkOverrun(_chan ); \
}

#define DOWNLINK_SEND_IMU_MAG(_chan, mx, my, mz){ \
	if (DownlinkCheckFreeSpace(_chan, DownlinkSizeOf(_chan, 0+4+4+4))) {\
	  DownlinkCountBytes(_chan, DownlinkSizeOf(_chan, 0+4+4+4)); \
	  DownlinkStartMessage(_chan, "IMU_MAG", DL_IMU_MAG, 0+4+4+4) \
	  DownlinkPutFloatByAddr(_chan, (mx)); \
	  DownlinkPutFloatByAddr(_chan, (my)); \
	  DownlinkPutFloatByAddr(_chan, (mz)); \
	  DownlinkEndMessage(_chan ) \
	} else \
	  DownlinkOverrun(_chan ); \
}

#define DOWNLINK_SEND_IMU_ACCEL(_chan, ax, ay, az){ \
	if (DownlinkCheckFreeSpace(_chan, DownlinkSizeOf(_chan, 0+4+4+4))) {\
	  DownlinkCountBytes(_chan, DownlinkSizeOf(_chan, 0+4+4+4)); \
	  DownlinkStartMessage(_chan, "IMU_ACCEL", DL_IMU_ACCEL, 0+4+4+4) \
	  DownlinkPutFloatByAddr(_chan, (ax)); \
	  DownlinkPutFloatByAddr(_chan, (ay)); \
	  DownlinkPutFloatByAddr(_chan, (az)); \
	  DownlinkEndMessage(_chan ) \
	} else \
	  DownlinkOverrun(_chan ); \
}

#define DOWNLINK_SEND_IMU_GYRO_RAW(_chan, gp, gq, gr){ \
	if (DownlinkCheckFreeSpace(_chan, DownlinkSizeOf(_chan, 0+4+4+4))) {\
	  DownlinkCountBytes(_chan, DownlinkSizeOf(_chan, 0+4+4+4)); \
	  DownlinkStartMessage(_chan, "IMU_GYRO_RAW", DL_IMU_GYRO_RAW, 0+4+4+4) \
	  DownlinkPutInt32ByAddr(_chan, (gp)); \
	  DownlinkPutInt32ByAddr(_chan, (gq)); \
	  DownlinkPutInt32ByAddr(_chan, (gr)); \
	  DownlinkEndMessage(_chan ) \
	} else \
	  DownlinkOverrun(_chan ); \
}

#define DOWNLINK_SEND_IMU_ACCEL_RAW(_chan, ax, ay, az){ \
	if (DownlinkCheckFreeSpace(_chan, DownlinkSizeOf(_chan, 0+4+4+4))) {\
	  DownlinkCountBytes(_chan, DownlinkSizeOf(_chan, 0+4+4+4)); \
	  DownlinkStartMessage(_chan, "IMU_ACCEL_RAW", DL_IMU_ACCEL_RAW, 0+4+4+4) \
	  DownlinkPutInt32ByAddr(_chan, (ax)); \
	  DownlinkPutInt32ByAddr(_chan, (ay)); \
	  DownlinkPutInt32ByAddr(_chan, (az)); \
	  DownlinkEndMessage(_chan ) \
	} else \
	  DownlinkOverrun(_chan ); \
}

#define DOWNLINK_SEND_IMU_MAG_RAW(_chan, mx, my, mz){ \
	if (DownlinkCheckFreeSpace(_chan, DownlinkSizeOf(_chan, 0+4+4+4))) {\
	  DownlinkCountBytes(_chan, DownlinkSizeOf(_chan, 0+4+4+4)); \
	  DownlinkStartMessage(_chan, "IMU_MAG_RAW", DL_IMU_MAG_RAW, 0+4+4+4) \
	  DownlinkPutInt32ByAddr(_chan, (mx)); \
	  DownlinkPutInt32ByAddr(_chan, (my)); \
	  DownlinkPutInt32ByAddr(_chan, (mz)); \
	  DownlinkEndMessage(_chan ) \
	} else \
	  DownlinkOverrun(_chan ); \
}

#define DOWNLINK_SEND_IMU_GYRO_LP(_chan, gp, gq, gr){ \
	if (DownlinkCheckFreeSpace(_chan, DownlinkSizeOf(_chan, 0+4+4+4))) {\
	  DownlinkCountBytes(_chan, DownlinkSizeOf(_chan, 0+4+4+4)); \
	  DownlinkStartMessage(_chan, "IMU_GYRO_LP", DL_IMU_GYRO_LP, 0+4+4+4) \
	  DownlinkPutFloatByAddr(_chan, (gp)); \
	  DownlinkPutFloatByAddr(_chan, (gq)); \
	  DownlinkPutFloatByAddr(_chan, (gr)); \
	  DownlinkEndMessage(_chan ) \
	} else \
	  DownlinkOverrun(_chan ); \
}

#define DOWNLINK_SEND_IMU_PRESSURE(_chan, p){ \
	if (DownlinkCheckFreeSpace(_chan, DownlinkSizeOf(_chan, 0+4))) {\
	  DownlinkCountBytes(_chan, DownlinkSizeOf(_chan, 0+4)); \
	  DownlinkStartMessage(_chan, "IMU_PRESSURE", DL_IMU_PRESSURE, 0+4) \
	  DownlinkPutFloatByAddr(_chan, (p)); \
	  DownlinkEndMessage(_chan ) \
	} else \
	  DownlinkOverrun(_chan ); \
}

#define DOWNLINK_SEND_IMU_HS_GYRO(_chan, axis, nb_samples, samples){ \
	if (DownlinkCheckFreeSpace(_chan, DownlinkSizeOf(_chan, 0+1+1+nb_samples*4))) {\
	  DownlinkCountBytes(_chan, DownlinkSizeOf(_chan, 0+1+1+nb_samples*4)); \
	  DownlinkStartMessage(_chan, "IMU_HS_GYRO", DL_IMU_HS_GYRO, 0+1+1+nb_samples*4) \
	  DownlinkPutUint8ByAddr(_chan, (axis)); \
	  DownlinkPutUint32Array(_chan, nb_samples, samples); \
	  DownlinkEndMessage(_chan ) \
	} else \
	  DownlinkOverrun(_chan ); \
}

#define DOWNLINK_SEND_TEST_PASSTHROUGH_STATUS(_chan, io_proc_msg_cnt, io_proc_err_cnt, io_link_msg_cnt, io_link_err_cnt, rc_status){ \
	if (DownlinkCheckFreeSpace(_chan, DownlinkSizeOf(_chan, 0+4+4+4+4+1))) {\
	  DownlinkCountBytes(_chan, DownlinkSizeOf(_chan, 0+4+4+4+4+1)); \
	  DownlinkStartMessage(_chan, "TEST_PASSTHROUGH_STATUS", DL_TEST_PASSTHROUGH_STATUS, 0+4+4+4+4+1) \
	  DownlinkPutUint32ByAddr(_chan, (io_proc_msg_cnt)); \
	  DownlinkPutUint32ByAddr(_chan, (io_proc_err_cnt)); \
	  DownlinkPutUint32ByAddr(_chan, (io_link_msg_cnt)); \
	  DownlinkPutUint32ByAddr(_chan, (io_link_err_cnt)); \
	  DownlinkPutUint8ByAddr(_chan, (rc_status)); \
	  DownlinkEndMessage(_chan ) \
	} else \
	  DownlinkOverrun(_chan ); \
}

#define DOWNLINK_SEND_WEATHER(_chan, p_amb, t_amb, windspeed, wind_from){ \
	if (DownlinkCheckFreeSpace(_chan, DownlinkSizeOf(_chan, 0+4+4+4+4))) {\
	  DownlinkCountBytes(_chan, DownlinkSizeOf(_chan, 0+4+4+4+4)); \
	  DownlinkStartMessage(_chan, "WEATHER", DL_WEATHER, 0+4+4+4+4) \
	  DownlinkPutFloatByAddr(_chan, (p_amb)); \
	  DownlinkPutFloatByAddr(_chan, (t_amb)); \
	  DownlinkPutFloatByAddr(_chan, (windspeed)); \
	  DownlinkPutFloatByAddr(_chan, (wind_from)); \
	  DownlinkEndMessage(_chan ) \
	} else \
	  DownlinkOverrun(_chan ); \
}

#define DOWNLINK_SEND_IMU_TURNTABLE(_chan, omega){ \
	if (DownlinkCheckFreeSpace(_chan, DownlinkSizeOf(_chan, 0+4))) {\
	  DownlinkCountBytes(_chan, DownlinkSizeOf(_chan, 0+4)); \
	  DownlinkStartMessage(_chan, "IMU_TURNTABLE", DL_IMU_TURNTABLE, 0+4) \
	  DownlinkPutFloatByAddr(_chan, (omega)); \
	  DownlinkEndMessage(_chan ) \
	} else \
	  DownlinkOverrun(_chan ); \
}

#define DOWNLINK_SEND_BARO_RAW(_chan, abs, diff){ \
	if (DownlinkCheckFreeSpace(_chan, DownlinkSizeOf(_chan, 0+4+4))) {\
	  DownlinkCountBytes(_chan, DownlinkSizeOf(_chan, 0+4+4)); \
	  DownlinkStartMessage(_chan, "BARO_RAW", DL_BARO_RAW, 0+4+4) \
	  DownlinkPutInt32ByAddr(_chan, (abs)); \
	  DownlinkPutInt32ByAddr(_chan, (diff)); \
	  DownlinkEndMessage(_chan ) \
	} else \
	  DownlinkOverrun(_chan ); \
}

#define DOWNLINK_SEND_TIME(_chan, t){ \
	if (DownlinkCheckFreeSpace(_chan, DownlinkSizeOf(_chan, 0+4))) {\
	  DownlinkCountBytes(_chan, DownlinkSizeOf(_chan, 0+4)); \
	  DownlinkStartMessage(_chan, "TIME", DL_TIME, 0+4) \
	  DownlinkPutUint32ByAddr(_chan, (t)); \
	  DownlinkEndMessage(_chan ) \
	} else \
	  DownlinkOverrun(_chan ); \
}

#define DOWNLINK_SEND_ROTORCRAFT_STATUS(_chan, link_imu_nb_err, blmc_nb_err, rc_status, frame_rate, gps_status, ap_mode, ap_in_flight, ap_motors_on, ap_h_mode, ap_v_mode, vsupply, cpu_time){ \
	if (DownlinkCheckFreeSpace(_chan, DownlinkSizeOf(_chan, 0+4+1+1+1+1+1+1+1+1+1+1+2))) {\
	  DownlinkCountBytes(_chan, DownlinkSizeOf(_chan, 0+4+1+1+1+1+1+1+1+1+1+1+2)); \
	  DownlinkStartMessage(_chan, "ROTORCRAFT_STATUS", DL_ROTORCRAFT_STATUS, 0+4+1+1+1+1+1+1+1+1+1+1+2) \
	  DownlinkPutUint32ByAddr(_chan, (link_imu_nb_err)); \
	  DownlinkPutUint8ByAddr(_chan, (blmc_nb_err)); \
	  DownlinkPutUint8ByAddr(_chan, (rc_status)); \
	  DownlinkPutUint8ByAddr(_chan, (frame_rate)); \
	  DownlinkPutUint8ByAddr(_chan, (gps_status)); \
	  DownlinkPutUint8ByAddr(_chan, (ap_mode)); \
	  DownlinkPutUint8ByAddr(_chan, (ap_in_flight)); \
	  DownlinkPutUint8ByAddr(_chan, (ap_motors_on)); \
	  DownlinkPutUint8ByAddr(_chan, (ap_h_mode)); \
	  DownlinkPutUint8ByAddr(_chan, (ap_v_mode)); \
	  DownlinkPutUint8ByAddr(_chan, (vsupply)); \
	  DownlinkPutUint16ByAddr(_chan, (cpu_time)); \
	  DownlinkEndMessage(_chan ) \
	} else \
	  DownlinkOverrun(_chan ); \
}

#define DOWNLINK_SEND_OPTICFLOW(_chan, flow, ref_alt){ \
	if (DownlinkCheckFreeSpace(_chan, DownlinkSizeOf(_chan, 0+2+4))) {\
	  DownlinkCountBytes(_chan, DownlinkSizeOf(_chan, 0+2+4)); \
	  DownlinkStartMessage(_chan, "OPTICFLOW", DL_OPTICFLOW, 0+2+4) \
	  DownlinkPutUint16ByAddr(_chan, (flow)); \
	  DownlinkPutFloatByAddr(_chan, (ref_alt)); \
	  DownlinkEndMessage(_chan ) \
	} else \
	  DownlinkOverrun(_chan ); \
}

#define DOWNLINK_SEND_VISUALTARGET(_chan, x, y){ \
	if (DownlinkCheckFreeSpace(_chan, DownlinkSizeOf(_chan, 0+2+2))) {\
	  DownlinkCountBytes(_chan, DownlinkSizeOf(_chan, 0+2+2)); \
	  DownlinkStartMessage(_chan, "VISUALTARGET", DL_VISUALTARGET, 0+2+2) \
	  DownlinkPutUint16ByAddr(_chan, (x)); \
	  DownlinkPutUint16ByAddr(_chan, (y)); \
	  DownlinkEndMessage(_chan ) \
	} else \
	  DownlinkOverrun(_chan ); \
}

#define DOWNLINK_SEND_BOOZ_SIM_POS_LLH(_chan, pprz_lat, lat_geod, lat_geoc, pprz_lon, lon, pprz_alt, alt_geod, agl, asl){ \
	if (DownlinkCheckFreeSpace(_chan, DownlinkSizeOf(_chan, 0+4+4+4+4+4+4+4+4+4))) {\
	  DownlinkCountBytes(_chan, DownlinkSizeOf(_chan, 0+4+4+4+4+4+4+4+4+4)); \
	  DownlinkStartMessage(_chan, "BOOZ_SIM_POS_LLH", DL_BOOZ_SIM_POS_LLH, 0+4+4+4+4+4+4+4+4+4) \
	  DownlinkPutFloatByAddr(_chan, (pprz_lat)); \
	  DownlinkPutFloatByAddr(_chan, (lat_geod)); \
	  DownlinkPutFloatByAddr(_chan, (lat_geoc)); \
	  DownlinkPutFloatByAddr(_chan, (pprz_lon)); \
	  DownlinkPutFloatByAddr(_chan, (lon)); \
	  DownlinkPutFloatByAddr(_chan, (pprz_alt)); \
	  DownlinkPutFloatByAddr(_chan, (alt_geod)); \
	  DownlinkPutFloatByAddr(_chan, (agl)); \
	  DownlinkPutFloatByAddr(_chan, (asl)); \
	  DownlinkEndMessage(_chan ) \
	} else \
	  DownlinkOverrun(_chan ); \
}

#define DOWNLINK_SEND_BOOZ_SIM_RPMS(_chan, front, back, right, left){ \
	if (DownlinkCheckFreeSpace(_chan, DownlinkSizeOf(_chan, 0+4+4+4+4))) {\
	  DownlinkCountBytes(_chan, DownlinkSizeOf(_chan, 0+4+4+4+4)); \
	  DownlinkStartMessage(_chan, "BOOZ_SIM_RPMS", DL_BOOZ_SIM_RPMS, 0+4+4+4+4) \
	  DownlinkPutFloatByAddr(_chan, (front)); \
	  DownlinkPutFloatByAddr(_chan, (back)); \
	  DownlinkPutFloatByAddr(_chan, (right)); \
	  DownlinkPutFloatByAddr(_chan, (left)); \
	  DownlinkEndMessage(_chan ) \
	} else \
	  DownlinkOverrun(_chan ); \
}

#define DOWNLINK_SEND_BOOZ_SIM_SPEED_POS(_chan, ltpp_xdd, ltpp_ydd, ltpp_zdd, ltpp_xd, ltpp_yd, ltpp_zd, ltpp_x, ltpp_y, ltpp_z){ \
	if (DownlinkCheckFreeSpace(_chan, DownlinkSizeOf(_chan, 0+4+4+4+4+4+4+4+4+4))) {\
	  DownlinkCountBytes(_chan, DownlinkSizeOf(_chan, 0+4+4+4+4+4+4+4+4+4)); \
	  DownlinkStartMessage(_chan, "BOOZ_SIM_SPEED_POS", DL_BOOZ_SIM_SPEED_POS, 0+4+4+4+4+4+4+4+4+4) \
	  DownlinkPutFloatByAddr(_chan, (ltpp_xdd)); \
	  DownlinkPutFloatByAddr(_chan, (ltpp_ydd)); \
	  DownlinkPutFloatByAddr(_chan, (ltpp_zdd)); \
	  DownlinkPutFloatByAddr(_chan, (ltpp_xd)); \
	  DownlinkPutFloatByAddr(_chan, (ltpp_yd)); \
	  DownlinkPutFloatByAddr(_chan, (ltpp_zd)); \
	  DownlinkPutFloatByAddr(_chan, (ltpp_x)); \
	  DownlinkPutFloatByAddr(_chan, (ltpp_y)); \
	  DownlinkPutFloatByAddr(_chan, (ltpp_z)); \
	  DownlinkEndMessage(_chan ) \
	} else \
	  DownlinkOverrun(_chan ); \
}

#define DOWNLINK_SEND_BOOZ_SIM_RATE_ATTITUDE(_chan, p, q, r, phi, theta, psi){ \
	if (DownlinkCheckFreeSpace(_chan, DownlinkSizeOf(_chan, 0+4+4+4+4+4+4))) {\
	  DownlinkCountBytes(_chan, DownlinkSizeOf(_chan, 0+4+4+4+4+4+4)); \
	  DownlinkStartMessage(_chan, "BOOZ_SIM_RATE_ATTITUDE", DL_BOOZ_SIM_RATE_ATTITUDE, 0+4+4+4+4+4+4) \
	  DownlinkPutFloatByAddr(_chan, (p)); \
	  DownlinkPutFloatByAddr(_chan, (q)); \
	  DownlinkPutFloatByAddr(_chan, (r)); \
	  DownlinkPutFloatByAddr(_chan, (phi)); \
	  DownlinkPutFloatByAddr(_chan, (theta)); \
	  DownlinkPutFloatByAddr(_chan, (psi)); \
	  DownlinkEndMessage(_chan ) \
	} else \
	  DownlinkOverrun(_chan ); \
}

#define DOWNLINK_SEND_BOOZ_SIM_GYRO_BIAS(_chan, bp, bq, br){ \
	if (DownlinkCheckFreeSpace(_chan, DownlinkSizeOf(_chan, 0+4+4+4))) {\
	  DownlinkCountBytes(_chan, DownlinkSizeOf(_chan, 0+4+4+4)); \
	  DownlinkStartMessage(_chan, "BOOZ_SIM_GYRO_BIAS", DL_BOOZ_SIM_GYRO_BIAS, 0+4+4+4) \
	  DownlinkPutFloatByAddr(_chan, (bp)); \
	  DownlinkPutFloatByAddr(_chan, (bq)); \
	  DownlinkPutFloatByAddr(_chan, (br)); \
	  DownlinkEndMessage(_chan ) \
	} else \
	  DownlinkOverrun(_chan ); \
}

#define DOWNLINK_SEND_BOOZ_SIM_RANGE_METER(_chan, dist){ \
	if (DownlinkCheckFreeSpace(_chan, DownlinkSizeOf(_chan, 0+4))) {\
	  DownlinkCountBytes(_chan, DownlinkSizeOf(_chan, 0+4)); \
	  DownlinkStartMessage(_chan, "BOOZ_SIM_RANGE_METER", DL_BOOZ_SIM_RANGE_METER, 0+4) \
	  DownlinkPutFloatByAddr(_chan, (dist)); \
	  DownlinkEndMessage(_chan ) \
	} else \
	  DownlinkOverrun(_chan ); \
}

#define DOWNLINK_SEND_BOOZ_SIM_WIND(_chan, vx, vy, vz){ \
	if (DownlinkCheckFreeSpace(_chan, DownlinkSizeOf(_chan, 0+4+4+4))) {\
	  DownlinkCountBytes(_chan, DownlinkSizeOf(_chan, 0+4+4+4)); \
	  DownlinkStartMessage(_chan, "BOOZ_SIM_WIND", DL_BOOZ_SIM_WIND, 0+4+4+4) \
	  DownlinkPutFloatByAddr(_chan, (vx)); \
	  DownlinkPutFloatByAddr(_chan, (vy)); \
	  DownlinkPutFloatByAddr(_chan, (vz)); \
	  DownlinkEndMessage(_chan ) \
	} else \
	  DownlinkOverrun(_chan ); \
}

#define DOWNLINK_SEND_BOOZ_DEBUG_FOO(_chan, ami_stat){ \
	if (DownlinkCheckFreeSpace(_chan, DownlinkSizeOf(_chan, 0+1))) {\
	  DownlinkCountBytes(_chan, DownlinkSizeOf(_chan, 0+1)); \
	  DownlinkStartMessage(_chan, "BOOZ_DEBUG_FOO", DL_BOOZ_DEBUG_FOO, 0+1) \
	  DownlinkPutUint8ByAddr(_chan, (ami_stat)); \
	  DownlinkEndMessage(_chan ) \
	} else \
	  DownlinkOverrun(_chan ); \
}

#define DOWNLINK_SEND_BOOZ_MAX1167_ERR(_chan, erno){ \
	if (DownlinkCheckFreeSpace(_chan, DownlinkSizeOf(_chan, 0+1))) {\
	  DownlinkCountBytes(_chan, DownlinkSizeOf(_chan, 0+1)); \
	  DownlinkStartMessage(_chan, "BOOZ_MAX1167_ERR", DL_BOOZ_MAX1167_ERR, 0+1) \
	  DownlinkPutUint8ByAddr(_chan, (erno)); \
	  DownlinkEndMessage(_chan ) \
	} else \
	  DownlinkOverrun(_chan ); \
}

#define DOWNLINK_SEND_PPRZ_DEBUG(_chan, module, errno){ \
	if (DownlinkCheckFreeSpace(_chan, DownlinkSizeOf(_chan, 0+1+1))) {\
	  DownlinkCountBytes(_chan, DownlinkSizeOf(_chan, 0+1+1)); \
	  DownlinkStartMessage(_chan, "PPRZ_DEBUG", DL_PPRZ_DEBUG, 0+1+1) \
	  DownlinkPutUint8ByAddr(_chan, (module)); \
	  DownlinkPutUint8ByAddr(_chan, (errno)); \
	  DownlinkEndMessage(_chan ) \
	} else \
	  DownlinkOverrun(_chan ); \
}

#define DOWNLINK_SEND_BOOZ_SIM_ACCEL_LTP(_chan, xdd, ydd, zdd){ \
	if (DownlinkCheckFreeSpace(_chan, DownlinkSizeOf(_chan, 0+4+4+4))) {\
	  DownlinkCountBytes(_chan, DownlinkSizeOf(_chan, 0+4+4+4)); \
	  DownlinkStartMessage(_chan, "BOOZ_SIM_ACCEL_LTP", DL_BOOZ_SIM_ACCEL_LTP, 0+4+4+4) \
	  DownlinkPutFloatByAddr(_chan, (xdd)); \
	  DownlinkPutFloatByAddr(_chan, (ydd)); \
	  DownlinkPutFloatByAddr(_chan, (zdd)); \
	  DownlinkEndMessage(_chan ) \
	} else \
	  DownlinkOverrun(_chan ); \
}

#define DOWNLINK_SEND_LOOSE_INS_GPS(_chan, status, time_running, q0, q1, q2, q3, phi, theta, psi, north, east, down, v_north, v_east, v_down, est_p, est_q, est_r, gyroBias_x, gyroBias_y, gyroBias_z, imuCallbacks, gpsCallbacks, baroCallbacks){ \
	if (DownlinkCheckFreeSpace(_chan, DownlinkSizeOf(_chan, 0+1+8+8+8+8+8+8+8+8+8+8+8+8+8+8+8+8+8+8+8+8+4+4+4))) {\
	  DownlinkCountBytes(_chan, DownlinkSizeOf(_chan, 0+1+8+8+8+8+8+8+8+8+8+8+8+8+8+8+8+8+8+8+8+8+4+4+4)); \
	  DownlinkStartMessage(_chan, "LOOSE_INS_GPS", DL_LOOSE_INS_GPS, 0+1+8+8+8+8+8+8+8+8+8+8+8+8+8+8+8+8+8+8+8+8+4+4+4) \
	  DownlinkPutUint8ByAddr(_chan, (status)); \
	  DownlinkPutDoubleByAddr(_chan, (time_running)); \
	  DownlinkPutDoubleByAddr(_chan, (q0)); \
	  DownlinkPutDoubleByAddr(_chan, (q1)); \
	  DownlinkPutDoubleByAddr(_chan, (q2)); \
	  DownlinkPutDoubleByAddr(_chan, (q3)); \
	  DownlinkPutDoubleByAddr(_chan, (phi)); \
	  DownlinkPutDoubleByAddr(_chan, (theta)); \
	  DownlinkPutDoubleByAddr(_chan, (psi)); \
	  DownlinkPutDoubleByAddr(_chan, (north)); \
	  DownlinkPutDoubleByAddr(_chan, (east)); \
	  DownlinkPutDoubleByAddr(_chan, (down)); \
	  DownlinkPutDoubleByAddr(_chan, (v_north)); \
	  DownlinkPutDoubleByAddr(_chan, (v_east)); \
	  DownlinkPutDoubleByAddr(_chan, (v_down)); \
	  DownlinkPutDoubleByAddr(_chan, (est_p)); \
	  DownlinkPutDoubleByAddr(_chan, (est_q)); \
	  DownlinkPutDoubleByAddr(_chan, (est_r)); \
	  DownlinkPutDoubleByAddr(_chan, (gyroBias_x)); \
	  DownlinkPutDoubleByAddr(_chan, (gyroBias_y)); \
	  DownlinkPutDoubleByAddr(_chan, (gyroBias_z)); \
	  DownlinkPutUint32ByAddr(_chan, (imuCallbacks)); \
	  DownlinkPutUint32ByAddr(_chan, (gpsCallbacks)); \
	  DownlinkPutUint32ByAddr(_chan, (baroCallbacks)); \
	  DownlinkEndMessage(_chan ) \
	} else \
	  DownlinkOverrun(_chan ); \
}

#define DOWNLINK_SEND_AFL_COEFFS(_chan, roll_a, roll_b, roll_c, pitch_a, pitch_b, pitch_c, yaw_a, yaw_b, yaw_c){ \
	if (DownlinkCheckFreeSpace(_chan, DownlinkSizeOf(_chan, 0+4+4+4+4+4+4+4+4+4))) {\
	  DownlinkCountBytes(_chan, DownlinkSizeOf(_chan, 0+4+4+4+4+4+4+4+4+4)); \
	  DownlinkStartMessage(_chan, "AFL_COEFFS", DL_AFL_COEFFS, 0+4+4+4+4+4+4+4+4+4) \
	  DownlinkPutFloatByAddr(_chan, (roll_a)); \
	  DownlinkPutFloatByAddr(_chan, (roll_b)); \
	  DownlinkPutFloatByAddr(_chan, (roll_c)); \
	  DownlinkPutFloatByAddr(_chan, (pitch_a)); \
	  DownlinkPutFloatByAddr(_chan, (pitch_b)); \
	  DownlinkPutFloatByAddr(_chan, (pitch_c)); \
	  DownlinkPutFloatByAddr(_chan, (yaw_a)); \
	  DownlinkPutFloatByAddr(_chan, (yaw_b)); \
	  DownlinkPutFloatByAddr(_chan, (yaw_c)); \
	  DownlinkEndMessage(_chan ) \
	} else \
	  DownlinkOverrun(_chan ); \
}

#define DOWNLINK_SEND_BOOZ_ATT_REF_MODEL(_chan, omega_p, zeta_p, omega_q, zeta_q, omega_r, zeta_r){ \
	if (DownlinkCheckFreeSpace(_chan, DownlinkSizeOf(_chan, 0+4+4+4+4+4+4))) {\
	  DownlinkCountBytes(_chan, DownlinkSizeOf(_chan, 0+4+4+4+4+4+4)); \
	  DownlinkStartMessage(_chan, "BOOZ_ATT_REF_MODEL", DL_BOOZ_ATT_REF_MODEL, 0+4+4+4+4+4+4) \
	  DownlinkPutFloatByAddr(_chan, (omega_p)); \
	  DownlinkPutFloatByAddr(_chan, (zeta_p)); \
	  DownlinkPutFloatByAddr(_chan, (omega_q)); \
	  DownlinkPutFloatByAddr(_chan, (zeta_q)); \
	  DownlinkPutFloatByAddr(_chan, (omega_r)); \
	  DownlinkPutFloatByAddr(_chan, (zeta_r)); \
	  DownlinkEndMessage(_chan ) \
	} else \
	  DownlinkOverrun(_chan ); \
}

#define DOWNLINK_SEND_BOOZ2_FF_ADAP(_chan, roll, pitch, yaw){ \
	if (DownlinkCheckFreeSpace(_chan, DownlinkSizeOf(_chan, 0+4+4+4))) {\
	  DownlinkCountBytes(_chan, DownlinkSizeOf(_chan, 0+4+4+4)); \
	  DownlinkStartMessage(_chan, "BOOZ2_FF_ADAP", DL_BOOZ2_FF_ADAP, 0+4+4+4) \
	  DownlinkPutFloatByAddr(_chan, (roll)); \
	  DownlinkPutFloatByAddr(_chan, (pitch)); \
	  DownlinkPutFloatByAddr(_chan, (yaw)); \
	  DownlinkEndMessage(_chan ) \
	} else \
	  DownlinkOverrun(_chan ); \
}

#define DOWNLINK_SEND_I2C_ERRORS(_chan, acknowledge_failure_cnt, misplaced_start_or_stop_cnt, arbitration_lost_cnt, overrun_or_underrun_cnt, pec_error_in_reception_cnt, timeout_or_tlow_error_cnt, smbus_alert_cnt, unexpected_event_cnt, last_unexpected_event){ \
	if (DownlinkCheckFreeSpace(_chan, DownlinkSizeOf(_chan, 0+2+2+2+2+2+2+2+2+4))) {\
	  DownlinkCountBytes(_chan, DownlinkSizeOf(_chan, 0+2+2+2+2+2+2+2+2+4)); \
	  DownlinkStartMessage(_chan, "I2C_ERRORS", DL_I2C_ERRORS, 0+2+2+2+2+2+2+2+2+4) \
	  DownlinkPutUint16ByAddr(_chan, (acknowledge_failure_cnt)); \
	  DownlinkPutUint16ByAddr(_chan, (misplaced_start_or_stop_cnt)); \
	  DownlinkPutUint16ByAddr(_chan, (arbitration_lost_cnt)); \
	  DownlinkPutUint16ByAddr(_chan, (overrun_or_underrun_cnt)); \
	  DownlinkPutUint16ByAddr(_chan, (pec_error_in_reception_cnt)); \
	  DownlinkPutUint16ByAddr(_chan, (timeout_or_tlow_error_cnt)); \
	  DownlinkPutUint16ByAddr(_chan, (smbus_alert_cnt)); \
	  DownlinkPutUint16ByAddr(_chan, (unexpected_event_cnt)); \
	  DownlinkPutUint32ByAddr(_chan, (last_unexpected_event)); \
	  DownlinkEndMessage(_chan ) \
	} else \
	  DownlinkOverrun(_chan ); \
}

#define DOWNLINK_SEND_RDYB_TRAJECTORY(_chan, commanded_phi, commanded_theta, commanded_psi, setpoint_x, setpoint_y, setpoint_z){ \
	if (DownlinkCheckFreeSpace(_chan, DownlinkSizeOf(_chan, 0+4+4+4+4+4+4))) {\
	  DownlinkCountBytes(_chan, DownlinkSizeOf(_chan, 0+4+4+4+4+4+4)); \
	  DownlinkStartMessage(_chan, "RDYB_TRAJECTORY", DL_RDYB_TRAJECTORY, 0+4+4+4+4+4+4) \
	  DownlinkPutFloatByAddr(_chan, (commanded_phi)); \
	  DownlinkPutFloatByAddr(_chan, (commanded_theta)); \
	  DownlinkPutFloatByAddr(_chan, (commanded_psi)); \
	  DownlinkPutFloatByAddr(_chan, (setpoint_x)); \
	  DownlinkPutFloatByAddr(_chan, (setpoint_y)); \
	  DownlinkPutFloatByAddr(_chan, (setpoint_z)); \
	  DownlinkEndMessage(_chan ) \
	} else \
	  DownlinkOverrun(_chan ); \
}

#define DOWNLINK_SEND_HENRY_GNSS(_chan, last_imu_update, GPS_time, GPS_solution_valid, latitude, longitude, altitude, North, East, Down, SVs_Tracked, SVs_PVT, V_North, V_East, V_Down){ \
	if (DownlinkCheckFreeSpace(_chan, DownlinkSizeOf(_chan, 0+4+8+1+8+8+8+8+8+8+1+1+8+8+8))) {\
	  DownlinkCountBytes(_chan, DownlinkSizeOf(_chan, 0+4+8+1+8+8+8+8+8+8+1+1+8+8+8)); \
	  DownlinkStartMessage(_chan, "HENRY_GNSS", DL_HENRY_GNSS, 0+4+8+1+8+8+8+8+8+8+1+1+8+8+8) \
	  DownlinkPutUint32ByAddr(_chan, (last_imu_update)); \
	  DownlinkPutDoubleByAddr(_chan, (GPS_time)); \
	  DownlinkPutUint8ByAddr(_chan, (GPS_solution_valid)); \
	  DownlinkPutDoubleByAddr(_chan, (latitude)); \
	  DownlinkPutDoubleByAddr(_chan, (longitude)); \
	  DownlinkPutDoubleByAddr(_chan, (altitude)); \
	  DownlinkPutDoubleByAddr(_chan, (North)); \
	  DownlinkPutDoubleByAddr(_chan, (East)); \
	  DownlinkPutDoubleByAddr(_chan, (Down)); \
	  DownlinkPutUint8ByAddr(_chan, (SVs_Tracked)); \
	  DownlinkPutUint8ByAddr(_chan, (SVs_PVT)); \
	  DownlinkPutDoubleByAddr(_chan, (V_North)); \
	  DownlinkPutDoubleByAddr(_chan, (V_East)); \
	  DownlinkPutDoubleByAddr(_chan, (V_Down)); \
	  DownlinkEndMessage(_chan ) \
	} else \
	  DownlinkOverrun(_chan ); \
}

#else // DOWNLINK
#define DOWNLINK_SEND_BOOT(_chan, version) {}
#define DOWNLINK_SEND_ALIVE(_chan, nb_md5sum, md5sum) {}
#define DOWNLINK_SEND_PONG(_chan ) {}
#define DOWNLINK_SEND_TAKEOFF(_chan, cpu_time) {}
#define DOWNLINK_SEND_DebugChao(_chan, int16_1, int16_2, int16_3, int32_1, int32_2, int32_3) {}
#define DOWNLINK_SEND_ATTITUDE(_chan, phi, psi, theta) {}
#define DOWNLINK_SEND_IR_SENSORS(_chan, ir1, ir2, longitudinal, lateral, vertical) {}
#define DOWNLINK_SEND_GPS(_chan, mode, utm_east, utm_north, course, alt, speed, climb, week, itow, utm_zone, gps_nb_err) {}
#define DOWNLINK_SEND_NAVIGATION_REF(_chan, utm_east, utm_north, utm_zone) {}
#define DOWNLINK_SEND_NAVIGATION(_chan, cur_block, cur_stage, pos_x, pos_y, dist2_wp, dist2_home, circle_count, oval_count) {}
#define DOWNLINK_SEND_PPRZ_MODE(_chan, ap_mode, ap_gaz, ap_lateral, ap_horizontal, if_calib_mode, mcu1_status) {}
#define DOWNLINK_SEND_BAT(_chan, throttle, voltage, amps, flight_time, kill_auto_throttle, block_time, stage_time, energy) {}
#define DOWNLINK_SEND_DEBUG_MCU_LINK(_chan, i2c_nb_err, i2c_mcu1_nb_err, ppm_rate) {}
#define DOWNLINK_SEND_CALIBRATION(_chan, climb_sum_err, climb_gaz_submode) {}
#define DOWNLINK_SEND_SETTINGS(_chan, slider_1_val, slider_2_val) {}
#define DOWNLINK_SEND_DESIRED(_chan, roll, pitch, course, x, y, altitude, climb) {}
#define DOWNLINK_SEND_GPS_SOL(_chan, Pacc, Sacc, PDOP, numSV) {}
#define DOWNLINK_SEND_ADC_GENERIC(_chan, val1, val2) {}
#define DOWNLINK_SEND_TEST_FORMAT(_chan, val1, val2) {}
#define DOWNLINK_SEND_CAM(_chan, phi, theta, target_x, target_y) {}
#define DOWNLINK_SEND_CIRCLE(_chan, center_east, center_north, radius) {}
#define DOWNLINK_SEND_SEGMENT(_chan, segment_east_1, segment_north_1, segment_east_2, segment_north_2) {}
#define DOWNLINK_SEND_DOWNLINK_STATUS(_chan, run_time, rx_bytes, rx_msgs, rx_err, rx_bytes_rate, rx_msgs_rate, ping_time) {}
#define DOWNLINK_SEND_MODEM_STATUS(_chan, detected, valim, cd, nb_byte, nb_msg, nb_err) {}
#define DOWNLINK_SEND_SVINFO(_chan, chn, SVID, Flags, QI, CNO, Elev, Azim) {}
#define DOWNLINK_SEND_DEBUG(_chan, nb_msg, msg) {}
#define DOWNLINK_SEND_SURVEY(_chan, east, north, west, south) {}
#define DOWNLINK_SEND_WC_RSSI(_chan, raw_level) {}
#define DOWNLINK_SEND_RANGEFINDER(_chan, range, z_dot, z_dot_sum_err, z_dot_setpoint, z_sum_err, z_setpoint, flying) {}
#define DOWNLINK_SEND_DOWNLINK(_chan, nb_ovrn, rate, nb_msgs) {}
#define DOWNLINK_SEND_DL_VALUE(_chan, index, value) {}
#define DOWNLINK_SEND_MARK(_chan, ac_id, lat, long) {}
#define DOWNLINK_SEND_SYS_MON(_chan, periodic_time, periodic_cycle, periodic_cycle_min, periodic_cycle_max, event_number, cpu_load) {}
#define DOWNLINK_SEND_MOTOR(_chan, rpm, current) {}
#define DOWNLINK_SEND_WP_MOVED(_chan, wp_id, utm_east, utm_north, alt, utm_zone) {}
#define DOWNLINK_SEND_GYRO_RATES(_chan, roll_adc, roll, pitch) {}
#define DOWNLINK_SEND_ENERGY(_chan, bat, amp, energy, power) {}
#define DOWNLINK_SEND_BARO_BMP85_CALIB(_chan, a1, a2, a3, a4, a5, a6, b1, b2, mb, mc, md) {}
#define DOWNLINK_SEND_BARO_BMP85(_chan, UT, UP, P, T, MSL) {}
#define DOWNLINK_SEND_SPEED_LOOP(_chan, ve_set_point, ve, vn_set_point, vn, north_sp, east_sp) {}
#define DOWNLINK_SEND_ALT_KALMAN(_chan, p00, p01, p10, p11) {}
#define DOWNLINK_SEND_ESTIMATOR(_chan, z, z_dot) {}
#define DOWNLINK_SEND_TUNE_ROLL(_chan, p, phi, phi_sp) {}
#define DOWNLINK_SEND_BARO_MS5534A(_chan, pressure, temp, alt) {}
#define DOWNLINK_SEND_PRESSURE(_chan, airspeed_adc, airspeed, altitude_adc, altitude) {}
#define DOWNLINK_SEND_BARO_WORDS(_chan, w1, w2, w3, w4) {}
#define DOWNLINK_SEND_WP_MOVED_LLA(_chan, wp_id, lat, lon, alt) {}
#define DOWNLINK_SEND_CHRONO(_chan, tag, time) {}
#define DOWNLINK_SEND_WP_MOVED_ENU(_chan, wp_id, east, north, up) {}
#define DOWNLINK_SEND_WINDTURBINE_STATUS_(_chan, ac_id, tb_id, sync_itow, cycle_time) {}
#define DOWNLINK_SEND_RC_3CH_(_chan, throttle_mode, roll, pitch) {}
#define DOWNLINK_SEND_MPPT(_chan, nb_values, values) {}
#define DOWNLINK_SEND_DEBUG_IR_I2C(_chan, ir1, ir2, top) {}
#define DOWNLINK_SEND_AIRSPEED(_chan, airspeed, airspeed_sp, airspeed_cnt, groundspeed_sp) {}
#define DOWNLINK_SEND_XSENS(_chan, counter, p, q, r, phi, theta, psi, ax, ay, az, vx, vy, vz, lat, lon, alt, status, hour, min, sec, nanosec, year, month, day) {}
#define DOWNLINK_SEND_BARO_ETS(_chan, adc, offset, scaled) {}
#define DOWNLINK_SEND_AIRSPEED_ETS(_chan, adc, offset, scaled) {}
#define DOWNLINK_SEND_PBN(_chan, airspeed_adc, altitude_adc, airspeed, altitude, airspeed_offset, altitude_offset) {}
#define DOWNLINK_SEND_GPS_LLA(_chan, lat, lon, alt, course, speed, climb, week, itow, mode, gps_nb_err) {}
#define DOWNLINK_SEND_H_CTL_A(_chan, roll_sum_err, ref_roll_angle, pitch_sum_err, ref_pitch_angle) {}
#define DOWNLINK_SEND_TURB_PRESSURE_RAW(_chan, ch_0, ch_1, ch_2, ch_3, ch_4, ch_5, ch_6, ch_7, ch_8, ch_9, ch_10, ch_11, ch_12, ch_13, ch_14, ch_15) {}
#define DOWNLINK_SEND_TURB_PRESSURE_VOLTAGE(_chan, ch_1_p, ch_1_t, ch_2_p, ch_2_t, ch_3_p, ch_3_t, ch_4_p, ch_4_t, ch_5_p, ch_5_t, ch_6_p, ch_6_t, ch_7_p, ch_7_t, gnd1, gnd2) {}
#define DOWNLINK_SEND_VF_UPDATE(_chan, baro, range_meter) {}
#define DOWNLINK_SEND_VF_PREDICT(_chan, accel) {}
#define DOWNLINK_SEND_CROSS_TRACK_ERROR(_chan, cross_track_error, cte_int) {}
#define DOWNLINK_SEND_ESTIMATOR_COMP_FILTER(_chan, gyro_hp_last_out, gyro_int, gps_lp_last_out, ir_lp_last_out) {}
#define DOWNLINK_SEND_FORMATION_SLOT_TM(_chan, ac_id, mode, slot_east, slot_north, slot_alt) {}
#define DOWNLINK_SEND_FORMATION_STATUS_TM(_chan, ac_id, leader_id, status) {}
#define DOWNLINK_SEND_BMP_STATUS(_chan, press, temp) {}
#define DOWNLINK_SEND_MLX_STATUS(_chan, itemp_case, temp_case, itemp_obj, temp_obj) {}
#define DOWNLINK_SEND_TMP_STATUS(_chan, itemp, temp) {}
#define DOWNLINK_SEND_WIND_INFO_RET(_chan, east, north, airspeed) {}
#define DOWNLINK_SEND_SCP_STATUS(_chan, press, temp) {}
#define DOWNLINK_SEND_SHT_STATUS(_chan, ihumid, itemp, humid, temp) {}
#define DOWNLINK_SEND_ENOSE_STATUS(_chan, val1, val2, val3, PID, nb_heat, heat) {}
#define DOWNLINK_SEND_DPICCO_STATUS(_chan, humid, temp, fhumid, ftemp) {}
#define DOWNLINK_SEND_ANTENNA_DEBUG(_chan, mag_xraw, mag_yraw, mag_xcal, mag_ycal, mag_heading, mag_magnitude, mag_temp, mag_distor, mag_cal_status) {}
#define DOWNLINK_SEND_ANTENNA_STATUS(_chan, azim_sp, elev_sp, id_sp, mode) {}
#define DOWNLINK_SEND_MOTOR_BENCH_STATUS(_chan, time_ticks, throttle, rpm, current, thrust, torque, time_s, mode) {}
#define DOWNLINK_SEND_MOTOR_BENCH_STATIC(_chan, av_rpm, av_thrust, av_current, throttle) {}
#define DOWNLINK_SEND_HIH_STATUS(_chan, humid, fhumid, ftemp) {}
#define DOWNLINK_SEND_TEMT_STATUS(_chan, light, f_light) {}
#define DOWNLINK_SEND_GP2Y_STATUS(_chan, idensity, density) {}
#define DOWNLINK_SEND_SHT_SERIAL(_chan, serial0, serial1) {}
#define DOWNLINK_SEND_PPM(_chan, ppm_rate, nb_values, values) {}
#define DOWNLINK_SEND_RC(_chan, nb_values, values) {}
#define DOWNLINK_SEND_COMMANDS(_chan, nb_values, values) {}
#define DOWNLINK_SEND_FBW_STATUS(_chan, rc_status, frame_rate, mode, vsupply, current) {}
#define DOWNLINK_SEND_ADC(_chan, mcu, nb_values, values) {}
#define DOWNLINK_SEND_ACTUATORS(_chan, nb_values, values) {}
#define DOWNLINK_SEND_BETH(_chan, azimuth, elevation, tilt, counter, can_errs, spi_errs, thrust_out, pitch_out) {}
#define DOWNLINK_SEND_BETH_ESTIMATOR(_chan, tilt, tilt_dot, elevation, elevation_dot, azimuth, azimuth_dot) {}
#define DOWNLINK_SEND_BETH_CONTROLLER(_chan, pitch, thrust, pitch_ff, pitch_fb, thrust_ff, thrust_fb, tilt_sp, tilt_ref, tilt_dot_ref, elevation_sp , elevation_ref , elevation_dot_ref, azimuth_sp) {}
#define DOWNLINK_SEND_BETH_CONTROLLER_TWIST(_chan, S, S_dot, U_twt, error) {}
#define DOWNLINK_SEND_DC_SHOT(_chan, photo_nr, utm_east, utm_north, z, utm_zone, phi, theta, course, speed, itow) {}
#define DOWNLINK_SEND_TEST_BOARD_RESULTS(_chan, uart, ppm, nb_servo, servo) {}
#define DOWNLINK_SEND_BETH_CONTROLLER_SFB(_chan, one) {}
#define DOWNLINK_SEND_PAYLOAD(_chan, nb_values, values) {}
#define DOWNLINK_SEND_TCAS_TA(_chan, ac_id) {}
#define DOWNLINK_SEND_TCAS_RA(_chan, ac_id, resolve) {}
#define DOWNLINK_SEND_TCAS_RESOLVED(_chan, ac_id) {}
#define DOWNLINK_SEND_TCAS_DEBUG(_chan, ac_id, tau) {}
#define DOWNLINK_SEND_POTENTIAL(_chan, east, north, alt, speed, climb) {}
#define DOWNLINK_SEND_VERTICAL_ENERGY(_chan, Epot_err, Ekin_err, Etot_err, Edis_err, throttle, nav_pitch, speed_sp) {}
#define DOWNLINK_SEND_STAB_ATTITUDE_FLOAT(_chan, est_p, est_q, est_r, est_phi, est_theta, est_psi, ref_phi, ref_theta, ref_psi, sum_err_phi, sum_err_theta, sum_err_psi, delta_a_fb, delta_e_fb, delta_r_fb, delta_a_ff, delta_e_ff, delta_r_ff, delta_a, delta_e, delta_r, est_p_d, est_q_d, est_r_d) {}
#define DOWNLINK_SEND_IMU_GYRO_SCALED(_chan, gp, gq, gr) {}
#define DOWNLINK_SEND_IMU_ACCEL_SCALED(_chan, ax, ay, az) {}
#define DOWNLINK_SEND_IMU_MAG_SCALED(_chan, mx, my, mz) {}
#define DOWNLINK_SEND_FILTER(_chan, phi, theta, psi, measure_phi, measure_theta, measure_psi, corrected_phi, corrected_theta, corrected_psi, correction_phi, correction_theta, correction_psi, bp, bq, br) {}
#define DOWNLINK_SEND_FILTER2(_chan, px, py, pz, gsx, gsy, gsz) {}
#define DOWNLINK_SEND_RATE_LOOP(_chan, sp_p, sp_q, sp_r, ref_p, ref_q, ref_r, refdot_p, refdot_q, refdot_r, sumerr_p, sumerr_q, sumerr_r, ff_p, ff_q, ff_r, fb_p, fb_q, fb_r, delta_t) {}
#define DOWNLINK_SEND_FILTER_ALIGNER(_chan, lp_gp, lp_gq, lp_gr, gp, gq, gr, noise, cnt) {}
#define DOWNLINK_SEND_FILTER_Q(_chan, qi, qx, qy, qz) {}
#define DOWNLINK_SEND_FILTER_COR(_chan, mphi, mtheta, mpsi, qi, qx, qy, qz) {}
#define DOWNLINK_SEND_STAB_ATTITUDE_INT(_chan, est_p, est_q, est_r, est_phi, est_theta, est_psi, sp_phi, sp_theta, sp_psi, sum_err_phi, sum_err_theta, sum_err_psi, delta_a_fb, delta_e_fb, delta_r_fb, delta_a_ff, delta_e_ff, delta_r_ff, delta_a, delta_e, delta_r) {}
#define DOWNLINK_SEND_STAB_ATTITUDE_REF_INT(_chan, sp_phi, sp_theta, sp_psi, ref_phi, ref_theta, ref_psi, ref_p, ref_q, ref_r, ref_pd, ref_qd, ref_rd) {}
#define DOWNLINK_SEND_STAB_ATTITUDE_REF_FLOAT(_chan, sp_phi, sp_theta, sp_psi, ref_phi, ref_theta, ref_psi, ref_p, ref_q, ref_r, ref_pd, ref_qd, ref_rd) {}
#define DOWNLINK_SEND_BOOZ2_CMD(_chan, cmd_roll, cmd_pitch, cmd_yaw, cmd_thrust) {}
#define DOWNLINK_SEND_GUIDANCE(_chan, pos_n, pos_e, sp_pos_n, sp_pos_e) {}
#define DOWNLINK_SEND_VERT_LOOP(_chan, z_sp, zd_sp, est_z, est_zd, est_zdd, ref_z, ref_zd, ref_zdd, adp_inv_m, adp_cov, adp_meas, sum_err, ff_cmd, fb_cmd, delta_t) {}
#define DOWNLINK_SEND_HOVER_LOOP(_chan, sp_x, sp_y, est_x, est_y, est_xd, est_yd, est_xdd, est_ydd, err_x, err_y, err_xd, err_yd, err_sum_x, err_sum_y, err_nav_x, err_nav_y, cmd_x, cmd_y, cmd_phi, cmd_theta, cmd_psi) {}
#define DOWNLINK_SEND_BOOZ2_FP(_chan, east, north, up, veast, vnorth, vup, phi, theta, psi, carrot_east, carrot_north, carrot_up, carrot_psi, thrust, flight_time) {}
#define DOWNLINK_SEND_BOOZ2_FMS_INFO(_chan, tbd) {}
#define DOWNLINK_SEND_GUIDANCE_H_REF_INT(_chan, sp_x, ref_x, ref_xd, ref_xdd, sp_y, ref_y, ref_yd, ref_ydd) {}
#define DOWNLINK_SEND_BOOZ2_TUNE_HOVER(_chan, rc_roll, rc_pitch, rc_yaw, cmd_roll, cmd_pitch, cmd_yaw, cmd_thrust, imu_phi, imu_theta, imu_psi, body_phi, body_theta, body_psi) {}
#define DOWNLINK_SEND_INS_Z(_chan, baro_alt, ins_z, ins_zd, ins_zdd) {}
#define DOWNLINK_SEND_INS_REF(_chan, ecef_x0, ecef_y0, ecef_z0, lat0, lon0, alt0, hmsl0, baro_qfe) {}
#define DOWNLINK_SEND_BOOZ2_GPS(_chan, ecef_x, ecef_y, ecef_z, lat, lon, alt, ecef_xd, ecef_yd, ecef_zd, pacc, sacc, tow, pdop, numsv, fix) {}
#define DOWNLINK_SEND_BOOZ2_AHRS_EULER(_chan, imu_phi, imu_theta, imu_psi, body_phi, body_theta, body_psi) {}
#define DOWNLINK_SEND_BOOZ2_AHRS_QUAT(_chan, imu_qi, imu_qx, imu_qy, imu_qz, body_qi, body_qx, body_qy, body_qz) {}
#define DOWNLINK_SEND_BOOZ2_AHRS_RMAT(_chan, imu_m00, imu_m01, imu_m02, imu_m10, imu_m11, imu_m12, imu_m20, imu_m21, imu_m22, body_m00, body_m01, body_m02, body_m10, body_m11, body_m12, body_m20, body_m21, body_m22) {}
#define DOWNLINK_SEND_ROTORCRAFT_NAV_STATUS(_chan, block_time, stage_time, cur_block, cur_stage, horizontal_mode) {}
#define DOWNLINK_SEND_BOOZ2_RADIO_CONTROL(_chan, roll, pitch, yaw, throttle, mode, kill, status) {}
#define DOWNLINK_SEND_BOOZ_BARO_RAW(_chan, offset, value, value_filtered) {}
#define DOWNLINK_SEND_VFF(_chan, measure, z, zd, bias, Pzz, Pzdzd, Pbb) {}
#define DOWNLINK_SEND_BOOZ2_TUNE_FF(_chan, fb_rms, dg, g) {}
#define DOWNLINK_SEND_HFF(_chan, x, y, xd, yd, xdd, ydd) {}
#define DOWNLINK_SEND_HFF_DBG(_chan, x_measure, y_measure, yd_measure, xd_measure, Pxx, Pyy, Pxdxd, Pydyd) {}
#define DOWNLINK_SEND_HFF_GPS(_chan, lag_cnt, lag_cnt_err, save_cnt) {}
#define DOWNLINK_SEND_BOOZ2_SONAR(_chan, front, back, right, left) {}
#define DOWNLINK_SEND_BOOZ2_CAM(_chan, tilt, pan) {}
#define DOWNLINK_SEND_BOOZ2_AHRS_REF_QUAT(_chan, ref_qi, ref_qx, ref_qy, ref_qz, body_qi, body_qx, body_qy, body_qz) {}
#define DOWNLINK_SEND_EKF7_XHAT(_chan, c, s1, s2, s3, p, q, r, bp, bq, br) {}
#define DOWNLINK_SEND_EKF7_Y(_chan, timecount, g1, g2, g3, m1, m2, m3, p, q, r) {}
#define DOWNLINK_SEND_EKF7_P_DIAG(_chan, c, s1, s2, s3, p, q, r, bp, bq, br) {}
#define DOWNLINK_SEND_AHRS_EULER(_chan, phi, theta, psi) {}
#define DOWNLINK_SEND_AHRS_MEASUREMENT_EULER(_chan, phi, theta, psi) {}
#define DOWNLINK_SEND_WT(_chan, rpm) {}
#define DOWNLINK_SEND_CSC_CAN_DEBUG(_chan, err_nb, err_code) {}
#define DOWNLINK_SEND_CSC_CAN_MSG(_chan, frame, id, data_a, data_b) {}
#define DOWNLINK_SEND_BOOZ_AHRS_BIAS(_chan, bp, bq, br) {}
#define DOWNLINK_SEND_FMS_TIME(_chan, tv_sec, tv_nsec, delay_ns) {}
#define DOWNLINK_SEND_LOADCELL(_chan, load) {}
#define DOWNLINK_SEND_FLA_DEBUG(_chan, past_input, imu_rate, desired_accel, motor_command) {}
#define DOWNLINK_SEND_BLMC_FAULT_STATUS(_chan, nb_raw_fault, raw_fault) {}
#define DOWNLINK_SEND_BLMC_SPEEDS(_chan, nb_speeds, speeds) {}
#define DOWNLINK_SEND_AHRS_DEBUG_QUAT(_chan, jqi, jqx, jqy, jqz, xqi, xqx, xqy, xqz, mqi, mqx, mqy, mqz) {}
#define DOWNLINK_SEND_BLMC_BUSVOLTS(_chan, nb_busvolts, busvolts) {}
#define DOWNLINK_SEND_SYSTEM_STATUS(_chan, csc1_loop_count, csc1_msg_count, csc2_loop_count, csc2_msg_count, can_rx_err, can_tx_err, rc_parser_err, system_fault) {}
#define DOWNLINK_SEND_DYNAMIXEL(_chan, left_wing, right_wing, left_wing_flag, right_wing_flag, invalid_position, timeout_events, checksum_errors, fuse_rotation_angle, fuse_rotation_rate) {}
#define DOWNLINK_SEND_RMAT_DEBUG(_chan, a, b, c, d, e, f, g, h, i) {}
#define DOWNLINK_SEND_SIMPLE_COMMANDS(_chan, roll, pitch, yaw) {}
#define DOWNLINK_SEND_VANE_SENSOR(_chan, alpha, alpha_filtered, alpha_target, alpha_vane_error, alpha2, beta, beta_filtered, beta_target, beta_vane_error, beta2) {}
#define DOWNLINK_SEND_CONTROLLER_GAINS(_chan, roll_gamma_p, roll_gamma_d, roll_gamma_i, pitch_gamma_p, pitch_gamma_d, pitch_gamma_i, yaw_gamma_p, yaw_gamma_d, yaw_gamma_i) {}
#define DOWNLINK_SEND_AHRS_LKF(_chan, phi, theta, psi, qi, qx, qy, qz, p, q, r, ax, ay, az, mx, my, mz) {}
#define DOWNLINK_SEND_AHRS_LKF_DEBUG(_chan, phi_err, theta_err, psi_err, bp, bq, br, quat_norm, phi_accel, theta_accel, phi_cov, theta_cov, psi_cov, bp_cov, bq_cov, br_cov) {}
#define DOWNLINK_SEND_AHRS_LKF_ACC_DBG(_chan, qi_err, qx_err, qy_err, qz_err, bp_err, bq_err, br_err) {}
#define DOWNLINK_SEND_AHRS_LKF_MAG_DBG(_chan, qi_err, qx_err, qy_err, qz_err, bp_err, bq_err, br_err) {}
#define DOWNLINK_SEND_BOOZ_SIM_SENSORS_SCALED(_chan, acc_x, acc_y, acc_z, mag_x, mag_y, mag_z) {}
#define DOWNLINK_SEND_INS(_chan, ins_x, ins_y, ins_z, ins_xd, ins_yd, ins_zd, ins_xdd, ins_ydd, ins_zdd) {}
#define DOWNLINK_SEND_GPS_ERROR(_chan, x_position, y_position, z_position, x_velocity, y_velocity, z_velocity) {}
#define DOWNLINK_SEND_IMU_GYRO(_chan, gp, gq, gr) {}
#define DOWNLINK_SEND_IMU_MAG(_chan, mx, my, mz) {}
#define DOWNLINK_SEND_IMU_ACCEL(_chan, ax, ay, az) {}
#define DOWNLINK_SEND_IMU_GYRO_RAW(_chan, gp, gq, gr) {}
#define DOWNLINK_SEND_IMU_ACCEL_RAW(_chan, ax, ay, az) {}
#define DOWNLINK_SEND_IMU_MAG_RAW(_chan, mx, my, mz) {}
#define DOWNLINK_SEND_IMU_GYRO_LP(_chan, gp, gq, gr) {}
#define DOWNLINK_SEND_IMU_PRESSURE(_chan, p) {}
#define DOWNLINK_SEND_IMU_HS_GYRO(_chan, axis, nb_samples, samples) {}
#define DOWNLINK_SEND_TEST_PASSTHROUGH_STATUS(_chan, io_proc_msg_cnt, io_proc_err_cnt, io_link_msg_cnt, io_link_err_cnt, rc_status) {}
#define DOWNLINK_SEND_WEATHER(_chan, p_amb, t_amb, windspeed, wind_from) {}
#define DOWNLINK_SEND_IMU_TURNTABLE(_chan, omega) {}
#define DOWNLINK_SEND_BARO_RAW(_chan, abs, diff) {}
#define DOWNLINK_SEND_TIME(_chan, t) {}
#define DOWNLINK_SEND_ROTORCRAFT_STATUS(_chan, link_imu_nb_err, blmc_nb_err, rc_status, frame_rate, gps_status, ap_mode, ap_in_flight, ap_motors_on, ap_h_mode, ap_v_mode, vsupply, cpu_time) {}
#define DOWNLINK_SEND_OPTICFLOW(_chan, flow, ref_alt) {}
#define DOWNLINK_SEND_VISUALTARGET(_chan, x, y) {}
#define DOWNLINK_SEND_BOOZ_SIM_POS_LLH(_chan, pprz_lat, lat_geod, lat_geoc, pprz_lon, lon, pprz_alt, alt_geod, agl, asl) {}
#define DOWNLINK_SEND_BOOZ_SIM_RPMS(_chan, front, back, right, left) {}
#define DOWNLINK_SEND_BOOZ_SIM_SPEED_POS(_chan, ltpp_xdd, ltpp_ydd, ltpp_zdd, ltpp_xd, ltpp_yd, ltpp_zd, ltpp_x, ltpp_y, ltpp_z) {}
#define DOWNLINK_SEND_BOOZ_SIM_RATE_ATTITUDE(_chan, p, q, r, phi, theta, psi) {}
#define DOWNLINK_SEND_BOOZ_SIM_GYRO_BIAS(_chan, bp, bq, br) {}
#define DOWNLINK_SEND_BOOZ_SIM_RANGE_METER(_chan, dist) {}
#define DOWNLINK_SEND_BOOZ_SIM_WIND(_chan, vx, vy, vz) {}
#define DOWNLINK_SEND_BOOZ_DEBUG_FOO(_chan, ami_stat) {}
#define DOWNLINK_SEND_BOOZ_MAX1167_ERR(_chan, erno) {}
#define DOWNLINK_SEND_PPRZ_DEBUG(_chan, module, errno) {}
#define DOWNLINK_SEND_BOOZ_SIM_ACCEL_LTP(_chan, xdd, ydd, zdd) {}
#define DOWNLINK_SEND_LOOSE_INS_GPS(_chan, status, time_running, q0, q1, q2, q3, phi, theta, psi, north, east, down, v_north, v_east, v_down, est_p, est_q, est_r, gyroBias_x, gyroBias_y, gyroBias_z, imuCallbacks, gpsCallbacks, baroCallbacks) {}
#define DOWNLINK_SEND_AFL_COEFFS(_chan, roll_a, roll_b, roll_c, pitch_a, pitch_b, pitch_c, yaw_a, yaw_b, yaw_c) {}
#define DOWNLINK_SEND_BOOZ_ATT_REF_MODEL(_chan, omega_p, zeta_p, omega_q, zeta_q, omega_r, zeta_r) {}
#define DOWNLINK_SEND_BOOZ2_FF_ADAP(_chan, roll, pitch, yaw) {}
#define DOWNLINK_SEND_I2C_ERRORS(_chan, acknowledge_failure_cnt, misplaced_start_or_stop_cnt, arbitration_lost_cnt, overrun_or_underrun_cnt, pec_error_in_reception_cnt, timeout_or_tlow_error_cnt, smbus_alert_cnt, unexpected_event_cnt, last_unexpected_event) {}
#define DOWNLINK_SEND_RDYB_TRAJECTORY(_chan, commanded_phi, commanded_theta, commanded_psi, setpoint_x, setpoint_y, setpoint_z) {}
#define DOWNLINK_SEND_HENRY_GNSS(_chan, last_imu_update, GPS_time, GPS_solution_valid, latitude, longitude, altitude, North, East, Down, SVs_Tracked, SVs_PVT, V_North, V_East, V_Down) {}
#endif // DOWNLINK

#define DL_BOOT_version(_payload) ((uint16_t)(*((uint8_t*)_payload+2)|*((uint8_t*)_payload+2+1)<<8))

#define DL_ALIVE_md5sum_length(_payload) ((uint8_t)(*((uint8_t*)_payload+2)))
#define DL_ALIVE_md5sum(_payload) ((uint8_t*)(_payload+3))


#define DL_TAKEOFF_cpu_time(_payload) ((uint16_t)(*((uint8_t*)_payload+2)|*((uint8_t*)_payload+2+1)<<8))

#define DL_DebugChao_int16_1(_payload) ((int16_t)(*((uint8_t*)_payload+2)|*((uint8_t*)_payload+2+1)<<8))
#define DL_DebugChao_int16_2(_payload) ((int16_t)(*((uint8_t*)_payload+4)|*((uint8_t*)_payload+4+1)<<8))
#define DL_DebugChao_int16_3(_payload) ((int16_t)(*((uint8_t*)_payload+6)|*((uint8_t*)_payload+6+1)<<8))
#define DL_DebugChao_int32_1(_payload) ((int32_t)(*((uint8_t*)_payload+8)|*((uint8_t*)_payload+8+1)<<8|((uint32_t)*((uint8_t*)_payload+8+2))<<16|((uint32_t)*((uint8_t*)_payload+8+3))<<24))
#define DL_DebugChao_int32_2(_payload) ((int32_t)(*((uint8_t*)_payload+12)|*((uint8_t*)_payload+12+1)<<8|((uint32_t)*((uint8_t*)_payload+12+2))<<16|((uint32_t)*((uint8_t*)_payload+12+3))<<24))
#define DL_DebugChao_int32_3(_payload) ((int32_t)(*((uint8_t*)_payload+16)|*((uint8_t*)_payload+16+1)<<8|((uint32_t)*((uint8_t*)_payload+16+2))<<16|((uint32_t)*((uint8_t*)_payload+16+3))<<24))

#define DL_ATTITUDE_phi(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+2)|*((uint8_t*)_payload+2+1)<<8|((uint32_t)*((uint8_t*)_payload+2+2))<<16|((uint32_t)*((uint8_t*)_payload+2+3))<<24); _f.f; }))
#define DL_ATTITUDE_psi(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+6)|*((uint8_t*)_payload+6+1)<<8|((uint32_t)*((uint8_t*)_payload+6+2))<<16|((uint32_t)*((uint8_t*)_payload+6+3))<<24); _f.f; }))
#define DL_ATTITUDE_theta(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+10)|*((uint8_t*)_payload+10+1)<<8|((uint32_t)*((uint8_t*)_payload+10+2))<<16|((uint32_t)*((uint8_t*)_payload+10+3))<<24); _f.f; }))

#define DL_IR_SENSORS_ir1(_payload) ((int16_t)(*((uint8_t*)_payload+2)|*((uint8_t*)_payload+2+1)<<8))
#define DL_IR_SENSORS_ir2(_payload) ((int16_t)(*((uint8_t*)_payload+4)|*((uint8_t*)_payload+4+1)<<8))
#define DL_IR_SENSORS_longitudinal(_payload) ((int16_t)(*((uint8_t*)_payload+6)|*((uint8_t*)_payload+6+1)<<8))
#define DL_IR_SENSORS_lateral(_payload) ((int16_t)(*((uint8_t*)_payload+8)|*((uint8_t*)_payload+8+1)<<8))
#define DL_IR_SENSORS_vertical(_payload) ((int16_t)(*((uint8_t*)_payload+10)|*((uint8_t*)_payload+10+1)<<8))

#define DL_GPS_mode(_payload) ((uint8_t)(*((uint8_t*)_payload+2)))
#define DL_GPS_utm_east(_payload) ((int32_t)(*((uint8_t*)_payload+3)|*((uint8_t*)_payload+3+1)<<8|((uint32_t)*((uint8_t*)_payload+3+2))<<16|((uint32_t)*((uint8_t*)_payload+3+3))<<24))
#define DL_GPS_utm_north(_payload) ((int32_t)(*((uint8_t*)_payload+7)|*((uint8_t*)_payload+7+1)<<8|((uint32_t)*((uint8_t*)_payload+7+2))<<16|((uint32_t)*((uint8_t*)_payload+7+3))<<24))
#define DL_GPS_course(_payload) ((int16_t)(*((uint8_t*)_payload+11)|*((uint8_t*)_payload+11+1)<<8))
#define DL_GPS_alt(_payload) ((int32_t)(*((uint8_t*)_payload+13)|*((uint8_t*)_payload+13+1)<<8|((uint32_t)*((uint8_t*)_payload+13+2))<<16|((uint32_t)*((uint8_t*)_payload+13+3))<<24))
#define DL_GPS_speed(_payload) ((uint16_t)(*((uint8_t*)_payload+17)|*((uint8_t*)_payload+17+1)<<8))
#define DL_GPS_climb(_payload) ((int16_t)(*((uint8_t*)_payload+19)|*((uint8_t*)_payload+19+1)<<8))
#define DL_GPS_week(_payload) ((uint16_t)(*((uint8_t*)_payload+21)|*((uint8_t*)_payload+21+1)<<8))
#define DL_GPS_itow(_payload) ((uint32_t)(*((uint8_t*)_payload+23)|*((uint8_t*)_payload+23+1)<<8|((uint32_t)*((uint8_t*)_payload+23+2))<<16|((uint32_t)*((uint8_t*)_payload+23+3))<<24))
#define DL_GPS_utm_zone(_payload) ((uint8_t)(*((uint8_t*)_payload+27)))
#define DL_GPS_gps_nb_err(_payload) ((uint8_t)(*((uint8_t*)_payload+28)))

#define DL_NAVIGATION_REF_utm_east(_payload) ((int32_t)(*((uint8_t*)_payload+2)|*((uint8_t*)_payload+2+1)<<8|((uint32_t)*((uint8_t*)_payload+2+2))<<16|((uint32_t)*((uint8_t*)_payload+2+3))<<24))
#define DL_NAVIGATION_REF_utm_north(_payload) ((int32_t)(*((uint8_t*)_payload+6)|*((uint8_t*)_payload+6+1)<<8|((uint32_t)*((uint8_t*)_payload+6+2))<<16|((uint32_t)*((uint8_t*)_payload+6+3))<<24))
#define DL_NAVIGATION_REF_utm_zone(_payload) ((uint8_t)(*((uint8_t*)_payload+10)))

#define DL_NAVIGATION_cur_block(_payload) ((uint8_t)(*((uint8_t*)_payload+2)))
#define DL_NAVIGATION_cur_stage(_payload) ((uint8_t)(*((uint8_t*)_payload+3)))
#define DL_NAVIGATION_pos_x(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+4)|*((uint8_t*)_payload+4+1)<<8|((uint32_t)*((uint8_t*)_payload+4+2))<<16|((uint32_t)*((uint8_t*)_payload+4+3))<<24); _f.f; }))
#define DL_NAVIGATION_pos_y(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+8)|*((uint8_t*)_payload+8+1)<<8|((uint32_t)*((uint8_t*)_payload+8+2))<<16|((uint32_t)*((uint8_t*)_payload+8+3))<<24); _f.f; }))
#define DL_NAVIGATION_dist2_wp(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+12)|*((uint8_t*)_payload+12+1)<<8|((uint32_t)*((uint8_t*)_payload+12+2))<<16|((uint32_t)*((uint8_t*)_payload+12+3))<<24); _f.f; }))
#define DL_NAVIGATION_dist2_home(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+16)|*((uint8_t*)_payload+16+1)<<8|((uint32_t)*((uint8_t*)_payload+16+2))<<16|((uint32_t)*((uint8_t*)_payload+16+3))<<24); _f.f; }))
#define DL_NAVIGATION_circle_count(_payload) ((uint8_t)(*((uint8_t*)_payload+20)))
#define DL_NAVIGATION_oval_count(_payload) ((uint8_t)(*((uint8_t*)_payload+21)))

#define DL_PPRZ_MODE_ap_mode(_payload) ((uint8_t)(*((uint8_t*)_payload+2)))
#define DL_PPRZ_MODE_ap_gaz(_payload) ((uint8_t)(*((uint8_t*)_payload+3)))
#define DL_PPRZ_MODE_ap_lateral(_payload) ((uint8_t)(*((uint8_t*)_payload+4)))
#define DL_PPRZ_MODE_ap_horizontal(_payload) ((uint8_t)(*((uint8_t*)_payload+5)))
#define DL_PPRZ_MODE_if_calib_mode(_payload) ((uint8_t)(*((uint8_t*)_payload+6)))
#define DL_PPRZ_MODE_mcu1_status(_payload) ((uint8_t)(*((uint8_t*)_payload+7)))

#define DL_BAT_throttle(_payload) ((int16_t)(*((uint8_t*)_payload+2)|*((uint8_t*)_payload+2+1)<<8))
#define DL_BAT_voltage(_payload) ((uint8_t)(*((uint8_t*)_payload+4)))
#define DL_BAT_amps(_payload) ((int16_t)(*((uint8_t*)_payload+5)|*((uint8_t*)_payload+5+1)<<8))
#define DL_BAT_flight_time(_payload) ((uint16_t)(*((uint8_t*)_payload+7)|*((uint8_t*)_payload+7+1)<<8))
#define DL_BAT_kill_auto_throttle(_payload) ((uint8_t)(*((uint8_t*)_payload+9)))
#define DL_BAT_block_time(_payload) ((uint16_t)(*((uint8_t*)_payload+10)|*((uint8_t*)_payload+10+1)<<8))
#define DL_BAT_stage_time(_payload) ((uint16_t)(*((uint8_t*)_payload+12)|*((uint8_t*)_payload+12+1)<<8))
#define DL_BAT_energy(_payload) ((int16_t)(*((uint8_t*)_payload+14)|*((uint8_t*)_payload+14+1)<<8))

#define DL_DEBUG_MCU_LINK_i2c_nb_err(_payload) ((uint8_t)(*((uint8_t*)_payload+2)))
#define DL_DEBUG_MCU_LINK_i2c_mcu1_nb_err(_payload) ((uint8_t)(*((uint8_t*)_payload+3)))
#define DL_DEBUG_MCU_LINK_ppm_rate(_payload) ((uint8_t)(*((uint8_t*)_payload+4)))

#define DL_CALIBRATION_climb_sum_err(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+2)|*((uint8_t*)_payload+2+1)<<8|((uint32_t)*((uint8_t*)_payload+2+2))<<16|((uint32_t)*((uint8_t*)_payload+2+3))<<24); _f.f; }))
#define DL_CALIBRATION_climb_gaz_submode(_payload) ((uint8_t)(*((uint8_t*)_payload+6)))

#define DL_SETTINGS_slider_1_val(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+2)|*((uint8_t*)_payload+2+1)<<8|((uint32_t)*((uint8_t*)_payload+2+2))<<16|((uint32_t)*((uint8_t*)_payload+2+3))<<24); _f.f; }))
#define DL_SETTINGS_slider_2_val(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+6)|*((uint8_t*)_payload+6+1)<<8|((uint32_t)*((uint8_t*)_payload+6+2))<<16|((uint32_t)*((uint8_t*)_payload+6+3))<<24); _f.f; }))

#define DL_DESIRED_roll(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+2)|*((uint8_t*)_payload+2+1)<<8|((uint32_t)*((uint8_t*)_payload+2+2))<<16|((uint32_t)*((uint8_t*)_payload+2+3))<<24); _f.f; }))
#define DL_DESIRED_pitch(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+6)|*((uint8_t*)_payload+6+1)<<8|((uint32_t)*((uint8_t*)_payload+6+2))<<16|((uint32_t)*((uint8_t*)_payload+6+3))<<24); _f.f; }))
#define DL_DESIRED_course(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+10)|*((uint8_t*)_payload+10+1)<<8|((uint32_t)*((uint8_t*)_payload+10+2))<<16|((uint32_t)*((uint8_t*)_payload+10+3))<<24); _f.f; }))
#define DL_DESIRED_x(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+14)|*((uint8_t*)_payload+14+1)<<8|((uint32_t)*((uint8_t*)_payload+14+2))<<16|((uint32_t)*((uint8_t*)_payload+14+3))<<24); _f.f; }))
#define DL_DESIRED_y(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+18)|*((uint8_t*)_payload+18+1)<<8|((uint32_t)*((uint8_t*)_payload+18+2))<<16|((uint32_t)*((uint8_t*)_payload+18+3))<<24); _f.f; }))
#define DL_DESIRED_altitude(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+22)|*((uint8_t*)_payload+22+1)<<8|((uint32_t)*((uint8_t*)_payload+22+2))<<16|((uint32_t)*((uint8_t*)_payload+22+3))<<24); _f.f; }))
#define DL_DESIRED_climb(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+26)|*((uint8_t*)_payload+26+1)<<8|((uint32_t)*((uint8_t*)_payload+26+2))<<16|((uint32_t)*((uint8_t*)_payload+26+3))<<24); _f.f; }))

#define DL_GPS_SOL_Pacc(_payload) ((uint32_t)(*((uint8_t*)_payload+2)|*((uint8_t*)_payload+2+1)<<8|((uint32_t)*((uint8_t*)_payload+2+2))<<16|((uint32_t)*((uint8_t*)_payload+2+3))<<24))
#define DL_GPS_SOL_Sacc(_payload) ((uint32_t)(*((uint8_t*)_payload+6)|*((uint8_t*)_payload+6+1)<<8|((uint32_t)*((uint8_t*)_payload+6+2))<<16|((uint32_t)*((uint8_t*)_payload+6+3))<<24))
#define DL_GPS_SOL_PDOP(_payload) ((uint16_t)(*((uint8_t*)_payload+10)|*((uint8_t*)_payload+10+1)<<8))
#define DL_GPS_SOL_numSV(_payload) ((uint8_t)(*((uint8_t*)_payload+12)))

#define DL_ADC_GENERIC_val1(_payload) ((uint16_t)(*((uint8_t*)_payload+2)|*((uint8_t*)_payload+2+1)<<8))
#define DL_ADC_GENERIC_val2(_payload) ((uint16_t)(*((uint8_t*)_payload+4)|*((uint8_t*)_payload+4+1)<<8))

#define DL_TEST_FORMAT_val1(_payload) (({ union { uint64_t u; double f; } _f; _f.u = (uint64_t)(*((uint8_t*)_payload+2)|((uint64_t)*((uint8_t*)_payload+2+1))<<8|((uint64_t)*((uint8_t*)_payload+2+2))<<16|((uint64_t)*((uint8_t*)_payload+2+3))<<24|((uint64_t)*((uint8_t*)_payload+2+4))<<32|((uint64_t)*((uint8_t*)_payload+2+5))<<40|((uint64_t)*((uint8_t*)_payload+2+6))<<48|((uint64_t)*((uint8_t*)_payload+2+7))<<56); Swap32IfBigEndian(_f.u); _f.f; }))
#define DL_TEST_FORMAT_val2(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+10)|*((uint8_t*)_payload+10+1)<<8|((uint32_t)*((uint8_t*)_payload+10+2))<<16|((uint32_t)*((uint8_t*)_payload+10+3))<<24); _f.f; }))

#define DL_CAM_phi(_payload) ((int8_t)(*((uint8_t*)_payload+2)))
#define DL_CAM_theta(_payload) ((int8_t)(*((uint8_t*)_payload+3)))
#define DL_CAM_target_x(_payload) ((int16_t)(*((uint8_t*)_payload+4)|*((uint8_t*)_payload+4+1)<<8))
#define DL_CAM_target_y(_payload) ((int16_t)(*((uint8_t*)_payload+6)|*((uint8_t*)_payload+6+1)<<8))

#define DL_CIRCLE_center_east(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+2)|*((uint8_t*)_payload+2+1)<<8|((uint32_t)*((uint8_t*)_payload+2+2))<<16|((uint32_t)*((uint8_t*)_payload+2+3))<<24); _f.f; }))
#define DL_CIRCLE_center_north(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+6)|*((uint8_t*)_payload+6+1)<<8|((uint32_t)*((uint8_t*)_payload+6+2))<<16|((uint32_t)*((uint8_t*)_payload+6+3))<<24); _f.f; }))
#define DL_CIRCLE_radius(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+10)|*((uint8_t*)_payload+10+1)<<8|((uint32_t)*((uint8_t*)_payload+10+2))<<16|((uint32_t)*((uint8_t*)_payload+10+3))<<24); _f.f; }))

#define DL_SEGMENT_segment_east_1(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+2)|*((uint8_t*)_payload+2+1)<<8|((uint32_t)*((uint8_t*)_payload+2+2))<<16|((uint32_t)*((uint8_t*)_payload+2+3))<<24); _f.f; }))
#define DL_SEGMENT_segment_north_1(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+6)|*((uint8_t*)_payload+6+1)<<8|((uint32_t)*((uint8_t*)_payload+6+2))<<16|((uint32_t)*((uint8_t*)_payload+6+3))<<24); _f.f; }))
#define DL_SEGMENT_segment_east_2(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+10)|*((uint8_t*)_payload+10+1)<<8|((uint32_t)*((uint8_t*)_payload+10+2))<<16|((uint32_t)*((uint8_t*)_payload+10+3))<<24); _f.f; }))
#define DL_SEGMENT_segment_north_2(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+14)|*((uint8_t*)_payload+14+1)<<8|((uint32_t)*((uint8_t*)_payload+14+2))<<16|((uint32_t)*((uint8_t*)_payload+14+3))<<24); _f.f; }))

#define DL_DOWNLINK_STATUS_run_time(_payload) ((uint32_t)(*((uint8_t*)_payload+2)|*((uint8_t*)_payload+2+1)<<8|((uint32_t)*((uint8_t*)_payload+2+2))<<16|((uint32_t)*((uint8_t*)_payload+2+3))<<24))
#define DL_DOWNLINK_STATUS_rx_bytes(_payload) ((uint32_t)(*((uint8_t*)_payload+6)|*((uint8_t*)_payload+6+1)<<8|((uint32_t)*((uint8_t*)_payload+6+2))<<16|((uint32_t)*((uint8_t*)_payload+6+3))<<24))
#define DL_DOWNLINK_STATUS_rx_msgs(_payload) ((uint32_t)(*((uint8_t*)_payload+10)|*((uint8_t*)_payload+10+1)<<8|((uint32_t)*((uint8_t*)_payload+10+2))<<16|((uint32_t)*((uint8_t*)_payload+10+3))<<24))
#define DL_DOWNLINK_STATUS_rx_err(_payload) ((uint32_t)(*((uint8_t*)_payload+14)|*((uint8_t*)_payload+14+1)<<8|((uint32_t)*((uint8_t*)_payload+14+2))<<16|((uint32_t)*((uint8_t*)_payload+14+3))<<24))
#define DL_DOWNLINK_STATUS_rx_bytes_rate(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+18)|*((uint8_t*)_payload+18+1)<<8|((uint32_t)*((uint8_t*)_payload+18+2))<<16|((uint32_t)*((uint8_t*)_payload+18+3))<<24); _f.f; }))
#define DL_DOWNLINK_STATUS_rx_msgs_rate(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+22)|*((uint8_t*)_payload+22+1)<<8|((uint32_t)*((uint8_t*)_payload+22+2))<<16|((uint32_t)*((uint8_t*)_payload+22+3))<<24); _f.f; }))
#define DL_DOWNLINK_STATUS_ping_time(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+26)|*((uint8_t*)_payload+26+1)<<8|((uint32_t)*((uint8_t*)_payload+26+2))<<16|((uint32_t)*((uint8_t*)_payload+26+3))<<24); _f.f; }))

#define DL_MODEM_STATUS_detected(_payload) ((uint8_t)(*((uint8_t*)_payload+2)))
#define DL_MODEM_STATUS_valim(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+3)|*((uint8_t*)_payload+3+1)<<8|((uint32_t)*((uint8_t*)_payload+3+2))<<16|((uint32_t)*((uint8_t*)_payload+3+3))<<24); _f.f; }))
#define DL_MODEM_STATUS_cd(_payload) ((uint8_t)(*((uint8_t*)_payload+7)))
#define DL_MODEM_STATUS_nb_byte(_payload) ((uint32_t)(*((uint8_t*)_payload+8)|*((uint8_t*)_payload+8+1)<<8|((uint32_t)*((uint8_t*)_payload+8+2))<<16|((uint32_t)*((uint8_t*)_payload+8+3))<<24))
#define DL_MODEM_STATUS_nb_msg(_payload) ((uint32_t)(*((uint8_t*)_payload+12)|*((uint8_t*)_payload+12+1)<<8|((uint32_t)*((uint8_t*)_payload+12+2))<<16|((uint32_t)*((uint8_t*)_payload+12+3))<<24))
#define DL_MODEM_STATUS_nb_err(_payload) ((uint32_t)(*((uint8_t*)_payload+16)|*((uint8_t*)_payload+16+1)<<8|((uint32_t)*((uint8_t*)_payload+16+2))<<16|((uint32_t)*((uint8_t*)_payload+16+3))<<24))

#define DL_SVINFO_chn(_payload) ((uint8_t)(*((uint8_t*)_payload+2)))
#define DL_SVINFO_SVID(_payload) ((uint8_t)(*((uint8_t*)_payload+3)))
#define DL_SVINFO_Flags(_payload) ((uint8_t)(*((uint8_t*)_payload+4)))
#define DL_SVINFO_QI(_payload) ((uint8_t)(*((uint8_t*)_payload+5)))
#define DL_SVINFO_CNO(_payload) ((uint8_t)(*((uint8_t*)_payload+6)))
#define DL_SVINFO_Elev(_payload) ((int8_t)(*((uint8_t*)_payload+7)))
#define DL_SVINFO_Azim(_payload) ((int16_t)(*((uint8_t*)_payload+8)|*((uint8_t*)_payload+8+1)<<8))

#define DL_DEBUG_msg_length(_payload) ((uint8_t)(*((uint8_t*)_payload+2)))
#define DL_DEBUG_msg(_payload) ((uint8_t*)(_payload+3))

#define DL_SURVEY_east(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+2)|*((uint8_t*)_payload+2+1)<<8|((uint32_t)*((uint8_t*)_payload+2+2))<<16|((uint32_t)*((uint8_t*)_payload+2+3))<<24); _f.f; }))
#define DL_SURVEY_north(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+6)|*((uint8_t*)_payload+6+1)<<8|((uint32_t)*((uint8_t*)_payload+6+2))<<16|((uint32_t)*((uint8_t*)_payload+6+3))<<24); _f.f; }))
#define DL_SURVEY_west(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+10)|*((uint8_t*)_payload+10+1)<<8|((uint32_t)*((uint8_t*)_payload+10+2))<<16|((uint32_t)*((uint8_t*)_payload+10+3))<<24); _f.f; }))
#define DL_SURVEY_south(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+14)|*((uint8_t*)_payload+14+1)<<8|((uint32_t)*((uint8_t*)_payload+14+2))<<16|((uint32_t)*((uint8_t*)_payload+14+3))<<24); _f.f; }))

#define DL_WC_RSSI_raw_level(_payload) ((uint8_t)(*((uint8_t*)_payload+2)))

#define DL_RANGEFINDER_range(_payload) ((uint16_t)(*((uint8_t*)_payload+2)|*((uint8_t*)_payload+2+1)<<8))
#define DL_RANGEFINDER_z_dot(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+4)|*((uint8_t*)_payload+4+1)<<8|((uint32_t)*((uint8_t*)_payload+4+2))<<16|((uint32_t)*((uint8_t*)_payload+4+3))<<24); _f.f; }))
#define DL_RANGEFINDER_z_dot_sum_err(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+8)|*((uint8_t*)_payload+8+1)<<8|((uint32_t)*((uint8_t*)_payload+8+2))<<16|((uint32_t)*((uint8_t*)_payload+8+3))<<24); _f.f; }))
#define DL_RANGEFINDER_z_dot_setpoint(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+12)|*((uint8_t*)_payload+12+1)<<8|((uint32_t)*((uint8_t*)_payload+12+2))<<16|((uint32_t)*((uint8_t*)_payload+12+3))<<24); _f.f; }))
#define DL_RANGEFINDER_z_sum_err(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+16)|*((uint8_t*)_payload+16+1)<<8|((uint32_t)*((uint8_t*)_payload+16+2))<<16|((uint32_t)*((uint8_t*)_payload+16+3))<<24); _f.f; }))
#define DL_RANGEFINDER_z_setpoint(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+20)|*((uint8_t*)_payload+20+1)<<8|((uint32_t)*((uint8_t*)_payload+20+2))<<16|((uint32_t)*((uint8_t*)_payload+20+3))<<24); _f.f; }))
#define DL_RANGEFINDER_flying(_payload) ((uint8_t)(*((uint8_t*)_payload+24)))

#define DL_DOWNLINK_nb_ovrn(_payload) ((uint8_t)(*((uint8_t*)_payload+2)))
#define DL_DOWNLINK_rate(_payload) ((uint16_t)(*((uint8_t*)_payload+3)|*((uint8_t*)_payload+3+1)<<8))
#define DL_DOWNLINK_nb_msgs(_payload) ((uint16_t)(*((uint8_t*)_payload+5)|*((uint8_t*)_payload+5+1)<<8))

#define DL_DL_VALUE_index(_payload) ((uint8_t)(*((uint8_t*)_payload+2)))
#define DL_DL_VALUE_value(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+3)|*((uint8_t*)_payload+3+1)<<8|((uint32_t)*((uint8_t*)_payload+3+2))<<16|((uint32_t)*((uint8_t*)_payload+3+3))<<24); _f.f; }))

#define DL_MARK_ac_id(_payload) ((uint8_t)(*((uint8_t*)_payload+2)))
#define DL_MARK_lat(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+3)|*((uint8_t*)_payload+3+1)<<8|((uint32_t)*((uint8_t*)_payload+3+2))<<16|((uint32_t)*((uint8_t*)_payload+3+3))<<24); _f.f; }))
#define DL_MARK_long(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+7)|*((uint8_t*)_payload+7+1)<<8|((uint32_t)*((uint8_t*)_payload+7+2))<<16|((uint32_t)*((uint8_t*)_payload+7+3))<<24); _f.f; }))

#define DL_SYS_MON_periodic_time(_payload) ((uint16_t)(*((uint8_t*)_payload+2)|*((uint8_t*)_payload+2+1)<<8))
#define DL_SYS_MON_periodic_cycle(_payload) ((uint16_t)(*((uint8_t*)_payload+4)|*((uint8_t*)_payload+4+1)<<8))
#define DL_SYS_MON_periodic_cycle_min(_payload) ((uint16_t)(*((uint8_t*)_payload+6)|*((uint8_t*)_payload+6+1)<<8))
#define DL_SYS_MON_periodic_cycle_max(_payload) ((uint16_t)(*((uint8_t*)_payload+8)|*((uint8_t*)_payload+8+1)<<8))
#define DL_SYS_MON_event_number(_payload) ((uint16_t)(*((uint8_t*)_payload+10)|*((uint8_t*)_payload+10+1)<<8))
#define DL_SYS_MON_cpu_load(_payload) ((uint8_t)(*((uint8_t*)_payload+12)))

#define DL_MOTOR_rpm(_payload) ((uint16_t)(*((uint8_t*)_payload+2)|*((uint8_t*)_payload+2+1)<<8))
#define DL_MOTOR_current(_payload) ((int32_t)(*((uint8_t*)_payload+4)|*((uint8_t*)_payload+4+1)<<8|((uint32_t)*((uint8_t*)_payload+4+2))<<16|((uint32_t)*((uint8_t*)_payload+4+3))<<24))

#define DL_WP_MOVED_wp_id(_payload) ((uint8_t)(*((uint8_t*)_payload+2)))
#define DL_WP_MOVED_utm_east(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+3)|*((uint8_t*)_payload+3+1)<<8|((uint32_t)*((uint8_t*)_payload+3+2))<<16|((uint32_t)*((uint8_t*)_payload+3+3))<<24); _f.f; }))
#define DL_WP_MOVED_utm_north(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+7)|*((uint8_t*)_payload+7+1)<<8|((uint32_t)*((uint8_t*)_payload+7+2))<<16|((uint32_t)*((uint8_t*)_payload+7+3))<<24); _f.f; }))
#define DL_WP_MOVED_alt(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+11)|*((uint8_t*)_payload+11+1)<<8|((uint32_t)*((uint8_t*)_payload+11+2))<<16|((uint32_t)*((uint8_t*)_payload+11+3))<<24); _f.f; }))
#define DL_WP_MOVED_utm_zone(_payload) ((uint8_t)(*((uint8_t*)_payload+15)))

#define DL_GYRO_RATES_roll_adc(_payload) ((int16_t)(*((uint8_t*)_payload+2)|*((uint8_t*)_payload+2+1)<<8))
#define DL_GYRO_RATES_roll(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+4)|*((uint8_t*)_payload+4+1)<<8|((uint32_t)*((uint8_t*)_payload+4+2))<<16|((uint32_t)*((uint8_t*)_payload+4+3))<<24); _f.f; }))
#define DL_GYRO_RATES_pitch(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+8)|*((uint8_t*)_payload+8+1)<<8|((uint32_t)*((uint8_t*)_payload+8+2))<<16|((uint32_t)*((uint8_t*)_payload+8+3))<<24); _f.f; }))

#define DL_ENERGY_bat(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+2)|*((uint8_t*)_payload+2+1)<<8|((uint32_t)*((uint8_t*)_payload+2+2))<<16|((uint32_t)*((uint8_t*)_payload+2+3))<<24); _f.f; }))
#define DL_ENERGY_amp(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+6)|*((uint8_t*)_payload+6+1)<<8|((uint32_t)*((uint8_t*)_payload+6+2))<<16|((uint32_t)*((uint8_t*)_payload+6+3))<<24); _f.f; }))
#define DL_ENERGY_energy(_payload) ((uint16_t)(*((uint8_t*)_payload+10)|*((uint8_t*)_payload+10+1)<<8))
#define DL_ENERGY_power(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+12)|*((uint8_t*)_payload+12+1)<<8|((uint32_t)*((uint8_t*)_payload+12+2))<<16|((uint32_t)*((uint8_t*)_payload+12+3))<<24); _f.f; }))

#define DL_BARO_BMP85_CALIB_a1(_payload) ((int16_t)(*((uint8_t*)_payload+2)|*((uint8_t*)_payload+2+1)<<8))
#define DL_BARO_BMP85_CALIB_a2(_payload) ((int16_t)(*((uint8_t*)_payload+4)|*((uint8_t*)_payload+4+1)<<8))
#define DL_BARO_BMP85_CALIB_a3(_payload) ((int16_t)(*((uint8_t*)_payload+6)|*((uint8_t*)_payload+6+1)<<8))
#define DL_BARO_BMP85_CALIB_a4(_payload) ((uint16_t)(*((uint8_t*)_payload+8)|*((uint8_t*)_payload+8+1)<<8))
#define DL_BARO_BMP85_CALIB_a5(_payload) ((uint16_t)(*((uint8_t*)_payload+10)|*((uint8_t*)_payload+10+1)<<8))
#define DL_BARO_BMP85_CALIB_a6(_payload) ((uint16_t)(*((uint8_t*)_payload+12)|*((uint8_t*)_payload+12+1)<<8))
#define DL_BARO_BMP85_CALIB_b1(_payload) ((int16_t)(*((uint8_t*)_payload+14)|*((uint8_t*)_payload+14+1)<<8))
#define DL_BARO_BMP85_CALIB_b2(_payload) ((int16_t)(*((uint8_t*)_payload+16)|*((uint8_t*)_payload+16+1)<<8))
#define DL_BARO_BMP85_CALIB_mb(_payload) ((int16_t)(*((uint8_t*)_payload+18)|*((uint8_t*)_payload+18+1)<<8))
#define DL_BARO_BMP85_CALIB_mc(_payload) ((int16_t)(*((uint8_t*)_payload+20)|*((uint8_t*)_payload+20+1)<<8))
#define DL_BARO_BMP85_CALIB_md(_payload) ((int16_t)(*((uint8_t*)_payload+22)|*((uint8_t*)_payload+22+1)<<8))

#define DL_BARO_BMP85_UT(_payload) ((int32_t)(*((uint8_t*)_payload+2)|*((uint8_t*)_payload+2+1)<<8|((uint32_t)*((uint8_t*)_payload+2+2))<<16|((uint32_t)*((uint8_t*)_payload+2+3))<<24))
#define DL_BARO_BMP85_UP(_payload) ((int32_t)(*((uint8_t*)_payload+6)|*((uint8_t*)_payload+6+1)<<8|((uint32_t)*((uint8_t*)_payload+6+2))<<16|((uint32_t)*((uint8_t*)_payload+6+3))<<24))
#define DL_BARO_BMP85_P(_payload) ((uint32_t)(*((uint8_t*)_payload+10)|*((uint8_t*)_payload+10+1)<<8|((uint32_t)*((uint8_t*)_payload+10+2))<<16|((uint32_t)*((uint8_t*)_payload+10+3))<<24))
#define DL_BARO_BMP85_T(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+14)|*((uint8_t*)_payload+14+1)<<8|((uint32_t)*((uint8_t*)_payload+14+2))<<16|((uint32_t)*((uint8_t*)_payload+14+3))<<24); _f.f; }))
#define DL_BARO_BMP85_MSL(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+18)|*((uint8_t*)_payload+18+1)<<8|((uint32_t)*((uint8_t*)_payload+18+2))<<16|((uint32_t)*((uint8_t*)_payload+18+3))<<24); _f.f; }))

#define DL_SPEED_LOOP_ve_set_point(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+2)|*((uint8_t*)_payload+2+1)<<8|((uint32_t)*((uint8_t*)_payload+2+2))<<16|((uint32_t)*((uint8_t*)_payload+2+3))<<24); _f.f; }))
#define DL_SPEED_LOOP_ve(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+6)|*((uint8_t*)_payload+6+1)<<8|((uint32_t)*((uint8_t*)_payload+6+2))<<16|((uint32_t)*((uint8_t*)_payload+6+3))<<24); _f.f; }))
#define DL_SPEED_LOOP_vn_set_point(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+10)|*((uint8_t*)_payload+10+1)<<8|((uint32_t)*((uint8_t*)_payload+10+2))<<16|((uint32_t)*((uint8_t*)_payload+10+3))<<24); _f.f; }))
#define DL_SPEED_LOOP_vn(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+14)|*((uint8_t*)_payload+14+1)<<8|((uint32_t)*((uint8_t*)_payload+14+2))<<16|((uint32_t)*((uint8_t*)_payload+14+3))<<24); _f.f; }))
#define DL_SPEED_LOOP_north_sp(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+18)|*((uint8_t*)_payload+18+1)<<8|((uint32_t)*((uint8_t*)_payload+18+2))<<16|((uint32_t)*((uint8_t*)_payload+18+3))<<24); _f.f; }))
#define DL_SPEED_LOOP_east_sp(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+22)|*((uint8_t*)_payload+22+1)<<8|((uint32_t)*((uint8_t*)_payload+22+2))<<16|((uint32_t)*((uint8_t*)_payload+22+3))<<24); _f.f; }))

#define DL_ALT_KALMAN_p00(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+2)|*((uint8_t*)_payload+2+1)<<8|((uint32_t)*((uint8_t*)_payload+2+2))<<16|((uint32_t)*((uint8_t*)_payload+2+3))<<24); _f.f; }))
#define DL_ALT_KALMAN_p01(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+6)|*((uint8_t*)_payload+6+1)<<8|((uint32_t)*((uint8_t*)_payload+6+2))<<16|((uint32_t)*((uint8_t*)_payload+6+3))<<24); _f.f; }))
#define DL_ALT_KALMAN_p10(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+10)|*((uint8_t*)_payload+10+1)<<8|((uint32_t)*((uint8_t*)_payload+10+2))<<16|((uint32_t)*((uint8_t*)_payload+10+3))<<24); _f.f; }))
#define DL_ALT_KALMAN_p11(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+14)|*((uint8_t*)_payload+14+1)<<8|((uint32_t)*((uint8_t*)_payload+14+2))<<16|((uint32_t)*((uint8_t*)_payload+14+3))<<24); _f.f; }))

#define DL_ESTIMATOR_z(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+2)|*((uint8_t*)_payload+2+1)<<8|((uint32_t)*((uint8_t*)_payload+2+2))<<16|((uint32_t)*((uint8_t*)_payload+2+3))<<24); _f.f; }))
#define DL_ESTIMATOR_z_dot(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+6)|*((uint8_t*)_payload+6+1)<<8|((uint32_t)*((uint8_t*)_payload+6+2))<<16|((uint32_t)*((uint8_t*)_payload+6+3))<<24); _f.f; }))

#define DL_TUNE_ROLL_p(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+2)|*((uint8_t*)_payload+2+1)<<8|((uint32_t)*((uint8_t*)_payload+2+2))<<16|((uint32_t)*((uint8_t*)_payload+2+3))<<24); _f.f; }))
#define DL_TUNE_ROLL_phi(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+6)|*((uint8_t*)_payload+6+1)<<8|((uint32_t)*((uint8_t*)_payload+6+2))<<16|((uint32_t)*((uint8_t*)_payload+6+3))<<24); _f.f; }))
#define DL_TUNE_ROLL_phi_sp(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+10)|*((uint8_t*)_payload+10+1)<<8|((uint32_t)*((uint8_t*)_payload+10+2))<<16|((uint32_t)*((uint8_t*)_payload+10+3))<<24); _f.f; }))

#define DL_BARO_MS5534A_pressure(_payload) ((uint32_t)(*((uint8_t*)_payload+2)|*((uint8_t*)_payload+2+1)<<8|((uint32_t)*((uint8_t*)_payload+2+2))<<16|((uint32_t)*((uint8_t*)_payload+2+3))<<24))
#define DL_BARO_MS5534A_temp(_payload) ((uint16_t)(*((uint8_t*)_payload+6)|*((uint8_t*)_payload+6+1)<<8))
#define DL_BARO_MS5534A_alt(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+8)|*((uint8_t*)_payload+8+1)<<8|((uint32_t)*((uint8_t*)_payload+8+2))<<16|((uint32_t)*((uint8_t*)_payload+8+3))<<24); _f.f; }))

#define DL_PRESSURE_airspeed_adc(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+2)|*((uint8_t*)_payload+2+1)<<8|((uint32_t)*((uint8_t*)_payload+2+2))<<16|((uint32_t)*((uint8_t*)_payload+2+3))<<24); _f.f; }))
#define DL_PRESSURE_airspeed(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+6)|*((uint8_t*)_payload+6+1)<<8|((uint32_t)*((uint8_t*)_payload+6+2))<<16|((uint32_t)*((uint8_t*)_payload+6+3))<<24); _f.f; }))
#define DL_PRESSURE_altitude_adc(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+10)|*((uint8_t*)_payload+10+1)<<8|((uint32_t)*((uint8_t*)_payload+10+2))<<16|((uint32_t)*((uint8_t*)_payload+10+3))<<24); _f.f; }))
#define DL_PRESSURE_altitude(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+14)|*((uint8_t*)_payload+14+1)<<8|((uint32_t)*((uint8_t*)_payload+14+2))<<16|((uint32_t)*((uint8_t*)_payload+14+3))<<24); _f.f; }))

#define DL_BARO_WORDS_w1(_payload) ((uint16_t)(*((uint8_t*)_payload+2)|*((uint8_t*)_payload+2+1)<<8))
#define DL_BARO_WORDS_w2(_payload) ((uint16_t)(*((uint8_t*)_payload+4)|*((uint8_t*)_payload+4+1)<<8))
#define DL_BARO_WORDS_w3(_payload) ((uint16_t)(*((uint8_t*)_payload+6)|*((uint8_t*)_payload+6+1)<<8))
#define DL_BARO_WORDS_w4(_payload) ((uint16_t)(*((uint8_t*)_payload+8)|*((uint8_t*)_payload+8+1)<<8))

#define DL_WP_MOVED_LLA_wp_id(_payload) ((uint8_t)(*((uint8_t*)_payload+2)))
#define DL_WP_MOVED_LLA_lat(_payload) ((int32_t)(*((uint8_t*)_payload+3)|*((uint8_t*)_payload+3+1)<<8|((uint32_t)*((uint8_t*)_payload+3+2))<<16|((uint32_t)*((uint8_t*)_payload+3+3))<<24))
#define DL_WP_MOVED_LLA_lon(_payload) ((int32_t)(*((uint8_t*)_payload+7)|*((uint8_t*)_payload+7+1)<<8|((uint32_t)*((uint8_t*)_payload+7+2))<<16|((uint32_t)*((uint8_t*)_payload+7+3))<<24))
#define DL_WP_MOVED_LLA_alt(_payload) ((int32_t)(*((uint8_t*)_payload+11)|*((uint8_t*)_payload+11+1)<<8|((uint32_t)*((uint8_t*)_payload+11+2))<<16|((uint32_t)*((uint8_t*)_payload+11+3))<<24))

#define DL_CHRONO_tag(_payload) ((uint8_t)(*((uint8_t*)_payload+2)))
#define DL_CHRONO_time(_payload) ((uint32_t)(*((uint8_t*)_payload+3)|*((uint8_t*)_payload+3+1)<<8|((uint32_t)*((uint8_t*)_payload+3+2))<<16|((uint32_t)*((uint8_t*)_payload+3+3))<<24))

#define DL_WP_MOVED_ENU_wp_id(_payload) ((uint8_t)(*((uint8_t*)_payload+2)))
#define DL_WP_MOVED_ENU_east(_payload) ((int32_t)(*((uint8_t*)_payload+3)|*((uint8_t*)_payload+3+1)<<8|((uint32_t)*((uint8_t*)_payload+3+2))<<16|((uint32_t)*((uint8_t*)_payload+3+3))<<24))
#define DL_WP_MOVED_ENU_north(_payload) ((int32_t)(*((uint8_t*)_payload+7)|*((uint8_t*)_payload+7+1)<<8|((uint32_t)*((uint8_t*)_payload+7+2))<<16|((uint32_t)*((uint8_t*)_payload+7+3))<<24))
#define DL_WP_MOVED_ENU_up(_payload) ((int32_t)(*((uint8_t*)_payload+11)|*((uint8_t*)_payload+11+1)<<8|((uint32_t)*((uint8_t*)_payload+11+2))<<16|((uint32_t)*((uint8_t*)_payload+11+3))<<24))

#define DL_WINDTURBINE_STATUS__ac_id(_payload) ((uint8_t)(*((uint8_t*)_payload+2)))
#define DL_WINDTURBINE_STATUS__tb_id(_payload) ((uint8_t)(*((uint8_t*)_payload+3)))
#define DL_WINDTURBINE_STATUS__sync_itow(_payload) ((uint32_t)(*((uint8_t*)_payload+4)|*((uint8_t*)_payload+4+1)<<8|((uint32_t)*((uint8_t*)_payload+4+2))<<16|((uint32_t)*((uint8_t*)_payload+4+3))<<24))
#define DL_WINDTURBINE_STATUS__cycle_time(_payload) ((uint32_t)(*((uint8_t*)_payload+8)|*((uint8_t*)_payload+8+1)<<8|((uint32_t)*((uint8_t*)_payload+8+2))<<16|((uint32_t)*((uint8_t*)_payload+8+3))<<24))

#define DL_RC_3CH__throttle_mode(_payload) ((uint8_t)(*((uint8_t*)_payload+2)))
#define DL_RC_3CH__roll(_payload) ((int8_t)(*((uint8_t*)_payload+3)))
#define DL_RC_3CH__pitch(_payload) ((int8_t)(*((uint8_t*)_payload+4)))

#define DL_MPPT_values_length(_payload) ((uint8_t)(*((uint8_t*)_payload+2)))
#define DL_MPPT_values(_payload) ((int16_t*)(_payload+3))

#define DL_DEBUG_IR_I2C_ir1(_payload) ((int16_t)(*((uint8_t*)_payload+2)|*((uint8_t*)_payload+2+1)<<8))
#define DL_DEBUG_IR_I2C_ir2(_payload) ((int16_t)(*((uint8_t*)_payload+4)|*((uint8_t*)_payload+4+1)<<8))
#define DL_DEBUG_IR_I2C_top(_payload) ((int16_t)(*((uint8_t*)_payload+6)|*((uint8_t*)_payload+6+1)<<8))

#define DL_AIRSPEED_airspeed(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+2)|*((uint8_t*)_payload+2+1)<<8|((uint32_t)*((uint8_t*)_payload+2+2))<<16|((uint32_t)*((uint8_t*)_payload+2+3))<<24); _f.f; }))
#define DL_AIRSPEED_airspeed_sp(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+6)|*((uint8_t*)_payload+6+1)<<8|((uint32_t)*((uint8_t*)_payload+6+2))<<16|((uint32_t)*((uint8_t*)_payload+6+3))<<24); _f.f; }))
#define DL_AIRSPEED_airspeed_cnt(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+10)|*((uint8_t*)_payload+10+1)<<8|((uint32_t)*((uint8_t*)_payload+10+2))<<16|((uint32_t)*((uint8_t*)_payload+10+3))<<24); _f.f; }))
#define DL_AIRSPEED_groundspeed_sp(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+14)|*((uint8_t*)_payload+14+1)<<8|((uint32_t)*((uint8_t*)_payload+14+2))<<16|((uint32_t)*((uint8_t*)_payload+14+3))<<24); _f.f; }))

#define DL_XSENS_counter(_payload) ((int16_t)(*((uint8_t*)_payload+2)|*((uint8_t*)_payload+2+1)<<8))
#define DL_XSENS_p(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+4)|*((uint8_t*)_payload+4+1)<<8|((uint32_t)*((uint8_t*)_payload+4+2))<<16|((uint32_t)*((uint8_t*)_payload+4+3))<<24); _f.f; }))
#define DL_XSENS_q(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+8)|*((uint8_t*)_payload+8+1)<<8|((uint32_t)*((uint8_t*)_payload+8+2))<<16|((uint32_t)*((uint8_t*)_payload+8+3))<<24); _f.f; }))
#define DL_XSENS_r(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+12)|*((uint8_t*)_payload+12+1)<<8|((uint32_t)*((uint8_t*)_payload+12+2))<<16|((uint32_t)*((uint8_t*)_payload+12+3))<<24); _f.f; }))
#define DL_XSENS_phi(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+16)|*((uint8_t*)_payload+16+1)<<8|((uint32_t)*((uint8_t*)_payload+16+2))<<16|((uint32_t)*((uint8_t*)_payload+16+3))<<24); _f.f; }))
#define DL_XSENS_theta(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+20)|*((uint8_t*)_payload+20+1)<<8|((uint32_t)*((uint8_t*)_payload+20+2))<<16|((uint32_t)*((uint8_t*)_payload+20+3))<<24); _f.f; }))
#define DL_XSENS_psi(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+24)|*((uint8_t*)_payload+24+1)<<8|((uint32_t)*((uint8_t*)_payload+24+2))<<16|((uint32_t)*((uint8_t*)_payload+24+3))<<24); _f.f; }))
#define DL_XSENS_ax(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+28)|*((uint8_t*)_payload+28+1)<<8|((uint32_t)*((uint8_t*)_payload+28+2))<<16|((uint32_t)*((uint8_t*)_payload+28+3))<<24); _f.f; }))
#define DL_XSENS_ay(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+32)|*((uint8_t*)_payload+32+1)<<8|((uint32_t)*((uint8_t*)_payload+32+2))<<16|((uint32_t)*((uint8_t*)_payload+32+3))<<24); _f.f; }))
#define DL_XSENS_az(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+36)|*((uint8_t*)_payload+36+1)<<8|((uint32_t)*((uint8_t*)_payload+36+2))<<16|((uint32_t)*((uint8_t*)_payload+36+3))<<24); _f.f; }))
#define DL_XSENS_vx(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+40)|*((uint8_t*)_payload+40+1)<<8|((uint32_t)*((uint8_t*)_payload+40+2))<<16|((uint32_t)*((uint8_t*)_payload+40+3))<<24); _f.f; }))
#define DL_XSENS_vy(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+44)|*((uint8_t*)_payload+44+1)<<8|((uint32_t)*((uint8_t*)_payload+44+2))<<16|((uint32_t)*((uint8_t*)_payload+44+3))<<24); _f.f; }))
#define DL_XSENS_vz(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+48)|*((uint8_t*)_payload+48+1)<<8|((uint32_t)*((uint8_t*)_payload+48+2))<<16|((uint32_t)*((uint8_t*)_payload+48+3))<<24); _f.f; }))
#define DL_XSENS_lat(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+52)|*((uint8_t*)_payload+52+1)<<8|((uint32_t)*((uint8_t*)_payload+52+2))<<16|((uint32_t)*((uint8_t*)_payload+52+3))<<24); _f.f; }))
#define DL_XSENS_lon(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+56)|*((uint8_t*)_payload+56+1)<<8|((uint32_t)*((uint8_t*)_payload+56+2))<<16|((uint32_t)*((uint8_t*)_payload+56+3))<<24); _f.f; }))
#define DL_XSENS_alt(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+60)|*((uint8_t*)_payload+60+1)<<8|((uint32_t)*((uint8_t*)_payload+60+2))<<16|((uint32_t)*((uint8_t*)_payload+60+3))<<24); _f.f; }))
#define DL_XSENS_status(_payload) ((uint8_t)(*((uint8_t*)_payload+64)))
#define DL_XSENS_hour(_payload) ((uint8_t)(*((uint8_t*)_payload+65)))
#define DL_XSENS_min(_payload) ((uint8_t)(*((uint8_t*)_payload+66)))
#define DL_XSENS_sec(_payload) ((uint8_t)(*((uint8_t*)_payload+67)))
#define DL_XSENS_nanosec(_payload) ((uint32_t)(*((uint8_t*)_payload+68)|*((uint8_t*)_payload+68+1)<<8|((uint32_t)*((uint8_t*)_payload+68+2))<<16|((uint32_t)*((uint8_t*)_payload+68+3))<<24))
#define DL_XSENS_year(_payload) ((uint16_t)(*((uint8_t*)_payload+72)|*((uint8_t*)_payload+72+1)<<8))
#define DL_XSENS_month(_payload) ((uint8_t)(*((uint8_t*)_payload+74)))
#define DL_XSENS_day(_payload) ((uint8_t)(*((uint8_t*)_payload+75)))

#define DL_BARO_ETS_adc(_payload) ((uint16_t)(*((uint8_t*)_payload+2)|*((uint8_t*)_payload+2+1)<<8))
#define DL_BARO_ETS_offset(_payload) ((uint16_t)(*((uint8_t*)_payload+4)|*((uint8_t*)_payload+4+1)<<8))
#define DL_BARO_ETS_scaled(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+6)|*((uint8_t*)_payload+6+1)<<8|((uint32_t)*((uint8_t*)_payload+6+2))<<16|((uint32_t)*((uint8_t*)_payload+6+3))<<24); _f.f; }))

#define DL_AIRSPEED_ETS_adc(_payload) ((uint16_t)(*((uint8_t*)_payload+2)|*((uint8_t*)_payload+2+1)<<8))
#define DL_AIRSPEED_ETS_offset(_payload) ((uint16_t)(*((uint8_t*)_payload+4)|*((uint8_t*)_payload+4+1)<<8))
#define DL_AIRSPEED_ETS_scaled(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+6)|*((uint8_t*)_payload+6+1)<<8|((uint32_t)*((uint8_t*)_payload+6+2))<<16|((uint32_t)*((uint8_t*)_payload+6+3))<<24); _f.f; }))

#define DL_PBN_airspeed_adc(_payload) ((uint16_t)(*((uint8_t*)_payload+2)|*((uint8_t*)_payload+2+1)<<8))
#define DL_PBN_altitude_adc(_payload) ((uint16_t)(*((uint8_t*)_payload+4)|*((uint8_t*)_payload+4+1)<<8))
#define DL_PBN_airspeed(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+6)|*((uint8_t*)_payload+6+1)<<8|((uint32_t)*((uint8_t*)_payload+6+2))<<16|((uint32_t)*((uint8_t*)_payload+6+3))<<24); _f.f; }))
#define DL_PBN_altitude(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+10)|*((uint8_t*)_payload+10+1)<<8|((uint32_t)*((uint8_t*)_payload+10+2))<<16|((uint32_t)*((uint8_t*)_payload+10+3))<<24); _f.f; }))
#define DL_PBN_airspeed_offset(_payload) ((uint16_t)(*((uint8_t*)_payload+14)|*((uint8_t*)_payload+14+1)<<8))
#define DL_PBN_altitude_offset(_payload) ((uint16_t)(*((uint8_t*)_payload+16)|*((uint8_t*)_payload+16+1)<<8))

#define DL_GPS_LLA_lat(_payload) ((int32_t)(*((uint8_t*)_payload+2)|*((uint8_t*)_payload+2+1)<<8|((uint32_t)*((uint8_t*)_payload+2+2))<<16|((uint32_t)*((uint8_t*)_payload+2+3))<<24))
#define DL_GPS_LLA_lon(_payload) ((int32_t)(*((uint8_t*)_payload+6)|*((uint8_t*)_payload+6+1)<<8|((uint32_t)*((uint8_t*)_payload+6+2))<<16|((uint32_t)*((uint8_t*)_payload+6+3))<<24))
#define DL_GPS_LLA_alt(_payload) ((int32_t)(*((uint8_t*)_payload+10)|*((uint8_t*)_payload+10+1)<<8|((uint32_t)*((uint8_t*)_payload+10+2))<<16|((uint32_t)*((uint8_t*)_payload+10+3))<<24))
#define DL_GPS_LLA_course(_payload) ((int16_t)(*((uint8_t*)_payload+14)|*((uint8_t*)_payload+14+1)<<8))
#define DL_GPS_LLA_speed(_payload) ((uint16_t)(*((uint8_t*)_payload+16)|*((uint8_t*)_payload+16+1)<<8))
#define DL_GPS_LLA_climb(_payload) ((int16_t)(*((uint8_t*)_payload+18)|*((uint8_t*)_payload+18+1)<<8))
#define DL_GPS_LLA_week(_payload) ((uint16_t)(*((uint8_t*)_payload+20)|*((uint8_t*)_payload+20+1)<<8))
#define DL_GPS_LLA_itow(_payload) ((uint32_t)(*((uint8_t*)_payload+22)|*((uint8_t*)_payload+22+1)<<8|((uint32_t)*((uint8_t*)_payload+22+2))<<16|((uint32_t)*((uint8_t*)_payload+22+3))<<24))
#define DL_GPS_LLA_mode(_payload) ((uint8_t)(*((uint8_t*)_payload+26)))
#define DL_GPS_LLA_gps_nb_err(_payload) ((uint8_t)(*((uint8_t*)_payload+27)))

#define DL_H_CTL_A_roll_sum_err(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+2)|*((uint8_t*)_payload+2+1)<<8|((uint32_t)*((uint8_t*)_payload+2+2))<<16|((uint32_t)*((uint8_t*)_payload+2+3))<<24); _f.f; }))
#define DL_H_CTL_A_ref_roll_angle(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+6)|*((uint8_t*)_payload+6+1)<<8|((uint32_t)*((uint8_t*)_payload+6+2))<<16|((uint32_t)*((uint8_t*)_payload+6+3))<<24); _f.f; }))
#define DL_H_CTL_A_pitch_sum_err(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+10)|*((uint8_t*)_payload+10+1)<<8|((uint32_t)*((uint8_t*)_payload+10+2))<<16|((uint32_t)*((uint8_t*)_payload+10+3))<<24); _f.f; }))
#define DL_H_CTL_A_ref_pitch_angle(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+14)|*((uint8_t*)_payload+14+1)<<8|((uint32_t)*((uint8_t*)_payload+14+2))<<16|((uint32_t)*((uint8_t*)_payload+14+3))<<24); _f.f; }))

#define DL_TURB_PRESSURE_RAW_ch_0(_payload) ((int32_t)(*((uint8_t*)_payload+2)|*((uint8_t*)_payload+2+1)<<8|((uint32_t)*((uint8_t*)_payload+2+2))<<16|((uint32_t)*((uint8_t*)_payload+2+3))<<24))
#define DL_TURB_PRESSURE_RAW_ch_1(_payload) ((int32_t)(*((uint8_t*)_payload+6)|*((uint8_t*)_payload+6+1)<<8|((uint32_t)*((uint8_t*)_payload+6+2))<<16|((uint32_t)*((uint8_t*)_payload+6+3))<<24))
#define DL_TURB_PRESSURE_RAW_ch_2(_payload) ((int32_t)(*((uint8_t*)_payload+10)|*((uint8_t*)_payload+10+1)<<8|((uint32_t)*((uint8_t*)_payload+10+2))<<16|((uint32_t)*((uint8_t*)_payload+10+3))<<24))
#define DL_TURB_PRESSURE_RAW_ch_3(_payload) ((int32_t)(*((uint8_t*)_payload+14)|*((uint8_t*)_payload+14+1)<<8|((uint32_t)*((uint8_t*)_payload+14+2))<<16|((uint32_t)*((uint8_t*)_payload+14+3))<<24))
#define DL_TURB_PRESSURE_RAW_ch_4(_payload) ((int32_t)(*((uint8_t*)_payload+18)|*((uint8_t*)_payload+18+1)<<8|((uint32_t)*((uint8_t*)_payload+18+2))<<16|((uint32_t)*((uint8_t*)_payload+18+3))<<24))
#define DL_TURB_PRESSURE_RAW_ch_5(_payload) ((int32_t)(*((uint8_t*)_payload+22)|*((uint8_t*)_payload+22+1)<<8|((uint32_t)*((uint8_t*)_payload+22+2))<<16|((uint32_t)*((uint8_t*)_payload+22+3))<<24))
#define DL_TURB_PRESSURE_RAW_ch_6(_payload) ((int32_t)(*((uint8_t*)_payload+26)|*((uint8_t*)_payload+26+1)<<8|((uint32_t)*((uint8_t*)_payload+26+2))<<16|((uint32_t)*((uint8_t*)_payload+26+3))<<24))
#define DL_TURB_PRESSURE_RAW_ch_7(_payload) ((int32_t)(*((uint8_t*)_payload+30)|*((uint8_t*)_payload+30+1)<<8|((uint32_t)*((uint8_t*)_payload+30+2))<<16|((uint32_t)*((uint8_t*)_payload+30+3))<<24))
#define DL_TURB_PRESSURE_RAW_ch_8(_payload) ((int32_t)(*((uint8_t*)_payload+34)|*((uint8_t*)_payload+34+1)<<8|((uint32_t)*((uint8_t*)_payload+34+2))<<16|((uint32_t)*((uint8_t*)_payload+34+3))<<24))
#define DL_TURB_PRESSURE_RAW_ch_9(_payload) ((int32_t)(*((uint8_t*)_payload+38)|*((uint8_t*)_payload+38+1)<<8|((uint32_t)*((uint8_t*)_payload+38+2))<<16|((uint32_t)*((uint8_t*)_payload+38+3))<<24))
#define DL_TURB_PRESSURE_RAW_ch_10(_payload) ((int32_t)(*((uint8_t*)_payload+42)|*((uint8_t*)_payload+42+1)<<8|((uint32_t)*((uint8_t*)_payload+42+2))<<16|((uint32_t)*((uint8_t*)_payload+42+3))<<24))
#define DL_TURB_PRESSURE_RAW_ch_11(_payload) ((int32_t)(*((uint8_t*)_payload+46)|*((uint8_t*)_payload+46+1)<<8|((uint32_t)*((uint8_t*)_payload+46+2))<<16|((uint32_t)*((uint8_t*)_payload+46+3))<<24))
#define DL_TURB_PRESSURE_RAW_ch_12(_payload) ((int32_t)(*((uint8_t*)_payload+50)|*((uint8_t*)_payload+50+1)<<8|((uint32_t)*((uint8_t*)_payload+50+2))<<16|((uint32_t)*((uint8_t*)_payload+50+3))<<24))
#define DL_TURB_PRESSURE_RAW_ch_13(_payload) ((int32_t)(*((uint8_t*)_payload+54)|*((uint8_t*)_payload+54+1)<<8|((uint32_t)*((uint8_t*)_payload+54+2))<<16|((uint32_t)*((uint8_t*)_payload+54+3))<<24))
#define DL_TURB_PRESSURE_RAW_ch_14(_payload) ((int32_t)(*((uint8_t*)_payload+58)|*((uint8_t*)_payload+58+1)<<8|((uint32_t)*((uint8_t*)_payload+58+2))<<16|((uint32_t)*((uint8_t*)_payload+58+3))<<24))
#define DL_TURB_PRESSURE_RAW_ch_15(_payload) ((int32_t)(*((uint8_t*)_payload+62)|*((uint8_t*)_payload+62+1)<<8|((uint32_t)*((uint8_t*)_payload+62+2))<<16|((uint32_t)*((uint8_t*)_payload+62+3))<<24))

#define DL_TURB_PRESSURE_VOLTAGE_ch_1_p(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+2)|*((uint8_t*)_payload+2+1)<<8|((uint32_t)*((uint8_t*)_payload+2+2))<<16|((uint32_t)*((uint8_t*)_payload+2+3))<<24); _f.f; }))
#define DL_TURB_PRESSURE_VOLTAGE_ch_1_t(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+6)|*((uint8_t*)_payload+6+1)<<8|((uint32_t)*((uint8_t*)_payload+6+2))<<16|((uint32_t)*((uint8_t*)_payload+6+3))<<24); _f.f; }))
#define DL_TURB_PRESSURE_VOLTAGE_ch_2_p(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+10)|*((uint8_t*)_payload+10+1)<<8|((uint32_t)*((uint8_t*)_payload+10+2))<<16|((uint32_t)*((uint8_t*)_payload+10+3))<<24); _f.f; }))
#define DL_TURB_PRESSURE_VOLTAGE_ch_2_t(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+14)|*((uint8_t*)_payload+14+1)<<8|((uint32_t)*((uint8_t*)_payload+14+2))<<16|((uint32_t)*((uint8_t*)_payload+14+3))<<24); _f.f; }))
#define DL_TURB_PRESSURE_VOLTAGE_ch_3_p(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+18)|*((uint8_t*)_payload+18+1)<<8|((uint32_t)*((uint8_t*)_payload+18+2))<<16|((uint32_t)*((uint8_t*)_payload+18+3))<<24); _f.f; }))
#define DL_TURB_PRESSURE_VOLTAGE_ch_3_t(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+22)|*((uint8_t*)_payload+22+1)<<8|((uint32_t)*((uint8_t*)_payload+22+2))<<16|((uint32_t)*((uint8_t*)_payload+22+3))<<24); _f.f; }))
#define DL_TURB_PRESSURE_VOLTAGE_ch_4_p(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+26)|*((uint8_t*)_payload+26+1)<<8|((uint32_t)*((uint8_t*)_payload+26+2))<<16|((uint32_t)*((uint8_t*)_payload+26+3))<<24); _f.f; }))
#define DL_TURB_PRESSURE_VOLTAGE_ch_4_t(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+30)|*((uint8_t*)_payload+30+1)<<8|((uint32_t)*((uint8_t*)_payload+30+2))<<16|((uint32_t)*((uint8_t*)_payload+30+3))<<24); _f.f; }))
#define DL_TURB_PRESSURE_VOLTAGE_ch_5_p(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+34)|*((uint8_t*)_payload+34+1)<<8|((uint32_t)*((uint8_t*)_payload+34+2))<<16|((uint32_t)*((uint8_t*)_payload+34+3))<<24); _f.f; }))
#define DL_TURB_PRESSURE_VOLTAGE_ch_5_t(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+38)|*((uint8_t*)_payload+38+1)<<8|((uint32_t)*((uint8_t*)_payload+38+2))<<16|((uint32_t)*((uint8_t*)_payload+38+3))<<24); _f.f; }))
#define DL_TURB_PRESSURE_VOLTAGE_ch_6_p(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+42)|*((uint8_t*)_payload+42+1)<<8|((uint32_t)*((uint8_t*)_payload+42+2))<<16|((uint32_t)*((uint8_t*)_payload+42+3))<<24); _f.f; }))
#define DL_TURB_PRESSURE_VOLTAGE_ch_6_t(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+46)|*((uint8_t*)_payload+46+1)<<8|((uint32_t)*((uint8_t*)_payload+46+2))<<16|((uint32_t)*((uint8_t*)_payload+46+3))<<24); _f.f; }))
#define DL_TURB_PRESSURE_VOLTAGE_ch_7_p(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+50)|*((uint8_t*)_payload+50+1)<<8|((uint32_t)*((uint8_t*)_payload+50+2))<<16|((uint32_t)*((uint8_t*)_payload+50+3))<<24); _f.f; }))
#define DL_TURB_PRESSURE_VOLTAGE_ch_7_t(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+54)|*((uint8_t*)_payload+54+1)<<8|((uint32_t)*((uint8_t*)_payload+54+2))<<16|((uint32_t)*((uint8_t*)_payload+54+3))<<24); _f.f; }))
#define DL_TURB_PRESSURE_VOLTAGE_gnd1(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+58)|*((uint8_t*)_payload+58+1)<<8|((uint32_t)*((uint8_t*)_payload+58+2))<<16|((uint32_t)*((uint8_t*)_payload+58+3))<<24); _f.f; }))
#define DL_TURB_PRESSURE_VOLTAGE_gnd2(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+62)|*((uint8_t*)_payload+62+1)<<8|((uint32_t)*((uint8_t*)_payload+62+2))<<16|((uint32_t)*((uint8_t*)_payload+62+3))<<24); _f.f; }))

#define DL_VF_UPDATE_baro(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+2)|*((uint8_t*)_payload+2+1)<<8|((uint32_t)*((uint8_t*)_payload+2+2))<<16|((uint32_t)*((uint8_t*)_payload+2+3))<<24); _f.f; }))
#define DL_VF_UPDATE_range_meter(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+6)|*((uint8_t*)_payload+6+1)<<8|((uint32_t)*((uint8_t*)_payload+6+2))<<16|((uint32_t)*((uint8_t*)_payload+6+3))<<24); _f.f; }))

#define DL_VF_PREDICT_accel(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+2)|*((uint8_t*)_payload+2+1)<<8|((uint32_t)*((uint8_t*)_payload+2+2))<<16|((uint32_t)*((uint8_t*)_payload+2+3))<<24); _f.f; }))

#define DL_CROSS_TRACK_ERROR_cross_track_error(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+2)|*((uint8_t*)_payload+2+1)<<8|((uint32_t)*((uint8_t*)_payload+2+2))<<16|((uint32_t)*((uint8_t*)_payload+2+3))<<24); _f.f; }))
#define DL_CROSS_TRACK_ERROR_cte_int(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+6)|*((uint8_t*)_payload+6+1)<<8|((uint32_t)*((uint8_t*)_payload+6+2))<<16|((uint32_t)*((uint8_t*)_payload+6+3))<<24); _f.f; }))

#define DL_ESTIMATOR_COMP_FILTER_gyro_hp_last_out(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+2)|*((uint8_t*)_payload+2+1)<<8|((uint32_t)*((uint8_t*)_payload+2+2))<<16|((uint32_t)*((uint8_t*)_payload+2+3))<<24); _f.f; }))
#define DL_ESTIMATOR_COMP_FILTER_gyro_int(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+6)|*((uint8_t*)_payload+6+1)<<8|((uint32_t)*((uint8_t*)_payload+6+2))<<16|((uint32_t)*((uint8_t*)_payload+6+3))<<24); _f.f; }))
#define DL_ESTIMATOR_COMP_FILTER_gps_lp_last_out(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+10)|*((uint8_t*)_payload+10+1)<<8|((uint32_t)*((uint8_t*)_payload+10+2))<<16|((uint32_t)*((uint8_t*)_payload+10+3))<<24); _f.f; }))
#define DL_ESTIMATOR_COMP_FILTER_ir_lp_last_out(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+14)|*((uint8_t*)_payload+14+1)<<8|((uint32_t)*((uint8_t*)_payload+14+2))<<16|((uint32_t)*((uint8_t*)_payload+14+3))<<24); _f.f; }))

#define DL_FORMATION_SLOT_TM_ac_id(_payload) ((uint8_t)(*((uint8_t*)_payload+2)))
#define DL_FORMATION_SLOT_TM_mode(_payload) ((uint8_t)(*((uint8_t*)_payload+3)))
#define DL_FORMATION_SLOT_TM_slot_east(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+4)|*((uint8_t*)_payload+4+1)<<8|((uint32_t)*((uint8_t*)_payload+4+2))<<16|((uint32_t)*((uint8_t*)_payload+4+3))<<24); _f.f; }))
#define DL_FORMATION_SLOT_TM_slot_north(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+8)|*((uint8_t*)_payload+8+1)<<8|((uint32_t)*((uint8_t*)_payload+8+2))<<16|((uint32_t)*((uint8_t*)_payload+8+3))<<24); _f.f; }))
#define DL_FORMATION_SLOT_TM_slot_alt(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+12)|*((uint8_t*)_payload+12+1)<<8|((uint32_t)*((uint8_t*)_payload+12+2))<<16|((uint32_t)*((uint8_t*)_payload+12+3))<<24); _f.f; }))

#define DL_FORMATION_STATUS_TM_ac_id(_payload) ((uint8_t)(*((uint8_t*)_payload+2)))
#define DL_FORMATION_STATUS_TM_leader_id(_payload) ((uint8_t)(*((uint8_t*)_payload+3)))
#define DL_FORMATION_STATUS_TM_status(_payload) ((uint8_t)(*((uint8_t*)_payload+4)))

#define DL_BMP_STATUS_press(_payload) ((int32_t)(*((uint8_t*)_payload+2)|*((uint8_t*)_payload+2+1)<<8|((uint32_t)*((uint8_t*)_payload+2+2))<<16|((uint32_t)*((uint8_t*)_payload+2+3))<<24))
#define DL_BMP_STATUS_temp(_payload) ((int32_t)(*((uint8_t*)_payload+6)|*((uint8_t*)_payload+6+1)<<8|((uint32_t)*((uint8_t*)_payload+6+2))<<16|((uint32_t)*((uint8_t*)_payload+6+3))<<24))

#define DL_MLX_STATUS_itemp_case(_payload) ((uint16_t)(*((uint8_t*)_payload+2)|*((uint8_t*)_payload+2+1)<<8))
#define DL_MLX_STATUS_temp_case(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+4)|*((uint8_t*)_payload+4+1)<<8|((uint32_t)*((uint8_t*)_payload+4+2))<<16|((uint32_t)*((uint8_t*)_payload+4+3))<<24); _f.f; }))
#define DL_MLX_STATUS_itemp_obj(_payload) ((uint16_t)(*((uint8_t*)_payload+8)|*((uint8_t*)_payload+8+1)<<8))
#define DL_MLX_STATUS_temp_obj(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+10)|*((uint8_t*)_payload+10+1)<<8|((uint32_t)*((uint8_t*)_payload+10+2))<<16|((uint32_t)*((uint8_t*)_payload+10+3))<<24); _f.f; }))

#define DL_TMP_STATUS_itemp(_payload) ((uint16_t)(*((uint8_t*)_payload+2)|*((uint8_t*)_payload+2+1)<<8))
#define DL_TMP_STATUS_temp(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+4)|*((uint8_t*)_payload+4+1)<<8|((uint32_t)*((uint8_t*)_payload+4+2))<<16|((uint32_t)*((uint8_t*)_payload+4+3))<<24); _f.f; }))

#define DL_WIND_INFO_RET_east(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+2)|*((uint8_t*)_payload+2+1)<<8|((uint32_t)*((uint8_t*)_payload+2+2))<<16|((uint32_t)*((uint8_t*)_payload+2+3))<<24); _f.f; }))
#define DL_WIND_INFO_RET_north(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+6)|*((uint8_t*)_payload+6+1)<<8|((uint32_t)*((uint8_t*)_payload+6+2))<<16|((uint32_t)*((uint8_t*)_payload+6+3))<<24); _f.f; }))
#define DL_WIND_INFO_RET_airspeed(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+10)|*((uint8_t*)_payload+10+1)<<8|((uint32_t)*((uint8_t*)_payload+10+2))<<16|((uint32_t)*((uint8_t*)_payload+10+3))<<24); _f.f; }))

#define DL_SCP_STATUS_press(_payload) ((uint32_t)(*((uint8_t*)_payload+2)|*((uint8_t*)_payload+2+1)<<8|((uint32_t)*((uint8_t*)_payload+2+2))<<16|((uint32_t)*((uint8_t*)_payload+2+3))<<24))
#define DL_SCP_STATUS_temp(_payload) ((int16_t)(*((uint8_t*)_payload+6)|*((uint8_t*)_payload+6+1)<<8))

#define DL_SHT_STATUS_ihumid(_payload) ((uint16_t)(*((uint8_t*)_payload+2)|*((uint8_t*)_payload+2+1)<<8))
#define DL_SHT_STATUS_itemp(_payload) ((uint16_t)(*((uint8_t*)_payload+4)|*((uint8_t*)_payload+4+1)<<8))
#define DL_SHT_STATUS_humid(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+6)|*((uint8_t*)_payload+6+1)<<8|((uint32_t)*((uint8_t*)_payload+6+2))<<16|((uint32_t)*((uint8_t*)_payload+6+3))<<24); _f.f; }))
#define DL_SHT_STATUS_temp(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+10)|*((uint8_t*)_payload+10+1)<<8|((uint32_t)*((uint8_t*)_payload+10+2))<<16|((uint32_t)*((uint8_t*)_payload+10+3))<<24); _f.f; }))

#define DL_ENOSE_STATUS_val1(_payload) ((uint16_t)(*((uint8_t*)_payload+2)|*((uint8_t*)_payload+2+1)<<8))
#define DL_ENOSE_STATUS_val2(_payload) ((uint16_t)(*((uint8_t*)_payload+4)|*((uint8_t*)_payload+4+1)<<8))
#define DL_ENOSE_STATUS_val3(_payload) ((uint16_t)(*((uint8_t*)_payload+6)|*((uint8_t*)_payload+6+1)<<8))
#define DL_ENOSE_STATUS_PID(_payload) ((uint16_t)(*((uint8_t*)_payload+8)|*((uint8_t*)_payload+8+1)<<8))
#define DL_ENOSE_STATUS_heat_length(_payload) ((uint8_t)(*((uint8_t*)_payload+10)))
#define DL_ENOSE_STATUS_heat(_payload) ((uint8_t*)(_payload+11))

#define DL_DPICCO_STATUS_humid(_payload) ((uint16_t)(*((uint8_t*)_payload+2)|*((uint8_t*)_payload+2+1)<<8))
#define DL_DPICCO_STATUS_temp(_payload) ((uint16_t)(*((uint8_t*)_payload+4)|*((uint8_t*)_payload+4+1)<<8))
#define DL_DPICCO_STATUS_fhumid(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+6)|*((uint8_t*)_payload+6+1)<<8|((uint32_t)*((uint8_t*)_payload+6+2))<<16|((uint32_t)*((uint8_t*)_payload+6+3))<<24); _f.f; }))
#define DL_DPICCO_STATUS_ftemp(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+10)|*((uint8_t*)_payload+10+1)<<8|((uint32_t)*((uint8_t*)_payload+10+2))<<16|((uint32_t)*((uint8_t*)_payload+10+3))<<24); _f.f; }))

#define DL_ANTENNA_DEBUG_mag_xraw(_payload) ((int32_t)(*((uint8_t*)_payload+2)|*((uint8_t*)_payload+2+1)<<8|((uint32_t)*((uint8_t*)_payload+2+2))<<16|((uint32_t)*((uint8_t*)_payload+2+3))<<24))
#define DL_ANTENNA_DEBUG_mag_yraw(_payload) ((int32_t)(*((uint8_t*)_payload+6)|*((uint8_t*)_payload+6+1)<<8|((uint32_t)*((uint8_t*)_payload+6+2))<<16|((uint32_t)*((uint8_t*)_payload+6+3))<<24))
#define DL_ANTENNA_DEBUG_mag_xcal(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+10)|*((uint8_t*)_payload+10+1)<<8|((uint32_t)*((uint8_t*)_payload+10+2))<<16|((uint32_t)*((uint8_t*)_payload+10+3))<<24); _f.f; }))
#define DL_ANTENNA_DEBUG_mag_ycal(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+14)|*((uint8_t*)_payload+14+1)<<8|((uint32_t)*((uint8_t*)_payload+14+2))<<16|((uint32_t)*((uint8_t*)_payload+14+3))<<24); _f.f; }))
#define DL_ANTENNA_DEBUG_mag_heading(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+18)|*((uint8_t*)_payload+18+1)<<8|((uint32_t)*((uint8_t*)_payload+18+2))<<16|((uint32_t)*((uint8_t*)_payload+18+3))<<24); _f.f; }))
#define DL_ANTENNA_DEBUG_mag_magnitude(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+22)|*((uint8_t*)_payload+22+1)<<8|((uint32_t)*((uint8_t*)_payload+22+2))<<16|((uint32_t)*((uint8_t*)_payload+22+3))<<24); _f.f; }))
#define DL_ANTENNA_DEBUG_mag_temp(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+26)|*((uint8_t*)_payload+26+1)<<8|((uint32_t)*((uint8_t*)_payload+26+2))<<16|((uint32_t)*((uint8_t*)_payload+26+3))<<24); _f.f; }))
#define DL_ANTENNA_DEBUG_mag_distor(_payload) ((uint8_t)(*((uint8_t*)_payload+30)))
#define DL_ANTENNA_DEBUG_mag_cal_status(_payload) ((uint8_t)(*((uint8_t*)_payload+31)))

#define DL_ANTENNA_STATUS_azim_sp(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+2)|*((uint8_t*)_payload+2+1)<<8|((uint32_t)*((uint8_t*)_payload+2+2))<<16|((uint32_t)*((uint8_t*)_payload+2+3))<<24); _f.f; }))
#define DL_ANTENNA_STATUS_elev_sp(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+6)|*((uint8_t*)_payload+6+1)<<8|((uint32_t)*((uint8_t*)_payload+6+2))<<16|((uint32_t)*((uint8_t*)_payload+6+3))<<24); _f.f; }))
#define DL_ANTENNA_STATUS_id_sp(_payload) ((uint8_t)(*((uint8_t*)_payload+10)))
#define DL_ANTENNA_STATUS_mode(_payload) ((uint8_t)(*((uint8_t*)_payload+11)))

#define DL_MOTOR_BENCH_STATUS_time_ticks(_payload) ((uint32_t)(*((uint8_t*)_payload+2)|*((uint8_t*)_payload+2+1)<<8|((uint32_t)*((uint8_t*)_payload+2+2))<<16|((uint32_t)*((uint8_t*)_payload+2+3))<<24))
#define DL_MOTOR_BENCH_STATUS_throttle(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+6)|*((uint8_t*)_payload+6+1)<<8|((uint32_t)*((uint8_t*)_payload+6+2))<<16|((uint32_t)*((uint8_t*)_payload+6+3))<<24); _f.f; }))
#define DL_MOTOR_BENCH_STATUS_rpm(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+10)|*((uint8_t*)_payload+10+1)<<8|((uint32_t)*((uint8_t*)_payload+10+2))<<16|((uint32_t)*((uint8_t*)_payload+10+3))<<24); _f.f; }))
#define DL_MOTOR_BENCH_STATUS_current(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+14)|*((uint8_t*)_payload+14+1)<<8|((uint32_t)*((uint8_t*)_payload+14+2))<<16|((uint32_t)*((uint8_t*)_payload+14+3))<<24); _f.f; }))
#define DL_MOTOR_BENCH_STATUS_thrust(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+18)|*((uint8_t*)_payload+18+1)<<8|((uint32_t)*((uint8_t*)_payload+18+2))<<16|((uint32_t)*((uint8_t*)_payload+18+3))<<24); _f.f; }))
#define DL_MOTOR_BENCH_STATUS_torque(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+22)|*((uint8_t*)_payload+22+1)<<8|((uint32_t)*((uint8_t*)_payload+22+2))<<16|((uint32_t)*((uint8_t*)_payload+22+3))<<24); _f.f; }))
#define DL_MOTOR_BENCH_STATUS_time_s(_payload) ((uint16_t)(*((uint8_t*)_payload+26)|*((uint8_t*)_payload+26+1)<<8))
#define DL_MOTOR_BENCH_STATUS_mode(_payload) ((uint8_t)(*((uint8_t*)_payload+28)))

#define DL_MOTOR_BENCH_STATIC_av_rpm(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+2)|*((uint8_t*)_payload+2+1)<<8|((uint32_t)*((uint8_t*)_payload+2+2))<<16|((uint32_t)*((uint8_t*)_payload+2+3))<<24); _f.f; }))
#define DL_MOTOR_BENCH_STATIC_av_thrust(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+6)|*((uint8_t*)_payload+6+1)<<8|((uint32_t)*((uint8_t*)_payload+6+2))<<16|((uint32_t)*((uint8_t*)_payload+6+3))<<24); _f.f; }))
#define DL_MOTOR_BENCH_STATIC_av_current(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+10)|*((uint8_t*)_payload+10+1)<<8|((uint32_t)*((uint8_t*)_payload+10+2))<<16|((uint32_t)*((uint8_t*)_payload+10+3))<<24); _f.f; }))
#define DL_MOTOR_BENCH_STATIC_throttle(_payload) ((uint16_t)(*((uint8_t*)_payload+14)|*((uint8_t*)_payload+14+1)<<8))

#define DL_HIH_STATUS_humid(_payload) ((uint16_t)(*((uint8_t*)_payload+2)|*((uint8_t*)_payload+2+1)<<8))
#define DL_HIH_STATUS_fhumid(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+4)|*((uint8_t*)_payload+4+1)<<8|((uint32_t)*((uint8_t*)_payload+4+2))<<16|((uint32_t)*((uint8_t*)_payload+4+3))<<24); _f.f; }))
#define DL_HIH_STATUS_ftemp(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+8)|*((uint8_t*)_payload+8+1)<<8|((uint32_t)*((uint8_t*)_payload+8+2))<<16|((uint32_t)*((uint8_t*)_payload+8+3))<<24); _f.f; }))

#define DL_TEMT_STATUS_light(_payload) ((uint16_t)(*((uint8_t*)_payload+2)|*((uint8_t*)_payload+2+1)<<8))
#define DL_TEMT_STATUS_f_light(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+4)|*((uint8_t*)_payload+4+1)<<8|((uint32_t)*((uint8_t*)_payload+4+2))<<16|((uint32_t)*((uint8_t*)_payload+4+3))<<24); _f.f; }))

#define DL_GP2Y_STATUS_idensity(_payload) ((uint16_t)(*((uint8_t*)_payload+2)|*((uint8_t*)_payload+2+1)<<8))
#define DL_GP2Y_STATUS_density(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+4)|*((uint8_t*)_payload+4+1)<<8|((uint32_t)*((uint8_t*)_payload+4+2))<<16|((uint32_t)*((uint8_t*)_payload+4+3))<<24); _f.f; }))

#define DL_SHT_SERIAL_serial0(_payload) ((uint32_t)(*((uint8_t*)_payload+2)|*((uint8_t*)_payload+2+1)<<8|((uint32_t)*((uint8_t*)_payload+2+2))<<16|((uint32_t)*((uint8_t*)_payload+2+3))<<24))
#define DL_SHT_SERIAL_serial1(_payload) ((uint32_t)(*((uint8_t*)_payload+6)|*((uint8_t*)_payload+6+1)<<8|((uint32_t)*((uint8_t*)_payload+6+2))<<16|((uint32_t)*((uint8_t*)_payload+6+3))<<24))

#define DL_PPM_ppm_rate(_payload) ((uint8_t)(*((uint8_t*)_payload+2)))
#define DL_PPM_values_length(_payload) ((uint8_t)(*((uint8_t*)_payload+3)))
#define DL_PPM_values(_payload) ((uint16_t*)(_payload+4))

#define DL_RC_values_length(_payload) ((uint8_t)(*((uint8_t*)_payload+2)))
#define DL_RC_values(_payload) ((int16_t*)(_payload+3))

#define DL_COMMANDS_values_length(_payload) ((uint8_t)(*((uint8_t*)_payload+2)))
#define DL_COMMANDS_values(_payload) ((int16_t*)(_payload+3))

#define DL_FBW_STATUS_rc_status(_payload) ((uint8_t)(*((uint8_t*)_payload+2)))
#define DL_FBW_STATUS_frame_rate(_payload) ((uint8_t)(*((uint8_t*)_payload+3)))
#define DL_FBW_STATUS_mode(_payload) ((uint8_t)(*((uint8_t*)_payload+4)))
#define DL_FBW_STATUS_vsupply(_payload) ((uint8_t)(*((uint8_t*)_payload+5)))
#define DL_FBW_STATUS_current(_payload) ((int32_t)(*((uint8_t*)_payload+6)|*((uint8_t*)_payload+6+1)<<8|((uint32_t)*((uint8_t*)_payload+6+2))<<16|((uint32_t)*((uint8_t*)_payload+6+3))<<24))

#define DL_ADC_mcu(_payload) ((uint8_t)(*((uint8_t*)_payload+2)))
#define DL_ADC_values_length(_payload) ((uint8_t)(*((uint8_t*)_payload+3)))
#define DL_ADC_values(_payload) ((uint16_t*)(_payload+4))

#define DL_ACTUATORS_values_length(_payload) ((uint8_t)(*((uint8_t*)_payload+2)))
#define DL_ACTUATORS_values(_payload) ((uint16_t*)(_payload+3))

#define DL_BETH_azimuth(_payload) ((int16_t)(*((uint8_t*)_payload+2)|*((uint8_t*)_payload+2+1)<<8))
#define DL_BETH_elevation(_payload) ((int16_t)(*((uint8_t*)_payload+4)|*((uint8_t*)_payload+4+1)<<8))
#define DL_BETH_tilt(_payload) ((int16_t)(*((uint8_t*)_payload+6)|*((uint8_t*)_payload+6+1)<<8))
#define DL_BETH_counter(_payload) ((uint32_t)(*((uint8_t*)_payload+8)|*((uint8_t*)_payload+8+1)<<8|((uint32_t)*((uint8_t*)_payload+8+2))<<16|((uint32_t)*((uint8_t*)_payload+8+3))<<24))
#define DL_BETH_can_errs(_payload) ((uint16_t)(*((uint8_t*)_payload+12)|*((uint8_t*)_payload+12+1)<<8))
#define DL_BETH_spi_errs(_payload) ((uint16_t)(*((uint8_t*)_payload+14)|*((uint8_t*)_payload+14+1)<<8))
#define DL_BETH_thrust_out(_payload) ((int8_t)(*((uint8_t*)_payload+16)))
#define DL_BETH_pitch_out(_payload) ((int8_t)(*((uint8_t*)_payload+17)))

#define DL_BETH_ESTIMATOR_tilt(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+2)|*((uint8_t*)_payload+2+1)<<8|((uint32_t)*((uint8_t*)_payload+2+2))<<16|((uint32_t)*((uint8_t*)_payload+2+3))<<24); _f.f; }))
#define DL_BETH_ESTIMATOR_tilt_dot(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+6)|*((uint8_t*)_payload+6+1)<<8|((uint32_t)*((uint8_t*)_payload+6+2))<<16|((uint32_t)*((uint8_t*)_payload+6+3))<<24); _f.f; }))
#define DL_BETH_ESTIMATOR_elevation(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+10)|*((uint8_t*)_payload+10+1)<<8|((uint32_t)*((uint8_t*)_payload+10+2))<<16|((uint32_t)*((uint8_t*)_payload+10+3))<<24); _f.f; }))
#define DL_BETH_ESTIMATOR_elevation_dot(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+14)|*((uint8_t*)_payload+14+1)<<8|((uint32_t)*((uint8_t*)_payload+14+2))<<16|((uint32_t)*((uint8_t*)_payload+14+3))<<24); _f.f; }))
#define DL_BETH_ESTIMATOR_azimuth(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+18)|*((uint8_t*)_payload+18+1)<<8|((uint32_t)*((uint8_t*)_payload+18+2))<<16|((uint32_t)*((uint8_t*)_payload+18+3))<<24); _f.f; }))
#define DL_BETH_ESTIMATOR_azimuth_dot(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+22)|*((uint8_t*)_payload+22+1)<<8|((uint32_t)*((uint8_t*)_payload+22+2))<<16|((uint32_t)*((uint8_t*)_payload+22+3))<<24); _f.f; }))

#define DL_BETH_CONTROLLER_pitch(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+2)|*((uint8_t*)_payload+2+1)<<8|((uint32_t)*((uint8_t*)_payload+2+2))<<16|((uint32_t)*((uint8_t*)_payload+2+3))<<24); _f.f; }))
#define DL_BETH_CONTROLLER_thrust(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+6)|*((uint8_t*)_payload+6+1)<<8|((uint32_t)*((uint8_t*)_payload+6+2))<<16|((uint32_t)*((uint8_t*)_payload+6+3))<<24); _f.f; }))
#define DL_BETH_CONTROLLER_pitch_ff(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+10)|*((uint8_t*)_payload+10+1)<<8|((uint32_t)*((uint8_t*)_payload+10+2))<<16|((uint32_t)*((uint8_t*)_payload+10+3))<<24); _f.f; }))
#define DL_BETH_CONTROLLER_pitch_fb(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+14)|*((uint8_t*)_payload+14+1)<<8|((uint32_t)*((uint8_t*)_payload+14+2))<<16|((uint32_t)*((uint8_t*)_payload+14+3))<<24); _f.f; }))
#define DL_BETH_CONTROLLER_thrust_ff(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+18)|*((uint8_t*)_payload+18+1)<<8|((uint32_t)*((uint8_t*)_payload+18+2))<<16|((uint32_t)*((uint8_t*)_payload+18+3))<<24); _f.f; }))
#define DL_BETH_CONTROLLER_thrust_fb(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+22)|*((uint8_t*)_payload+22+1)<<8|((uint32_t)*((uint8_t*)_payload+22+2))<<16|((uint32_t)*((uint8_t*)_payload+22+3))<<24); _f.f; }))
#define DL_BETH_CONTROLLER_tilt_sp(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+26)|*((uint8_t*)_payload+26+1)<<8|((uint32_t)*((uint8_t*)_payload+26+2))<<16|((uint32_t)*((uint8_t*)_payload+26+3))<<24); _f.f; }))
#define DL_BETH_CONTROLLER_tilt_ref(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+30)|*((uint8_t*)_payload+30+1)<<8|((uint32_t)*((uint8_t*)_payload+30+2))<<16|((uint32_t)*((uint8_t*)_payload+30+3))<<24); _f.f; }))
#define DL_BETH_CONTROLLER_tilt_dot_ref(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+34)|*((uint8_t*)_payload+34+1)<<8|((uint32_t)*((uint8_t*)_payload+34+2))<<16|((uint32_t)*((uint8_t*)_payload+34+3))<<24); _f.f; }))
#define DL_BETH_CONTROLLER_elevation_sp (_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+38)|*((uint8_t*)_payload+38+1)<<8|((uint32_t)*((uint8_t*)_payload+38+2))<<16|((uint32_t)*((uint8_t*)_payload+38+3))<<24); _f.f; }))
#define DL_BETH_CONTROLLER_elevation_ref (_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+42)|*((uint8_t*)_payload+42+1)<<8|((uint32_t)*((uint8_t*)_payload+42+2))<<16|((uint32_t)*((uint8_t*)_payload+42+3))<<24); _f.f; }))
#define DL_BETH_CONTROLLER_elevation_dot_ref(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+46)|*((uint8_t*)_payload+46+1)<<8|((uint32_t)*((uint8_t*)_payload+46+2))<<16|((uint32_t)*((uint8_t*)_payload+46+3))<<24); _f.f; }))
#define DL_BETH_CONTROLLER_azimuth_sp(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+50)|*((uint8_t*)_payload+50+1)<<8|((uint32_t)*((uint8_t*)_payload+50+2))<<16|((uint32_t)*((uint8_t*)_payload+50+3))<<24); _f.f; }))

#define DL_BETH_CONTROLLER_TWIST_S(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+2)|*((uint8_t*)_payload+2+1)<<8|((uint32_t)*((uint8_t*)_payload+2+2))<<16|((uint32_t)*((uint8_t*)_payload+2+3))<<24); _f.f; }))
#define DL_BETH_CONTROLLER_TWIST_S_dot(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+6)|*((uint8_t*)_payload+6+1)<<8|((uint32_t)*((uint8_t*)_payload+6+2))<<16|((uint32_t)*((uint8_t*)_payload+6+3))<<24); _f.f; }))
#define DL_BETH_CONTROLLER_TWIST_U_twt(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+10)|*((uint8_t*)_payload+10+1)<<8|((uint32_t)*((uint8_t*)_payload+10+2))<<16|((uint32_t)*((uint8_t*)_payload+10+3))<<24); _f.f; }))
#define DL_BETH_CONTROLLER_TWIST_error(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+14)|*((uint8_t*)_payload+14+1)<<8|((uint32_t)*((uint8_t*)_payload+14+2))<<16|((uint32_t)*((uint8_t*)_payload+14+3))<<24); _f.f; }))

#define DL_DC_SHOT_photo_nr(_payload) ((int16_t)(*((uint8_t*)_payload+2)|*((uint8_t*)_payload+2+1)<<8))
#define DL_DC_SHOT_utm_east(_payload) ((int32_t)(*((uint8_t*)_payload+4)|*((uint8_t*)_payload+4+1)<<8|((uint32_t)*((uint8_t*)_payload+4+2))<<16|((uint32_t)*((uint8_t*)_payload+4+3))<<24))
#define DL_DC_SHOT_utm_north(_payload) ((int32_t)(*((uint8_t*)_payload+8)|*((uint8_t*)_payload+8+1)<<8|((uint32_t)*((uint8_t*)_payload+8+2))<<16|((uint32_t)*((uint8_t*)_payload+8+3))<<24))
#define DL_DC_SHOT_z(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+12)|*((uint8_t*)_payload+12+1)<<8|((uint32_t)*((uint8_t*)_payload+12+2))<<16|((uint32_t)*((uint8_t*)_payload+12+3))<<24); _f.f; }))
#define DL_DC_SHOT_utm_zone(_payload) ((uint8_t)(*((uint8_t*)_payload+16)))
#define DL_DC_SHOT_phi(_payload) ((int16_t)(*((uint8_t*)_payload+17)|*((uint8_t*)_payload+17+1)<<8))
#define DL_DC_SHOT_theta(_payload) ((int16_t)(*((uint8_t*)_payload+19)|*((uint8_t*)_payload+19+1)<<8))
#define DL_DC_SHOT_course(_payload) ((int16_t)(*((uint8_t*)_payload+21)|*((uint8_t*)_payload+21+1)<<8))
#define DL_DC_SHOT_speed(_payload) ((uint16_t)(*((uint8_t*)_payload+23)|*((uint8_t*)_payload+23+1)<<8))
#define DL_DC_SHOT_itow(_payload) ((uint32_t)(*((uint8_t*)_payload+25)|*((uint8_t*)_payload+25+1)<<8|((uint32_t)*((uint8_t*)_payload+25+2))<<16|((uint32_t)*((uint8_t*)_payload+25+3))<<24))

#define DL_TEST_BOARD_RESULTS_uart(_payload) ((uint8_t)(*((uint8_t*)_payload+2)))
#define DL_TEST_BOARD_RESULTS_ppm(_payload) ((uint8_t)(*((uint8_t*)_payload+3)))
#define DL_TEST_BOARD_RESULTS_servo_length(_payload) ((uint8_t)(*((uint8_t*)_payload+4)))
#define DL_TEST_BOARD_RESULTS_servo(_payload) ((uint16_t*)(_payload+5))

#define DL_BETH_CONTROLLER_SFB_one(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+2)|*((uint8_t*)_payload+2+1)<<8|((uint32_t)*((uint8_t*)_payload+2+2))<<16|((uint32_t)*((uint8_t*)_payload+2+3))<<24); _f.f; }))

#define DL_PAYLOAD_values_length(_payload) ((uint8_t)(*((uint8_t*)_payload+2)))
#define DL_PAYLOAD_values(_payload) ((uint8_t*)(_payload+3))

#define DL_TCAS_TA_ac_id(_payload) ((uint8_t)(*((uint8_t*)_payload+2)))

#define DL_TCAS_RA_ac_id(_payload) ((uint8_t)(*((uint8_t*)_payload+2)))
#define DL_TCAS_RA_resolve(_payload) ((uint8_t)(*((uint8_t*)_payload+3)))

#define DL_TCAS_RESOLVED_ac_id(_payload) ((uint8_t)(*((uint8_t*)_payload+2)))

#define DL_TCAS_DEBUG_ac_id(_payload) ((uint8_t)(*((uint8_t*)_payload+2)))
#define DL_TCAS_DEBUG_tau(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+3)|*((uint8_t*)_payload+3+1)<<8|((uint32_t)*((uint8_t*)_payload+3+2))<<16|((uint32_t)*((uint8_t*)_payload+3+3))<<24); _f.f; }))

#define DL_POTENTIAL_east(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+2)|*((uint8_t*)_payload+2+1)<<8|((uint32_t)*((uint8_t*)_payload+2+2))<<16|((uint32_t)*((uint8_t*)_payload+2+3))<<24); _f.f; }))
#define DL_POTENTIAL_north(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+6)|*((uint8_t*)_payload+6+1)<<8|((uint32_t)*((uint8_t*)_payload+6+2))<<16|((uint32_t)*((uint8_t*)_payload+6+3))<<24); _f.f; }))
#define DL_POTENTIAL_alt(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+10)|*((uint8_t*)_payload+10+1)<<8|((uint32_t)*((uint8_t*)_payload+10+2))<<16|((uint32_t)*((uint8_t*)_payload+10+3))<<24); _f.f; }))
#define DL_POTENTIAL_speed(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+14)|*((uint8_t*)_payload+14+1)<<8|((uint32_t)*((uint8_t*)_payload+14+2))<<16|((uint32_t)*((uint8_t*)_payload+14+3))<<24); _f.f; }))
#define DL_POTENTIAL_climb(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+18)|*((uint8_t*)_payload+18+1)<<8|((uint32_t)*((uint8_t*)_payload+18+2))<<16|((uint32_t)*((uint8_t*)_payload+18+3))<<24); _f.f; }))

#define DL_VERTICAL_ENERGY_Epot_err(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+2)|*((uint8_t*)_payload+2+1)<<8|((uint32_t)*((uint8_t*)_payload+2+2))<<16|((uint32_t)*((uint8_t*)_payload+2+3))<<24); _f.f; }))
#define DL_VERTICAL_ENERGY_Ekin_err(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+6)|*((uint8_t*)_payload+6+1)<<8|((uint32_t)*((uint8_t*)_payload+6+2))<<16|((uint32_t)*((uint8_t*)_payload+6+3))<<24); _f.f; }))
#define DL_VERTICAL_ENERGY_Etot_err(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+10)|*((uint8_t*)_payload+10+1)<<8|((uint32_t)*((uint8_t*)_payload+10+2))<<16|((uint32_t)*((uint8_t*)_payload+10+3))<<24); _f.f; }))
#define DL_VERTICAL_ENERGY_Edis_err(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+14)|*((uint8_t*)_payload+14+1)<<8|((uint32_t)*((uint8_t*)_payload+14+2))<<16|((uint32_t)*((uint8_t*)_payload+14+3))<<24); _f.f; }))
#define DL_VERTICAL_ENERGY_throttle(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+18)|*((uint8_t*)_payload+18+1)<<8|((uint32_t)*((uint8_t*)_payload+18+2))<<16|((uint32_t)*((uint8_t*)_payload+18+3))<<24); _f.f; }))
#define DL_VERTICAL_ENERGY_nav_pitch(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+22)|*((uint8_t*)_payload+22+1)<<8|((uint32_t)*((uint8_t*)_payload+22+2))<<16|((uint32_t)*((uint8_t*)_payload+22+3))<<24); _f.f; }))
#define DL_VERTICAL_ENERGY_speed_sp(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+26)|*((uint8_t*)_payload+26+1)<<8|((uint32_t)*((uint8_t*)_payload+26+2))<<16|((uint32_t)*((uint8_t*)_payload+26+3))<<24); _f.f; }))

#define DL_STAB_ATTITUDE_FLOAT_est_p(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+2)|*((uint8_t*)_payload+2+1)<<8|((uint32_t)*((uint8_t*)_payload+2+2))<<16|((uint32_t)*((uint8_t*)_payload+2+3))<<24); _f.f; }))
#define DL_STAB_ATTITUDE_FLOAT_est_q(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+6)|*((uint8_t*)_payload+6+1)<<8|((uint32_t)*((uint8_t*)_payload+6+2))<<16|((uint32_t)*((uint8_t*)_payload+6+3))<<24); _f.f; }))
#define DL_STAB_ATTITUDE_FLOAT_est_r(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+10)|*((uint8_t*)_payload+10+1)<<8|((uint32_t)*((uint8_t*)_payload+10+2))<<16|((uint32_t)*((uint8_t*)_payload+10+3))<<24); _f.f; }))
#define DL_STAB_ATTITUDE_FLOAT_est_phi(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+14)|*((uint8_t*)_payload+14+1)<<8|((uint32_t)*((uint8_t*)_payload+14+2))<<16|((uint32_t)*((uint8_t*)_payload+14+3))<<24); _f.f; }))
#define DL_STAB_ATTITUDE_FLOAT_est_theta(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+18)|*((uint8_t*)_payload+18+1)<<8|((uint32_t)*((uint8_t*)_payload+18+2))<<16|((uint32_t)*((uint8_t*)_payload+18+3))<<24); _f.f; }))
#define DL_STAB_ATTITUDE_FLOAT_est_psi(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+22)|*((uint8_t*)_payload+22+1)<<8|((uint32_t)*((uint8_t*)_payload+22+2))<<16|((uint32_t)*((uint8_t*)_payload+22+3))<<24); _f.f; }))
#define DL_STAB_ATTITUDE_FLOAT_ref_phi(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+26)|*((uint8_t*)_payload+26+1)<<8|((uint32_t)*((uint8_t*)_payload+26+2))<<16|((uint32_t)*((uint8_t*)_payload+26+3))<<24); _f.f; }))
#define DL_STAB_ATTITUDE_FLOAT_ref_theta(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+30)|*((uint8_t*)_payload+30+1)<<8|((uint32_t)*((uint8_t*)_payload+30+2))<<16|((uint32_t)*((uint8_t*)_payload+30+3))<<24); _f.f; }))
#define DL_STAB_ATTITUDE_FLOAT_ref_psi(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+34)|*((uint8_t*)_payload+34+1)<<8|((uint32_t)*((uint8_t*)_payload+34+2))<<16|((uint32_t)*((uint8_t*)_payload+34+3))<<24); _f.f; }))
#define DL_STAB_ATTITUDE_FLOAT_sum_err_phi(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+38)|*((uint8_t*)_payload+38+1)<<8|((uint32_t)*((uint8_t*)_payload+38+2))<<16|((uint32_t)*((uint8_t*)_payload+38+3))<<24); _f.f; }))
#define DL_STAB_ATTITUDE_FLOAT_sum_err_theta(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+42)|*((uint8_t*)_payload+42+1)<<8|((uint32_t)*((uint8_t*)_payload+42+2))<<16|((uint32_t)*((uint8_t*)_payload+42+3))<<24); _f.f; }))
#define DL_STAB_ATTITUDE_FLOAT_sum_err_psi(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+46)|*((uint8_t*)_payload+46+1)<<8|((uint32_t)*((uint8_t*)_payload+46+2))<<16|((uint32_t)*((uint8_t*)_payload+46+3))<<24); _f.f; }))
#define DL_STAB_ATTITUDE_FLOAT_delta_a_fb(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+50)|*((uint8_t*)_payload+50+1)<<8|((uint32_t)*((uint8_t*)_payload+50+2))<<16|((uint32_t)*((uint8_t*)_payload+50+3))<<24); _f.f; }))
#define DL_STAB_ATTITUDE_FLOAT_delta_e_fb(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+54)|*((uint8_t*)_payload+54+1)<<8|((uint32_t)*((uint8_t*)_payload+54+2))<<16|((uint32_t)*((uint8_t*)_payload+54+3))<<24); _f.f; }))
#define DL_STAB_ATTITUDE_FLOAT_delta_r_fb(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+58)|*((uint8_t*)_payload+58+1)<<8|((uint32_t)*((uint8_t*)_payload+58+2))<<16|((uint32_t)*((uint8_t*)_payload+58+3))<<24); _f.f; }))
#define DL_STAB_ATTITUDE_FLOAT_delta_a_ff(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+62)|*((uint8_t*)_payload+62+1)<<8|((uint32_t)*((uint8_t*)_payload+62+2))<<16|((uint32_t)*((uint8_t*)_payload+62+3))<<24); _f.f; }))
#define DL_STAB_ATTITUDE_FLOAT_delta_e_ff(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+66)|*((uint8_t*)_payload+66+1)<<8|((uint32_t)*((uint8_t*)_payload+66+2))<<16|((uint32_t)*((uint8_t*)_payload+66+3))<<24); _f.f; }))
#define DL_STAB_ATTITUDE_FLOAT_delta_r_ff(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+70)|*((uint8_t*)_payload+70+1)<<8|((uint32_t)*((uint8_t*)_payload+70+2))<<16|((uint32_t)*((uint8_t*)_payload+70+3))<<24); _f.f; }))
#define DL_STAB_ATTITUDE_FLOAT_delta_a(_payload) ((int32_t)(*((uint8_t*)_payload+74)|*((uint8_t*)_payload+74+1)<<8|((uint32_t)*((uint8_t*)_payload+74+2))<<16|((uint32_t)*((uint8_t*)_payload+74+3))<<24))
#define DL_STAB_ATTITUDE_FLOAT_delta_e(_payload) ((int32_t)(*((uint8_t*)_payload+78)|*((uint8_t*)_payload+78+1)<<8|((uint32_t)*((uint8_t*)_payload+78+2))<<16|((uint32_t)*((uint8_t*)_payload+78+3))<<24))
#define DL_STAB_ATTITUDE_FLOAT_delta_r(_payload) ((int32_t)(*((uint8_t*)_payload+82)|*((uint8_t*)_payload+82+1)<<8|((uint32_t)*((uint8_t*)_payload+82+2))<<16|((uint32_t)*((uint8_t*)_payload+82+3))<<24))
#define DL_STAB_ATTITUDE_FLOAT_est_p_d(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+86)|*((uint8_t*)_payload+86+1)<<8|((uint32_t)*((uint8_t*)_payload+86+2))<<16|((uint32_t)*((uint8_t*)_payload+86+3))<<24); _f.f; }))
#define DL_STAB_ATTITUDE_FLOAT_est_q_d(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+90)|*((uint8_t*)_payload+90+1)<<8|((uint32_t)*((uint8_t*)_payload+90+2))<<16|((uint32_t)*((uint8_t*)_payload+90+3))<<24); _f.f; }))
#define DL_STAB_ATTITUDE_FLOAT_est_r_d(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+94)|*((uint8_t*)_payload+94+1)<<8|((uint32_t)*((uint8_t*)_payload+94+2))<<16|((uint32_t)*((uint8_t*)_payload+94+3))<<24); _f.f; }))

#define DL_IMU_GYRO_SCALED_gp(_payload) ((int32_t)(*((uint8_t*)_payload+2)|*((uint8_t*)_payload+2+1)<<8|((uint32_t)*((uint8_t*)_payload+2+2))<<16|((uint32_t)*((uint8_t*)_payload+2+3))<<24))
#define DL_IMU_GYRO_SCALED_gq(_payload) ((int32_t)(*((uint8_t*)_payload+6)|*((uint8_t*)_payload+6+1)<<8|((uint32_t)*((uint8_t*)_payload+6+2))<<16|((uint32_t)*((uint8_t*)_payload+6+3))<<24))
#define DL_IMU_GYRO_SCALED_gr(_payload) ((int32_t)(*((uint8_t*)_payload+10)|*((uint8_t*)_payload+10+1)<<8|((uint32_t)*((uint8_t*)_payload+10+2))<<16|((uint32_t)*((uint8_t*)_payload+10+3))<<24))

#define DL_IMU_ACCEL_SCALED_ax(_payload) ((int32_t)(*((uint8_t*)_payload+2)|*((uint8_t*)_payload+2+1)<<8|((uint32_t)*((uint8_t*)_payload+2+2))<<16|((uint32_t)*((uint8_t*)_payload+2+3))<<24))
#define DL_IMU_ACCEL_SCALED_ay(_payload) ((int32_t)(*((uint8_t*)_payload+6)|*((uint8_t*)_payload+6+1)<<8|((uint32_t)*((uint8_t*)_payload+6+2))<<16|((uint32_t)*((uint8_t*)_payload+6+3))<<24))
#define DL_IMU_ACCEL_SCALED_az(_payload) ((int32_t)(*((uint8_t*)_payload+10)|*((uint8_t*)_payload+10+1)<<8|((uint32_t)*((uint8_t*)_payload+10+2))<<16|((uint32_t)*((uint8_t*)_payload+10+3))<<24))

#define DL_IMU_MAG_SCALED_mx(_payload) ((int32_t)(*((uint8_t*)_payload+2)|*((uint8_t*)_payload+2+1)<<8|((uint32_t)*((uint8_t*)_payload+2+2))<<16|((uint32_t)*((uint8_t*)_payload+2+3))<<24))
#define DL_IMU_MAG_SCALED_my(_payload) ((int32_t)(*((uint8_t*)_payload+6)|*((uint8_t*)_payload+6+1)<<8|((uint32_t)*((uint8_t*)_payload+6+2))<<16|((uint32_t)*((uint8_t*)_payload+6+3))<<24))
#define DL_IMU_MAG_SCALED_mz(_payload) ((int32_t)(*((uint8_t*)_payload+10)|*((uint8_t*)_payload+10+1)<<8|((uint32_t)*((uint8_t*)_payload+10+2))<<16|((uint32_t)*((uint8_t*)_payload+10+3))<<24))

#define DL_FILTER_phi(_payload) ((int32_t)(*((uint8_t*)_payload+2)|*((uint8_t*)_payload+2+1)<<8|((uint32_t)*((uint8_t*)_payload+2+2))<<16|((uint32_t)*((uint8_t*)_payload+2+3))<<24))
#define DL_FILTER_theta(_payload) ((int32_t)(*((uint8_t*)_payload+6)|*((uint8_t*)_payload+6+1)<<8|((uint32_t)*((uint8_t*)_payload+6+2))<<16|((uint32_t)*((uint8_t*)_payload+6+3))<<24))
#define DL_FILTER_psi(_payload) ((int32_t)(*((uint8_t*)_payload+10)|*((uint8_t*)_payload+10+1)<<8|((uint32_t)*((uint8_t*)_payload+10+2))<<16|((uint32_t)*((uint8_t*)_payload+10+3))<<24))
#define DL_FILTER_measure_phi(_payload) ((int32_t)(*((uint8_t*)_payload+14)|*((uint8_t*)_payload+14+1)<<8|((uint32_t)*((uint8_t*)_payload+14+2))<<16|((uint32_t)*((uint8_t*)_payload+14+3))<<24))
#define DL_FILTER_measure_theta(_payload) ((int32_t)(*((uint8_t*)_payload+18)|*((uint8_t*)_payload+18+1)<<8|((uint32_t)*((uint8_t*)_payload+18+2))<<16|((uint32_t)*((uint8_t*)_payload+18+3))<<24))
#define DL_FILTER_measure_psi(_payload) ((int32_t)(*((uint8_t*)_payload+22)|*((uint8_t*)_payload+22+1)<<8|((uint32_t)*((uint8_t*)_payload+22+2))<<16|((uint32_t)*((uint8_t*)_payload+22+3))<<24))
#define DL_FILTER_corrected_phi(_payload) ((int32_t)(*((uint8_t*)_payload+26)|*((uint8_t*)_payload+26+1)<<8|((uint32_t)*((uint8_t*)_payload+26+2))<<16|((uint32_t)*((uint8_t*)_payload+26+3))<<24))
#define DL_FILTER_corrected_theta(_payload) ((int32_t)(*((uint8_t*)_payload+30)|*((uint8_t*)_payload+30+1)<<8|((uint32_t)*((uint8_t*)_payload+30+2))<<16|((uint32_t)*((uint8_t*)_payload+30+3))<<24))
#define DL_FILTER_corrected_psi(_payload) ((int32_t)(*((uint8_t*)_payload+34)|*((uint8_t*)_payload+34+1)<<8|((uint32_t)*((uint8_t*)_payload+34+2))<<16|((uint32_t)*((uint8_t*)_payload+34+3))<<24))
#define DL_FILTER_correction_phi(_payload) ((int32_t)(*((uint8_t*)_payload+38)|*((uint8_t*)_payload+38+1)<<8|((uint32_t)*((uint8_t*)_payload+38+2))<<16|((uint32_t)*((uint8_t*)_payload+38+3))<<24))
#define DL_FILTER_correction_theta(_payload) ((int32_t)(*((uint8_t*)_payload+42)|*((uint8_t*)_payload+42+1)<<8|((uint32_t)*((uint8_t*)_payload+42+2))<<16|((uint32_t)*((uint8_t*)_payload+42+3))<<24))
#define DL_FILTER_correction_psi(_payload) ((int32_t)(*((uint8_t*)_payload+46)|*((uint8_t*)_payload+46+1)<<8|((uint32_t)*((uint8_t*)_payload+46+2))<<16|((uint32_t)*((uint8_t*)_payload+46+3))<<24))
#define DL_FILTER_bp(_payload) ((int32_t)(*((uint8_t*)_payload+50)|*((uint8_t*)_payload+50+1)<<8|((uint32_t)*((uint8_t*)_payload+50+2))<<16|((uint32_t)*((uint8_t*)_payload+50+3))<<24))
#define DL_FILTER_bq(_payload) ((int32_t)(*((uint8_t*)_payload+54)|*((uint8_t*)_payload+54+1)<<8|((uint32_t)*((uint8_t*)_payload+54+2))<<16|((uint32_t)*((uint8_t*)_payload+54+3))<<24))
#define DL_FILTER_br(_payload) ((int32_t)(*((uint8_t*)_payload+58)|*((uint8_t*)_payload+58+1)<<8|((uint32_t)*((uint8_t*)_payload+58+2))<<16|((uint32_t)*((uint8_t*)_payload+58+3))<<24))

#define DL_FILTER2_px(_payload) ((int32_t)(*((uint8_t*)_payload+2)|*((uint8_t*)_payload+2+1)<<8|((uint32_t)*((uint8_t*)_payload+2+2))<<16|((uint32_t)*((uint8_t*)_payload+2+3))<<24))
#define DL_FILTER2_py(_payload) ((int32_t)(*((uint8_t*)_payload+6)|*((uint8_t*)_payload+6+1)<<8|((uint32_t)*((uint8_t*)_payload+6+2))<<16|((uint32_t)*((uint8_t*)_payload+6+3))<<24))
#define DL_FILTER2_pz(_payload) ((int32_t)(*((uint8_t*)_payload+10)|*((uint8_t*)_payload+10+1)<<8|((uint32_t)*((uint8_t*)_payload+10+2))<<16|((uint32_t)*((uint8_t*)_payload+10+3))<<24))
#define DL_FILTER2_gsx(_payload) ((int32_t)(*((uint8_t*)_payload+14)|*((uint8_t*)_payload+14+1)<<8|((uint32_t)*((uint8_t*)_payload+14+2))<<16|((uint32_t)*((uint8_t*)_payload+14+3))<<24))
#define DL_FILTER2_gsy(_payload) ((int32_t)(*((uint8_t*)_payload+18)|*((uint8_t*)_payload+18+1)<<8|((uint32_t)*((uint8_t*)_payload+18+2))<<16|((uint32_t)*((uint8_t*)_payload+18+3))<<24))
#define DL_FILTER2_gsz(_payload) ((int32_t)(*((uint8_t*)_payload+22)|*((uint8_t*)_payload+22+1)<<8|((uint32_t)*((uint8_t*)_payload+22+2))<<16|((uint32_t)*((uint8_t*)_payload+22+3))<<24))

#define DL_RATE_LOOP_sp_p(_payload) ((int32_t)(*((uint8_t*)_payload+2)|*((uint8_t*)_payload+2+1)<<8|((uint32_t)*((uint8_t*)_payload+2+2))<<16|((uint32_t)*((uint8_t*)_payload+2+3))<<24))
#define DL_RATE_LOOP_sp_q(_payload) ((int32_t)(*((uint8_t*)_payload+6)|*((uint8_t*)_payload+6+1)<<8|((uint32_t)*((uint8_t*)_payload+6+2))<<16|((uint32_t)*((uint8_t*)_payload+6+3))<<24))
#define DL_RATE_LOOP_sp_r(_payload) ((int32_t)(*((uint8_t*)_payload+10)|*((uint8_t*)_payload+10+1)<<8|((uint32_t)*((uint8_t*)_payload+10+2))<<16|((uint32_t)*((uint8_t*)_payload+10+3))<<24))
#define DL_RATE_LOOP_ref_p(_payload) ((int32_t)(*((uint8_t*)_payload+14)|*((uint8_t*)_payload+14+1)<<8|((uint32_t)*((uint8_t*)_payload+14+2))<<16|((uint32_t)*((uint8_t*)_payload+14+3))<<24))
#define DL_RATE_LOOP_ref_q(_payload) ((int32_t)(*((uint8_t*)_payload+18)|*((uint8_t*)_payload+18+1)<<8|((uint32_t)*((uint8_t*)_payload+18+2))<<16|((uint32_t)*((uint8_t*)_payload+18+3))<<24))
#define DL_RATE_LOOP_ref_r(_payload) ((int32_t)(*((uint8_t*)_payload+22)|*((uint8_t*)_payload+22+1)<<8|((uint32_t)*((uint8_t*)_payload+22+2))<<16|((uint32_t)*((uint8_t*)_payload+22+3))<<24))
#define DL_RATE_LOOP_refdot_p(_payload) ((int32_t)(*((uint8_t*)_payload+26)|*((uint8_t*)_payload+26+1)<<8|((uint32_t)*((uint8_t*)_payload+26+2))<<16|((uint32_t)*((uint8_t*)_payload+26+3))<<24))
#define DL_RATE_LOOP_refdot_q(_payload) ((int32_t)(*((uint8_t*)_payload+30)|*((uint8_t*)_payload+30+1)<<8|((uint32_t)*((uint8_t*)_payload+30+2))<<16|((uint32_t)*((uint8_t*)_payload+30+3))<<24))
#define DL_RATE_LOOP_refdot_r(_payload) ((int32_t)(*((uint8_t*)_payload+34)|*((uint8_t*)_payload+34+1)<<8|((uint32_t)*((uint8_t*)_payload+34+2))<<16|((uint32_t)*((uint8_t*)_payload+34+3))<<24))
#define DL_RATE_LOOP_sumerr_p(_payload) ((int32_t)(*((uint8_t*)_payload+38)|*((uint8_t*)_payload+38+1)<<8|((uint32_t)*((uint8_t*)_payload+38+2))<<16|((uint32_t)*((uint8_t*)_payload+38+3))<<24))
#define DL_RATE_LOOP_sumerr_q(_payload) ((int32_t)(*((uint8_t*)_payload+42)|*((uint8_t*)_payload+42+1)<<8|((uint32_t)*((uint8_t*)_payload+42+2))<<16|((uint32_t)*((uint8_t*)_payload+42+3))<<24))
#define DL_RATE_LOOP_sumerr_r(_payload) ((int32_t)(*((uint8_t*)_payload+46)|*((uint8_t*)_payload+46+1)<<8|((uint32_t)*((uint8_t*)_payload+46+2))<<16|((uint32_t)*((uint8_t*)_payload+46+3))<<24))
#define DL_RATE_LOOP_ff_p(_payload) ((int32_t)(*((uint8_t*)_payload+50)|*((uint8_t*)_payload+50+1)<<8|((uint32_t)*((uint8_t*)_payload+50+2))<<16|((uint32_t)*((uint8_t*)_payload+50+3))<<24))
#define DL_RATE_LOOP_ff_q(_payload) ((int32_t)(*((uint8_t*)_payload+54)|*((uint8_t*)_payload+54+1)<<8|((uint32_t)*((uint8_t*)_payload+54+2))<<16|((uint32_t)*((uint8_t*)_payload+54+3))<<24))
#define DL_RATE_LOOP_ff_r(_payload) ((int32_t)(*((uint8_t*)_payload+58)|*((uint8_t*)_payload+58+1)<<8|((uint32_t)*((uint8_t*)_payload+58+2))<<16|((uint32_t)*((uint8_t*)_payload+58+3))<<24))
#define DL_RATE_LOOP_fb_p(_payload) ((int32_t)(*((uint8_t*)_payload+62)|*((uint8_t*)_payload+62+1)<<8|((uint32_t)*((uint8_t*)_payload+62+2))<<16|((uint32_t)*((uint8_t*)_payload+62+3))<<24))
#define DL_RATE_LOOP_fb_q(_payload) ((int32_t)(*((uint8_t*)_payload+66)|*((uint8_t*)_payload+66+1)<<8|((uint32_t)*((uint8_t*)_payload+66+2))<<16|((uint32_t)*((uint8_t*)_payload+66+3))<<24))
#define DL_RATE_LOOP_fb_r(_payload) ((int32_t)(*((uint8_t*)_payload+70)|*((uint8_t*)_payload+70+1)<<8|((uint32_t)*((uint8_t*)_payload+70+2))<<16|((uint32_t)*((uint8_t*)_payload+70+3))<<24))
#define DL_RATE_LOOP_delta_t(_payload) ((int32_t)(*((uint8_t*)_payload+74)|*((uint8_t*)_payload+74+1)<<8|((uint32_t)*((uint8_t*)_payload+74+2))<<16|((uint32_t)*((uint8_t*)_payload+74+3))<<24))

#define DL_FILTER_ALIGNER_lp_gp(_payload) ((int32_t)(*((uint8_t*)_payload+2)|*((uint8_t*)_payload+2+1)<<8|((uint32_t)*((uint8_t*)_payload+2+2))<<16|((uint32_t)*((uint8_t*)_payload+2+3))<<24))
#define DL_FILTER_ALIGNER_lp_gq(_payload) ((int32_t)(*((uint8_t*)_payload+6)|*((uint8_t*)_payload+6+1)<<8|((uint32_t)*((uint8_t*)_payload+6+2))<<16|((uint32_t)*((uint8_t*)_payload+6+3))<<24))
#define DL_FILTER_ALIGNER_lp_gr(_payload) ((int32_t)(*((uint8_t*)_payload+10)|*((uint8_t*)_payload+10+1)<<8|((uint32_t)*((uint8_t*)_payload+10+2))<<16|((uint32_t)*((uint8_t*)_payload+10+3))<<24))
#define DL_FILTER_ALIGNER_gp(_payload) ((int32_t)(*((uint8_t*)_payload+14)|*((uint8_t*)_payload+14+1)<<8|((uint32_t)*((uint8_t*)_payload+14+2))<<16|((uint32_t)*((uint8_t*)_payload+14+3))<<24))
#define DL_FILTER_ALIGNER_gq(_payload) ((int32_t)(*((uint8_t*)_payload+18)|*((uint8_t*)_payload+18+1)<<8|((uint32_t)*((uint8_t*)_payload+18+2))<<16|((uint32_t)*((uint8_t*)_payload+18+3))<<24))
#define DL_FILTER_ALIGNER_gr(_payload) ((int32_t)(*((uint8_t*)_payload+22)|*((uint8_t*)_payload+22+1)<<8|((uint32_t)*((uint8_t*)_payload+22+2))<<16|((uint32_t)*((uint8_t*)_payload+22+3))<<24))
#define DL_FILTER_ALIGNER_noise(_payload) ((int32_t)(*((uint8_t*)_payload+26)|*((uint8_t*)_payload+26+1)<<8|((uint32_t)*((uint8_t*)_payload+26+2))<<16|((uint32_t)*((uint8_t*)_payload+26+3))<<24))
#define DL_FILTER_ALIGNER_cnt(_payload) ((int32_t)(*((uint8_t*)_payload+30)|*((uint8_t*)_payload+30+1)<<8|((uint32_t)*((uint8_t*)_payload+30+2))<<16|((uint32_t)*((uint8_t*)_payload+30+3))<<24))

#define DL_FILTER_Q_qi(_payload) ((int32_t)(*((uint8_t*)_payload+2)|*((uint8_t*)_payload+2+1)<<8|((uint32_t)*((uint8_t*)_payload+2+2))<<16|((uint32_t)*((uint8_t*)_payload+2+3))<<24))
#define DL_FILTER_Q_qx(_payload) ((int32_t)(*((uint8_t*)_payload+6)|*((uint8_t*)_payload+6+1)<<8|((uint32_t)*((uint8_t*)_payload+6+2))<<16|((uint32_t)*((uint8_t*)_payload+6+3))<<24))
#define DL_FILTER_Q_qy(_payload) ((int32_t)(*((uint8_t*)_payload+10)|*((uint8_t*)_payload+10+1)<<8|((uint32_t)*((uint8_t*)_payload+10+2))<<16|((uint32_t)*((uint8_t*)_payload+10+3))<<24))
#define DL_FILTER_Q_qz(_payload) ((int32_t)(*((uint8_t*)_payload+14)|*((uint8_t*)_payload+14+1)<<8|((uint32_t)*((uint8_t*)_payload+14+2))<<16|((uint32_t)*((uint8_t*)_payload+14+3))<<24))

#define DL_FILTER_COR_mphi(_payload) ((int32_t)(*((uint8_t*)_payload+2)|*((uint8_t*)_payload+2+1)<<8|((uint32_t)*((uint8_t*)_payload+2+2))<<16|((uint32_t)*((uint8_t*)_payload+2+3))<<24))
#define DL_FILTER_COR_mtheta(_payload) ((int32_t)(*((uint8_t*)_payload+6)|*((uint8_t*)_payload+6+1)<<8|((uint32_t)*((uint8_t*)_payload+6+2))<<16|((uint32_t)*((uint8_t*)_payload+6+3))<<24))
#define DL_FILTER_COR_mpsi(_payload) ((int32_t)(*((uint8_t*)_payload+10)|*((uint8_t*)_payload+10+1)<<8|((uint32_t)*((uint8_t*)_payload+10+2))<<16|((uint32_t)*((uint8_t*)_payload+10+3))<<24))
#define DL_FILTER_COR_qi(_payload) ((int32_t)(*((uint8_t*)_payload+14)|*((uint8_t*)_payload+14+1)<<8|((uint32_t)*((uint8_t*)_payload+14+2))<<16|((uint32_t)*((uint8_t*)_payload+14+3))<<24))
#define DL_FILTER_COR_qx(_payload) ((int32_t)(*((uint8_t*)_payload+18)|*((uint8_t*)_payload+18+1)<<8|((uint32_t)*((uint8_t*)_payload+18+2))<<16|((uint32_t)*((uint8_t*)_payload+18+3))<<24))
#define DL_FILTER_COR_qy(_payload) ((int32_t)(*((uint8_t*)_payload+22)|*((uint8_t*)_payload+22+1)<<8|((uint32_t)*((uint8_t*)_payload+22+2))<<16|((uint32_t)*((uint8_t*)_payload+22+3))<<24))
#define DL_FILTER_COR_qz(_payload) ((int32_t)(*((uint8_t*)_payload+26)|*((uint8_t*)_payload+26+1)<<8|((uint32_t)*((uint8_t*)_payload+26+2))<<16|((uint32_t)*((uint8_t*)_payload+26+3))<<24))

#define DL_STAB_ATTITUDE_INT_est_p(_payload) ((int32_t)(*((uint8_t*)_payload+2)|*((uint8_t*)_payload+2+1)<<8|((uint32_t)*((uint8_t*)_payload+2+2))<<16|((uint32_t)*((uint8_t*)_payload+2+3))<<24))
#define DL_STAB_ATTITUDE_INT_est_q(_payload) ((int32_t)(*((uint8_t*)_payload+6)|*((uint8_t*)_payload+6+1)<<8|((uint32_t)*((uint8_t*)_payload+6+2))<<16|((uint32_t)*((uint8_t*)_payload+6+3))<<24))
#define DL_STAB_ATTITUDE_INT_est_r(_payload) ((int32_t)(*((uint8_t*)_payload+10)|*((uint8_t*)_payload+10+1)<<8|((uint32_t)*((uint8_t*)_payload+10+2))<<16|((uint32_t)*((uint8_t*)_payload+10+3))<<24))
#define DL_STAB_ATTITUDE_INT_est_phi(_payload) ((int32_t)(*((uint8_t*)_payload+14)|*((uint8_t*)_payload+14+1)<<8|((uint32_t)*((uint8_t*)_payload+14+2))<<16|((uint32_t)*((uint8_t*)_payload+14+3))<<24))
#define DL_STAB_ATTITUDE_INT_est_theta(_payload) ((int32_t)(*((uint8_t*)_payload+18)|*((uint8_t*)_payload+18+1)<<8|((uint32_t)*((uint8_t*)_payload+18+2))<<16|((uint32_t)*((uint8_t*)_payload+18+3))<<24))
#define DL_STAB_ATTITUDE_INT_est_psi(_payload) ((int32_t)(*((uint8_t*)_payload+22)|*((uint8_t*)_payload+22+1)<<8|((uint32_t)*((uint8_t*)_payload+22+2))<<16|((uint32_t)*((uint8_t*)_payload+22+3))<<24))
#define DL_STAB_ATTITUDE_INT_sp_phi(_payload) ((int32_t)(*((uint8_t*)_payload+26)|*((uint8_t*)_payload+26+1)<<8|((uint32_t)*((uint8_t*)_payload+26+2))<<16|((uint32_t)*((uint8_t*)_payload+26+3))<<24))
#define DL_STAB_ATTITUDE_INT_sp_theta(_payload) ((int32_t)(*((uint8_t*)_payload+30)|*((uint8_t*)_payload+30+1)<<8|((uint32_t)*((uint8_t*)_payload+30+2))<<16|((uint32_t)*((uint8_t*)_payload+30+3))<<24))
#define DL_STAB_ATTITUDE_INT_sp_psi(_payload) ((int32_t)(*((uint8_t*)_payload+34)|*((uint8_t*)_payload+34+1)<<8|((uint32_t)*((uint8_t*)_payload+34+2))<<16|((uint32_t)*((uint8_t*)_payload+34+3))<<24))
#define DL_STAB_ATTITUDE_INT_sum_err_phi(_payload) ((int32_t)(*((uint8_t*)_payload+38)|*((uint8_t*)_payload+38+1)<<8|((uint32_t)*((uint8_t*)_payload+38+2))<<16|((uint32_t)*((uint8_t*)_payload+38+3))<<24))
#define DL_STAB_ATTITUDE_INT_sum_err_theta(_payload) ((int32_t)(*((uint8_t*)_payload+42)|*((uint8_t*)_payload+42+1)<<8|((uint32_t)*((uint8_t*)_payload+42+2))<<16|((uint32_t)*((uint8_t*)_payload+42+3))<<24))
#define DL_STAB_ATTITUDE_INT_sum_err_psi(_payload) ((int32_t)(*((uint8_t*)_payload+46)|*((uint8_t*)_payload+46+1)<<8|((uint32_t)*((uint8_t*)_payload+46+2))<<16|((uint32_t)*((uint8_t*)_payload+46+3))<<24))
#define DL_STAB_ATTITUDE_INT_delta_a_fb(_payload) ((int32_t)(*((uint8_t*)_payload+50)|*((uint8_t*)_payload+50+1)<<8|((uint32_t)*((uint8_t*)_payload+50+2))<<16|((uint32_t)*((uint8_t*)_payload+50+3))<<24))
#define DL_STAB_ATTITUDE_INT_delta_e_fb(_payload) ((int32_t)(*((uint8_t*)_payload+54)|*((uint8_t*)_payload+54+1)<<8|((uint32_t)*((uint8_t*)_payload+54+2))<<16|((uint32_t)*((uint8_t*)_payload+54+3))<<24))
#define DL_STAB_ATTITUDE_INT_delta_r_fb(_payload) ((int32_t)(*((uint8_t*)_payload+58)|*((uint8_t*)_payload+58+1)<<8|((uint32_t)*((uint8_t*)_payload+58+2))<<16|((uint32_t)*((uint8_t*)_payload+58+3))<<24))
#define DL_STAB_ATTITUDE_INT_delta_a_ff(_payload) ((int32_t)(*((uint8_t*)_payload+62)|*((uint8_t*)_payload+62+1)<<8|((uint32_t)*((uint8_t*)_payload+62+2))<<16|((uint32_t)*((uint8_t*)_payload+62+3))<<24))
#define DL_STAB_ATTITUDE_INT_delta_e_ff(_payload) ((int32_t)(*((uint8_t*)_payload+66)|*((uint8_t*)_payload+66+1)<<8|((uint32_t)*((uint8_t*)_payload+66+2))<<16|((uint32_t)*((uint8_t*)_payload+66+3))<<24))
#define DL_STAB_ATTITUDE_INT_delta_r_ff(_payload) ((int32_t)(*((uint8_t*)_payload+70)|*((uint8_t*)_payload+70+1)<<8|((uint32_t)*((uint8_t*)_payload+70+2))<<16|((uint32_t)*((uint8_t*)_payload+70+3))<<24))
#define DL_STAB_ATTITUDE_INT_delta_a(_payload) ((int32_t)(*((uint8_t*)_payload+74)|*((uint8_t*)_payload+74+1)<<8|((uint32_t)*((uint8_t*)_payload+74+2))<<16|((uint32_t)*((uint8_t*)_payload+74+3))<<24))
#define DL_STAB_ATTITUDE_INT_delta_e(_payload) ((int32_t)(*((uint8_t*)_payload+78)|*((uint8_t*)_payload+78+1)<<8|((uint32_t)*((uint8_t*)_payload+78+2))<<16|((uint32_t)*((uint8_t*)_payload+78+3))<<24))
#define DL_STAB_ATTITUDE_INT_delta_r(_payload) ((int32_t)(*((uint8_t*)_payload+82)|*((uint8_t*)_payload+82+1)<<8|((uint32_t)*((uint8_t*)_payload+82+2))<<16|((uint32_t)*((uint8_t*)_payload+82+3))<<24))

#define DL_STAB_ATTITUDE_REF_INT_sp_phi(_payload) ((int32_t)(*((uint8_t*)_payload+2)|*((uint8_t*)_payload+2+1)<<8|((uint32_t)*((uint8_t*)_payload+2+2))<<16|((uint32_t)*((uint8_t*)_payload+2+3))<<24))
#define DL_STAB_ATTITUDE_REF_INT_sp_theta(_payload) ((int32_t)(*((uint8_t*)_payload+6)|*((uint8_t*)_payload+6+1)<<8|((uint32_t)*((uint8_t*)_payload+6+2))<<16|((uint32_t)*((uint8_t*)_payload+6+3))<<24))
#define DL_STAB_ATTITUDE_REF_INT_sp_psi(_payload) ((int32_t)(*((uint8_t*)_payload+10)|*((uint8_t*)_payload+10+1)<<8|((uint32_t)*((uint8_t*)_payload+10+2))<<16|((uint32_t)*((uint8_t*)_payload+10+3))<<24))
#define DL_STAB_ATTITUDE_REF_INT_ref_phi(_payload) ((int32_t)(*((uint8_t*)_payload+14)|*((uint8_t*)_payload+14+1)<<8|((uint32_t)*((uint8_t*)_payload+14+2))<<16|((uint32_t)*((uint8_t*)_payload+14+3))<<24))
#define DL_STAB_ATTITUDE_REF_INT_ref_theta(_payload) ((int32_t)(*((uint8_t*)_payload+18)|*((uint8_t*)_payload+18+1)<<8|((uint32_t)*((uint8_t*)_payload+18+2))<<16|((uint32_t)*((uint8_t*)_payload+18+3))<<24))
#define DL_STAB_ATTITUDE_REF_INT_ref_psi(_payload) ((int32_t)(*((uint8_t*)_payload+22)|*((uint8_t*)_payload+22+1)<<8|((uint32_t)*((uint8_t*)_payload+22+2))<<16|((uint32_t)*((uint8_t*)_payload+22+3))<<24))
#define DL_STAB_ATTITUDE_REF_INT_ref_p(_payload) ((int32_t)(*((uint8_t*)_payload+26)|*((uint8_t*)_payload+26+1)<<8|((uint32_t)*((uint8_t*)_payload+26+2))<<16|((uint32_t)*((uint8_t*)_payload+26+3))<<24))
#define DL_STAB_ATTITUDE_REF_INT_ref_q(_payload) ((int32_t)(*((uint8_t*)_payload+30)|*((uint8_t*)_payload+30+1)<<8|((uint32_t)*((uint8_t*)_payload+30+2))<<16|((uint32_t)*((uint8_t*)_payload+30+3))<<24))
#define DL_STAB_ATTITUDE_REF_INT_ref_r(_payload) ((int32_t)(*((uint8_t*)_payload+34)|*((uint8_t*)_payload+34+1)<<8|((uint32_t)*((uint8_t*)_payload+34+2))<<16|((uint32_t)*((uint8_t*)_payload+34+3))<<24))
#define DL_STAB_ATTITUDE_REF_INT_ref_pd(_payload) ((int32_t)(*((uint8_t*)_payload+38)|*((uint8_t*)_payload+38+1)<<8|((uint32_t)*((uint8_t*)_payload+38+2))<<16|((uint32_t)*((uint8_t*)_payload+38+3))<<24))
#define DL_STAB_ATTITUDE_REF_INT_ref_qd(_payload) ((int32_t)(*((uint8_t*)_payload+42)|*((uint8_t*)_payload+42+1)<<8|((uint32_t)*((uint8_t*)_payload+42+2))<<16|((uint32_t)*((uint8_t*)_payload+42+3))<<24))
#define DL_STAB_ATTITUDE_REF_INT_ref_rd(_payload) ((int32_t)(*((uint8_t*)_payload+46)|*((uint8_t*)_payload+46+1)<<8|((uint32_t)*((uint8_t*)_payload+46+2))<<16|((uint32_t)*((uint8_t*)_payload+46+3))<<24))

#define DL_STAB_ATTITUDE_REF_FLOAT_sp_phi(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+2)|*((uint8_t*)_payload+2+1)<<8|((uint32_t)*((uint8_t*)_payload+2+2))<<16|((uint32_t)*((uint8_t*)_payload+2+3))<<24); _f.f; }))
#define DL_STAB_ATTITUDE_REF_FLOAT_sp_theta(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+6)|*((uint8_t*)_payload+6+1)<<8|((uint32_t)*((uint8_t*)_payload+6+2))<<16|((uint32_t)*((uint8_t*)_payload+6+3))<<24); _f.f; }))
#define DL_STAB_ATTITUDE_REF_FLOAT_sp_psi(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+10)|*((uint8_t*)_payload+10+1)<<8|((uint32_t)*((uint8_t*)_payload+10+2))<<16|((uint32_t)*((uint8_t*)_payload+10+3))<<24); _f.f; }))
#define DL_STAB_ATTITUDE_REF_FLOAT_ref_phi(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+14)|*((uint8_t*)_payload+14+1)<<8|((uint32_t)*((uint8_t*)_payload+14+2))<<16|((uint32_t)*((uint8_t*)_payload+14+3))<<24); _f.f; }))
#define DL_STAB_ATTITUDE_REF_FLOAT_ref_theta(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+18)|*((uint8_t*)_payload+18+1)<<8|((uint32_t)*((uint8_t*)_payload+18+2))<<16|((uint32_t)*((uint8_t*)_payload+18+3))<<24); _f.f; }))
#define DL_STAB_ATTITUDE_REF_FLOAT_ref_psi(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+22)|*((uint8_t*)_payload+22+1)<<8|((uint32_t)*((uint8_t*)_payload+22+2))<<16|((uint32_t)*((uint8_t*)_payload+22+3))<<24); _f.f; }))
#define DL_STAB_ATTITUDE_REF_FLOAT_ref_p(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+26)|*((uint8_t*)_payload+26+1)<<8|((uint32_t)*((uint8_t*)_payload+26+2))<<16|((uint32_t)*((uint8_t*)_payload+26+3))<<24); _f.f; }))
#define DL_STAB_ATTITUDE_REF_FLOAT_ref_q(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+30)|*((uint8_t*)_payload+30+1)<<8|((uint32_t)*((uint8_t*)_payload+30+2))<<16|((uint32_t)*((uint8_t*)_payload+30+3))<<24); _f.f; }))
#define DL_STAB_ATTITUDE_REF_FLOAT_ref_r(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+34)|*((uint8_t*)_payload+34+1)<<8|((uint32_t)*((uint8_t*)_payload+34+2))<<16|((uint32_t)*((uint8_t*)_payload+34+3))<<24); _f.f; }))
#define DL_STAB_ATTITUDE_REF_FLOAT_ref_pd(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+38)|*((uint8_t*)_payload+38+1)<<8|((uint32_t)*((uint8_t*)_payload+38+2))<<16|((uint32_t)*((uint8_t*)_payload+38+3))<<24); _f.f; }))
#define DL_STAB_ATTITUDE_REF_FLOAT_ref_qd(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+42)|*((uint8_t*)_payload+42+1)<<8|((uint32_t)*((uint8_t*)_payload+42+2))<<16|((uint32_t)*((uint8_t*)_payload+42+3))<<24); _f.f; }))
#define DL_STAB_ATTITUDE_REF_FLOAT_ref_rd(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+46)|*((uint8_t*)_payload+46+1)<<8|((uint32_t)*((uint8_t*)_payload+46+2))<<16|((uint32_t)*((uint8_t*)_payload+46+3))<<24); _f.f; }))

#define DL_BOOZ2_CMD_cmd_roll(_payload) ((int32_t)(*((uint8_t*)_payload+2)|*((uint8_t*)_payload+2+1)<<8|((uint32_t)*((uint8_t*)_payload+2+2))<<16|((uint32_t)*((uint8_t*)_payload+2+3))<<24))
#define DL_BOOZ2_CMD_cmd_pitch(_payload) ((int32_t)(*((uint8_t*)_payload+6)|*((uint8_t*)_payload+6+1)<<8|((uint32_t)*((uint8_t*)_payload+6+2))<<16|((uint32_t)*((uint8_t*)_payload+6+3))<<24))
#define DL_BOOZ2_CMD_cmd_yaw(_payload) ((int32_t)(*((uint8_t*)_payload+10)|*((uint8_t*)_payload+10+1)<<8|((uint32_t)*((uint8_t*)_payload+10+2))<<16|((uint32_t)*((uint8_t*)_payload+10+3))<<24))
#define DL_BOOZ2_CMD_cmd_thrust(_payload) ((int32_t)(*((uint8_t*)_payload+14)|*((uint8_t*)_payload+14+1)<<8|((uint32_t)*((uint8_t*)_payload+14+2))<<16|((uint32_t)*((uint8_t*)_payload+14+3))<<24))

#define DL_GUIDANCE_pos_n(_payload) ((int32_t)(*((uint8_t*)_payload+2)|*((uint8_t*)_payload+2+1)<<8|((uint32_t)*((uint8_t*)_payload+2+2))<<16|((uint32_t)*((uint8_t*)_payload+2+3))<<24))
#define DL_GUIDANCE_pos_e(_payload) ((int32_t)(*((uint8_t*)_payload+6)|*((uint8_t*)_payload+6+1)<<8|((uint32_t)*((uint8_t*)_payload+6+2))<<16|((uint32_t)*((uint8_t*)_payload+6+3))<<24))
#define DL_GUIDANCE_sp_pos_n(_payload) ((int32_t)(*((uint8_t*)_payload+10)|*((uint8_t*)_payload+10+1)<<8|((uint32_t)*((uint8_t*)_payload+10+2))<<16|((uint32_t)*((uint8_t*)_payload+10+3))<<24))
#define DL_GUIDANCE_sp_pos_e(_payload) ((int32_t)(*((uint8_t*)_payload+14)|*((uint8_t*)_payload+14+1)<<8|((uint32_t)*((uint8_t*)_payload+14+2))<<16|((uint32_t)*((uint8_t*)_payload+14+3))<<24))

#define DL_VERT_LOOP_z_sp(_payload) ((int32_t)(*((uint8_t*)_payload+2)|*((uint8_t*)_payload+2+1)<<8|((uint32_t)*((uint8_t*)_payload+2+2))<<16|((uint32_t)*((uint8_t*)_payload+2+3))<<24))
#define DL_VERT_LOOP_zd_sp(_payload) ((int32_t)(*((uint8_t*)_payload+6)|*((uint8_t*)_payload+6+1)<<8|((uint32_t)*((uint8_t*)_payload+6+2))<<16|((uint32_t)*((uint8_t*)_payload+6+3))<<24))
#define DL_VERT_LOOP_est_z(_payload) ((int32_t)(*((uint8_t*)_payload+10)|*((uint8_t*)_payload+10+1)<<8|((uint32_t)*((uint8_t*)_payload+10+2))<<16|((uint32_t)*((uint8_t*)_payload+10+3))<<24))
#define DL_VERT_LOOP_est_zd(_payload) ((int32_t)(*((uint8_t*)_payload+14)|*((uint8_t*)_payload+14+1)<<8|((uint32_t)*((uint8_t*)_payload+14+2))<<16|((uint32_t)*((uint8_t*)_payload+14+3))<<24))
#define DL_VERT_LOOP_est_zdd(_payload) ((int32_t)(*((uint8_t*)_payload+18)|*((uint8_t*)_payload+18+1)<<8|((uint32_t)*((uint8_t*)_payload+18+2))<<16|((uint32_t)*((uint8_t*)_payload+18+3))<<24))
#define DL_VERT_LOOP_ref_z(_payload) ((int32_t)(*((uint8_t*)_payload+22)|*((uint8_t*)_payload+22+1)<<8|((uint32_t)*((uint8_t*)_payload+22+2))<<16|((uint32_t)*((uint8_t*)_payload+22+3))<<24))
#define DL_VERT_LOOP_ref_zd(_payload) ((int32_t)(*((uint8_t*)_payload+26)|*((uint8_t*)_payload+26+1)<<8|((uint32_t)*((uint8_t*)_payload+26+2))<<16|((uint32_t)*((uint8_t*)_payload+26+3))<<24))
#define DL_VERT_LOOP_ref_zdd(_payload) ((int32_t)(*((uint8_t*)_payload+30)|*((uint8_t*)_payload+30+1)<<8|((uint32_t)*((uint8_t*)_payload+30+2))<<16|((uint32_t)*((uint8_t*)_payload+30+3))<<24))
#define DL_VERT_LOOP_adp_inv_m(_payload) ((int32_t)(*((uint8_t*)_payload+34)|*((uint8_t*)_payload+34+1)<<8|((uint32_t)*((uint8_t*)_payload+34+2))<<16|((uint32_t)*((uint8_t*)_payload+34+3))<<24))
#define DL_VERT_LOOP_adp_cov(_payload) ((int32_t)(*((uint8_t*)_payload+38)|*((uint8_t*)_payload+38+1)<<8|((uint32_t)*((uint8_t*)_payload+38+2))<<16|((uint32_t)*((uint8_t*)_payload+38+3))<<24))
#define DL_VERT_LOOP_adp_meas(_payload) ((int32_t)(*((uint8_t*)_payload+42)|*((uint8_t*)_payload+42+1)<<8|((uint32_t)*((uint8_t*)_payload+42+2))<<16|((uint32_t)*((uint8_t*)_payload+42+3))<<24))
#define DL_VERT_LOOP_sum_err(_payload) ((int32_t)(*((uint8_t*)_payload+46)|*((uint8_t*)_payload+46+1)<<8|((uint32_t)*((uint8_t*)_payload+46+2))<<16|((uint32_t)*((uint8_t*)_payload+46+3))<<24))
#define DL_VERT_LOOP_ff_cmd(_payload) ((int32_t)(*((uint8_t*)_payload+50)|*((uint8_t*)_payload+50+1)<<8|((uint32_t)*((uint8_t*)_payload+50+2))<<16|((uint32_t)*((uint8_t*)_payload+50+3))<<24))
#define DL_VERT_LOOP_fb_cmd(_payload) ((int32_t)(*((uint8_t*)_payload+54)|*((uint8_t*)_payload+54+1)<<8|((uint32_t)*((uint8_t*)_payload+54+2))<<16|((uint32_t)*((uint8_t*)_payload+54+3))<<24))
#define DL_VERT_LOOP_delta_t(_payload) ((int32_t)(*((uint8_t*)_payload+58)|*((uint8_t*)_payload+58+1)<<8|((uint32_t)*((uint8_t*)_payload+58+2))<<16|((uint32_t)*((uint8_t*)_payload+58+3))<<24))

#define DL_HOVER_LOOP_sp_x(_payload) ((int32_t)(*((uint8_t*)_payload+2)|*((uint8_t*)_payload+2+1)<<8|((uint32_t)*((uint8_t*)_payload+2+2))<<16|((uint32_t)*((uint8_t*)_payload+2+3))<<24))
#define DL_HOVER_LOOP_sp_y(_payload) ((int32_t)(*((uint8_t*)_payload+6)|*((uint8_t*)_payload+6+1)<<8|((uint32_t)*((uint8_t*)_payload+6+2))<<16|((uint32_t)*((uint8_t*)_payload+6+3))<<24))
#define DL_HOVER_LOOP_est_x(_payload) ((int32_t)(*((uint8_t*)_payload+10)|*((uint8_t*)_payload+10+1)<<8|((uint32_t)*((uint8_t*)_payload+10+2))<<16|((uint32_t)*((uint8_t*)_payload+10+3))<<24))
#define DL_HOVER_LOOP_est_y(_payload) ((int32_t)(*((uint8_t*)_payload+14)|*((uint8_t*)_payload+14+1)<<8|((uint32_t)*((uint8_t*)_payload+14+2))<<16|((uint32_t)*((uint8_t*)_payload+14+3))<<24))
#define DL_HOVER_LOOP_est_xd(_payload) ((int32_t)(*((uint8_t*)_payload+18)|*((uint8_t*)_payload+18+1)<<8|((uint32_t)*((uint8_t*)_payload+18+2))<<16|((uint32_t)*((uint8_t*)_payload+18+3))<<24))
#define DL_HOVER_LOOP_est_yd(_payload) ((int32_t)(*((uint8_t*)_payload+22)|*((uint8_t*)_payload+22+1)<<8|((uint32_t)*((uint8_t*)_payload+22+2))<<16|((uint32_t)*((uint8_t*)_payload+22+3))<<24))
#define DL_HOVER_LOOP_est_xdd(_payload) ((int32_t)(*((uint8_t*)_payload+26)|*((uint8_t*)_payload+26+1)<<8|((uint32_t)*((uint8_t*)_payload+26+2))<<16|((uint32_t)*((uint8_t*)_payload+26+3))<<24))
#define DL_HOVER_LOOP_est_ydd(_payload) ((int32_t)(*((uint8_t*)_payload+30)|*((uint8_t*)_payload+30+1)<<8|((uint32_t)*((uint8_t*)_payload+30+2))<<16|((uint32_t)*((uint8_t*)_payload+30+3))<<24))
#define DL_HOVER_LOOP_err_x(_payload) ((int32_t)(*((uint8_t*)_payload+34)|*((uint8_t*)_payload+34+1)<<8|((uint32_t)*((uint8_t*)_payload+34+2))<<16|((uint32_t)*((uint8_t*)_payload+34+3))<<24))
#define DL_HOVER_LOOP_err_y(_payload) ((int32_t)(*((uint8_t*)_payload+38)|*((uint8_t*)_payload+38+1)<<8|((uint32_t)*((uint8_t*)_payload+38+2))<<16|((uint32_t)*((uint8_t*)_payload+38+3))<<24))
#define DL_HOVER_LOOP_err_xd(_payload) ((int32_t)(*((uint8_t*)_payload+42)|*((uint8_t*)_payload+42+1)<<8|((uint32_t)*((uint8_t*)_payload+42+2))<<16|((uint32_t)*((uint8_t*)_payload+42+3))<<24))
#define DL_HOVER_LOOP_err_yd(_payload) ((int32_t)(*((uint8_t*)_payload+46)|*((uint8_t*)_payload+46+1)<<8|((uint32_t)*((uint8_t*)_payload+46+2))<<16|((uint32_t)*((uint8_t*)_payload+46+3))<<24))
#define DL_HOVER_LOOP_err_sum_x(_payload) ((int32_t)(*((uint8_t*)_payload+50)|*((uint8_t*)_payload+50+1)<<8|((uint32_t)*((uint8_t*)_payload+50+2))<<16|((uint32_t)*((uint8_t*)_payload+50+3))<<24))
#define DL_HOVER_LOOP_err_sum_y(_payload) ((int32_t)(*((uint8_t*)_payload+54)|*((uint8_t*)_payload+54+1)<<8|((uint32_t)*((uint8_t*)_payload+54+2))<<16|((uint32_t)*((uint8_t*)_payload+54+3))<<24))
#define DL_HOVER_LOOP_err_nav_x(_payload) ((int32_t)(*((uint8_t*)_payload+58)|*((uint8_t*)_payload+58+1)<<8|((uint32_t)*((uint8_t*)_payload+58+2))<<16|((uint32_t)*((uint8_t*)_payload+58+3))<<24))
#define DL_HOVER_LOOP_err_nav_y(_payload) ((int32_t)(*((uint8_t*)_payload+62)|*((uint8_t*)_payload+62+1)<<8|((uint32_t)*((uint8_t*)_payload+62+2))<<16|((uint32_t)*((uint8_t*)_payload+62+3))<<24))
#define DL_HOVER_LOOP_cmd_x(_payload) ((int32_t)(*((uint8_t*)_payload+66)|*((uint8_t*)_payload+66+1)<<8|((uint32_t)*((uint8_t*)_payload+66+2))<<16|((uint32_t)*((uint8_t*)_payload+66+3))<<24))
#define DL_HOVER_LOOP_cmd_y(_payload) ((int32_t)(*((uint8_t*)_payload+70)|*((uint8_t*)_payload+70+1)<<8|((uint32_t)*((uint8_t*)_payload+70+2))<<16|((uint32_t)*((uint8_t*)_payload+70+3))<<24))
#define DL_HOVER_LOOP_cmd_phi(_payload) ((int32_t)(*((uint8_t*)_payload+74)|*((uint8_t*)_payload+74+1)<<8|((uint32_t)*((uint8_t*)_payload+74+2))<<16|((uint32_t)*((uint8_t*)_payload+74+3))<<24))
#define DL_HOVER_LOOP_cmd_theta(_payload) ((int32_t)(*((uint8_t*)_payload+78)|*((uint8_t*)_payload+78+1)<<8|((uint32_t)*((uint8_t*)_payload+78+2))<<16|((uint32_t)*((uint8_t*)_payload+78+3))<<24))
#define DL_HOVER_LOOP_cmd_psi(_payload) ((int32_t)(*((uint8_t*)_payload+82)|*((uint8_t*)_payload+82+1)<<8|((uint32_t)*((uint8_t*)_payload+82+2))<<16|((uint32_t)*((uint8_t*)_payload+82+3))<<24))

#define DL_BOOZ2_FP_east(_payload) ((int32_t)(*((uint8_t*)_payload+2)|*((uint8_t*)_payload+2+1)<<8|((uint32_t)*((uint8_t*)_payload+2+2))<<16|((uint32_t)*((uint8_t*)_payload+2+3))<<24))
#define DL_BOOZ2_FP_north(_payload) ((int32_t)(*((uint8_t*)_payload+6)|*((uint8_t*)_payload+6+1)<<8|((uint32_t)*((uint8_t*)_payload+6+2))<<16|((uint32_t)*((uint8_t*)_payload+6+3))<<24))
#define DL_BOOZ2_FP_up(_payload) ((int32_t)(*((uint8_t*)_payload+10)|*((uint8_t*)_payload+10+1)<<8|((uint32_t)*((uint8_t*)_payload+10+2))<<16|((uint32_t)*((uint8_t*)_payload+10+3))<<24))
#define DL_BOOZ2_FP_veast(_payload) ((int32_t)(*((uint8_t*)_payload+14)|*((uint8_t*)_payload+14+1)<<8|((uint32_t)*((uint8_t*)_payload+14+2))<<16|((uint32_t)*((uint8_t*)_payload+14+3))<<24))
#define DL_BOOZ2_FP_vnorth(_payload) ((int32_t)(*((uint8_t*)_payload+18)|*((uint8_t*)_payload+18+1)<<8|((uint32_t)*((uint8_t*)_payload+18+2))<<16|((uint32_t)*((uint8_t*)_payload+18+3))<<24))
#define DL_BOOZ2_FP_vup(_payload) ((int32_t)(*((uint8_t*)_payload+22)|*((uint8_t*)_payload+22+1)<<8|((uint32_t)*((uint8_t*)_payload+22+2))<<16|((uint32_t)*((uint8_t*)_payload+22+3))<<24))
#define DL_BOOZ2_FP_phi(_payload) ((int32_t)(*((uint8_t*)_payload+26)|*((uint8_t*)_payload+26+1)<<8|((uint32_t)*((uint8_t*)_payload+26+2))<<16|((uint32_t)*((uint8_t*)_payload+26+3))<<24))
#define DL_BOOZ2_FP_theta(_payload) ((int32_t)(*((uint8_t*)_payload+30)|*((uint8_t*)_payload+30+1)<<8|((uint32_t)*((uint8_t*)_payload+30+2))<<16|((uint32_t)*((uint8_t*)_payload+30+3))<<24))
#define DL_BOOZ2_FP_psi(_payload) ((int32_t)(*((uint8_t*)_payload+34)|*((uint8_t*)_payload+34+1)<<8|((uint32_t)*((uint8_t*)_payload+34+2))<<16|((uint32_t)*((uint8_t*)_payload+34+3))<<24))
#define DL_BOOZ2_FP_carrot_east(_payload) ((int32_t)(*((uint8_t*)_payload+38)|*((uint8_t*)_payload+38+1)<<8|((uint32_t)*((uint8_t*)_payload+38+2))<<16|((uint32_t)*((uint8_t*)_payload+38+3))<<24))
#define DL_BOOZ2_FP_carrot_north(_payload) ((int32_t)(*((uint8_t*)_payload+42)|*((uint8_t*)_payload+42+1)<<8|((uint32_t)*((uint8_t*)_payload+42+2))<<16|((uint32_t)*((uint8_t*)_payload+42+3))<<24))
#define DL_BOOZ2_FP_carrot_up(_payload) ((int32_t)(*((uint8_t*)_payload+46)|*((uint8_t*)_payload+46+1)<<8|((uint32_t)*((uint8_t*)_payload+46+2))<<16|((uint32_t)*((uint8_t*)_payload+46+3))<<24))
#define DL_BOOZ2_FP_carrot_psi(_payload) ((int32_t)(*((uint8_t*)_payload+50)|*((uint8_t*)_payload+50+1)<<8|((uint32_t)*((uint8_t*)_payload+50+2))<<16|((uint32_t)*((uint8_t*)_payload+50+3))<<24))
#define DL_BOOZ2_FP_thrust(_payload) ((int32_t)(*((uint8_t*)_payload+54)|*((uint8_t*)_payload+54+1)<<8|((uint32_t)*((uint8_t*)_payload+54+2))<<16|((uint32_t)*((uint8_t*)_payload+54+3))<<24))
#define DL_BOOZ2_FP_flight_time(_payload) ((uint16_t)(*((uint8_t*)_payload+58)|*((uint8_t*)_payload+58+1)<<8))

#define DL_BOOZ2_FMS_INFO_tbd(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+2)|*((uint8_t*)_payload+2+1)<<8|((uint32_t)*((uint8_t*)_payload+2+2))<<16|((uint32_t)*((uint8_t*)_payload+2+3))<<24); _f.f; }))

#define DL_GUIDANCE_H_REF_INT_sp_x(_payload) ((int32_t)(*((uint8_t*)_payload+2)|*((uint8_t*)_payload+2+1)<<8|((uint32_t)*((uint8_t*)_payload+2+2))<<16|((uint32_t)*((uint8_t*)_payload+2+3))<<24))
#define DL_GUIDANCE_H_REF_INT_ref_x(_payload) ((int32_t)(*((uint8_t*)_payload+6)|*((uint8_t*)_payload+6+1)<<8|((uint32_t)*((uint8_t*)_payload+6+2))<<16|((uint32_t)*((uint8_t*)_payload+6+3))<<24))
#define DL_GUIDANCE_H_REF_INT_ref_xd(_payload) ((int32_t)(*((uint8_t*)_payload+10)|*((uint8_t*)_payload+10+1)<<8|((uint32_t)*((uint8_t*)_payload+10+2))<<16|((uint32_t)*((uint8_t*)_payload+10+3))<<24))
#define DL_GUIDANCE_H_REF_INT_ref_xdd(_payload) ((int32_t)(*((uint8_t*)_payload+14)|*((uint8_t*)_payload+14+1)<<8|((uint32_t)*((uint8_t*)_payload+14+2))<<16|((uint32_t)*((uint8_t*)_payload+14+3))<<24))
#define DL_GUIDANCE_H_REF_INT_sp_y(_payload) ((int32_t)(*((uint8_t*)_payload+18)|*((uint8_t*)_payload+18+1)<<8|((uint32_t)*((uint8_t*)_payload+18+2))<<16|((uint32_t)*((uint8_t*)_payload+18+3))<<24))
#define DL_GUIDANCE_H_REF_INT_ref_y(_payload) ((int32_t)(*((uint8_t*)_payload+22)|*((uint8_t*)_payload+22+1)<<8|((uint32_t)*((uint8_t*)_payload+22+2))<<16|((uint32_t)*((uint8_t*)_payload+22+3))<<24))
#define DL_GUIDANCE_H_REF_INT_ref_yd(_payload) ((int32_t)(*((uint8_t*)_payload+26)|*((uint8_t*)_payload+26+1)<<8|((uint32_t)*((uint8_t*)_payload+26+2))<<16|((uint32_t)*((uint8_t*)_payload+26+3))<<24))
#define DL_GUIDANCE_H_REF_INT_ref_ydd(_payload) ((int32_t)(*((uint8_t*)_payload+30)|*((uint8_t*)_payload+30+1)<<8|((uint32_t)*((uint8_t*)_payload+30+2))<<16|((uint32_t)*((uint8_t*)_payload+30+3))<<24))

#define DL_BOOZ2_TUNE_HOVER_rc_roll(_payload) ((int16_t)(*((uint8_t*)_payload+2)|*((uint8_t*)_payload+2+1)<<8))
#define DL_BOOZ2_TUNE_HOVER_rc_pitch(_payload) ((int16_t)(*((uint8_t*)_payload+4)|*((uint8_t*)_payload+4+1)<<8))
#define DL_BOOZ2_TUNE_HOVER_rc_yaw(_payload) ((int16_t)(*((uint8_t*)_payload+6)|*((uint8_t*)_payload+6+1)<<8))
#define DL_BOOZ2_TUNE_HOVER_cmd_roll(_payload) ((int32_t)(*((uint8_t*)_payload+8)|*((uint8_t*)_payload+8+1)<<8|((uint32_t)*((uint8_t*)_payload+8+2))<<16|((uint32_t)*((uint8_t*)_payload+8+3))<<24))
#define DL_BOOZ2_TUNE_HOVER_cmd_pitch(_payload) ((int32_t)(*((uint8_t*)_payload+12)|*((uint8_t*)_payload+12+1)<<8|((uint32_t)*((uint8_t*)_payload+12+2))<<16|((uint32_t)*((uint8_t*)_payload+12+3))<<24))
#define DL_BOOZ2_TUNE_HOVER_cmd_yaw(_payload) ((int32_t)(*((uint8_t*)_payload+16)|*((uint8_t*)_payload+16+1)<<8|((uint32_t)*((uint8_t*)_payload+16+2))<<16|((uint32_t)*((uint8_t*)_payload+16+3))<<24))
#define DL_BOOZ2_TUNE_HOVER_cmd_thrust(_payload) ((int32_t)(*((uint8_t*)_payload+20)|*((uint8_t*)_payload+20+1)<<8|((uint32_t)*((uint8_t*)_payload+20+2))<<16|((uint32_t)*((uint8_t*)_payload+20+3))<<24))
#define DL_BOOZ2_TUNE_HOVER_imu_phi(_payload) ((int32_t)(*((uint8_t*)_payload+24)|*((uint8_t*)_payload+24+1)<<8|((uint32_t)*((uint8_t*)_payload+24+2))<<16|((uint32_t)*((uint8_t*)_payload+24+3))<<24))
#define DL_BOOZ2_TUNE_HOVER_imu_theta(_payload) ((int32_t)(*((uint8_t*)_payload+28)|*((uint8_t*)_payload+28+1)<<8|((uint32_t)*((uint8_t*)_payload+28+2))<<16|((uint32_t)*((uint8_t*)_payload+28+3))<<24))
#define DL_BOOZ2_TUNE_HOVER_imu_psi(_payload) ((int32_t)(*((uint8_t*)_payload+32)|*((uint8_t*)_payload+32+1)<<8|((uint32_t)*((uint8_t*)_payload+32+2))<<16|((uint32_t)*((uint8_t*)_payload+32+3))<<24))
#define DL_BOOZ2_TUNE_HOVER_body_phi(_payload) ((int32_t)(*((uint8_t*)_payload+36)|*((uint8_t*)_payload+36+1)<<8|((uint32_t)*((uint8_t*)_payload+36+2))<<16|((uint32_t)*((uint8_t*)_payload+36+3))<<24))
#define DL_BOOZ2_TUNE_HOVER_body_theta(_payload) ((int32_t)(*((uint8_t*)_payload+40)|*((uint8_t*)_payload+40+1)<<8|((uint32_t)*((uint8_t*)_payload+40+2))<<16|((uint32_t)*((uint8_t*)_payload+40+3))<<24))
#define DL_BOOZ2_TUNE_HOVER_body_psi(_payload) ((int32_t)(*((uint8_t*)_payload+44)|*((uint8_t*)_payload+44+1)<<8|((uint32_t)*((uint8_t*)_payload+44+2))<<16|((uint32_t)*((uint8_t*)_payload+44+3))<<24))

#define DL_INS_Z_baro_alt(_payload) ((int32_t)(*((uint8_t*)_payload+2)|*((uint8_t*)_payload+2+1)<<8|((uint32_t)*((uint8_t*)_payload+2+2))<<16|((uint32_t)*((uint8_t*)_payload+2+3))<<24))
#define DL_INS_Z_ins_z(_payload) ((int32_t)(*((uint8_t*)_payload+6)|*((uint8_t*)_payload+6+1)<<8|((uint32_t)*((uint8_t*)_payload+6+2))<<16|((uint32_t)*((uint8_t*)_payload+6+3))<<24))
#define DL_INS_Z_ins_zd(_payload) ((int32_t)(*((uint8_t*)_payload+10)|*((uint8_t*)_payload+10+1)<<8|((uint32_t)*((uint8_t*)_payload+10+2))<<16|((uint32_t)*((uint8_t*)_payload+10+3))<<24))
#define DL_INS_Z_ins_zdd(_payload) ((int32_t)(*((uint8_t*)_payload+14)|*((uint8_t*)_payload+14+1)<<8|((uint32_t)*((uint8_t*)_payload+14+2))<<16|((uint32_t)*((uint8_t*)_payload+14+3))<<24))

#define DL_INS_REF_ecef_x0(_payload) ((int32_t)(*((uint8_t*)_payload+2)|*((uint8_t*)_payload+2+1)<<8|((uint32_t)*((uint8_t*)_payload+2+2))<<16|((uint32_t)*((uint8_t*)_payload+2+3))<<24))
#define DL_INS_REF_ecef_y0(_payload) ((int32_t)(*((uint8_t*)_payload+6)|*((uint8_t*)_payload+6+1)<<8|((uint32_t)*((uint8_t*)_payload+6+2))<<16|((uint32_t)*((uint8_t*)_payload+6+3))<<24))
#define DL_INS_REF_ecef_z0(_payload) ((int32_t)(*((uint8_t*)_payload+10)|*((uint8_t*)_payload+10+1)<<8|((uint32_t)*((uint8_t*)_payload+10+2))<<16|((uint32_t)*((uint8_t*)_payload+10+3))<<24))
#define DL_INS_REF_lat0(_payload) ((int32_t)(*((uint8_t*)_payload+14)|*((uint8_t*)_payload+14+1)<<8|((uint32_t)*((uint8_t*)_payload+14+2))<<16|((uint32_t)*((uint8_t*)_payload+14+3))<<24))
#define DL_INS_REF_lon0(_payload) ((int32_t)(*((uint8_t*)_payload+18)|*((uint8_t*)_payload+18+1)<<8|((uint32_t)*((uint8_t*)_payload+18+2))<<16|((uint32_t)*((uint8_t*)_payload+18+3))<<24))
#define DL_INS_REF_alt0(_payload) ((int32_t)(*((uint8_t*)_payload+22)|*((uint8_t*)_payload+22+1)<<8|((uint32_t)*((uint8_t*)_payload+22+2))<<16|((uint32_t)*((uint8_t*)_payload+22+3))<<24))
#define DL_INS_REF_hmsl0(_payload) ((int32_t)(*((uint8_t*)_payload+26)|*((uint8_t*)_payload+26+1)<<8|((uint32_t)*((uint8_t*)_payload+26+2))<<16|((uint32_t)*((uint8_t*)_payload+26+3))<<24))
#define DL_INS_REF_baro_qfe(_payload) ((int32_t)(*((uint8_t*)_payload+30)|*((uint8_t*)_payload+30+1)<<8|((uint32_t)*((uint8_t*)_payload+30+2))<<16|((uint32_t)*((uint8_t*)_payload+30+3))<<24))

#define DL_BOOZ2_GPS_ecef_x(_payload) ((int32_t)(*((uint8_t*)_payload+2)|*((uint8_t*)_payload+2+1)<<8|((uint32_t)*((uint8_t*)_payload+2+2))<<16|((uint32_t)*((uint8_t*)_payload+2+3))<<24))
#define DL_BOOZ2_GPS_ecef_y(_payload) ((int32_t)(*((uint8_t*)_payload+6)|*((uint8_t*)_payload+6+1)<<8|((uint32_t)*((uint8_t*)_payload+6+2))<<16|((uint32_t)*((uint8_t*)_payload+6+3))<<24))
#define DL_BOOZ2_GPS_ecef_z(_payload) ((int32_t)(*((uint8_t*)_payload+10)|*((uint8_t*)_payload+10+1)<<8|((uint32_t)*((uint8_t*)_payload+10+2))<<16|((uint32_t)*((uint8_t*)_payload+10+3))<<24))
#define DL_BOOZ2_GPS_lat(_payload) ((int32_t)(*((uint8_t*)_payload+14)|*((uint8_t*)_payload+14+1)<<8|((uint32_t)*((uint8_t*)_payload+14+2))<<16|((uint32_t)*((uint8_t*)_payload+14+3))<<24))
#define DL_BOOZ2_GPS_lon(_payload) ((int32_t)(*((uint8_t*)_payload+18)|*((uint8_t*)_payload+18+1)<<8|((uint32_t)*((uint8_t*)_payload+18+2))<<16|((uint32_t)*((uint8_t*)_payload+18+3))<<24))
#define DL_BOOZ2_GPS_alt(_payload) ((int32_t)(*((uint8_t*)_payload+22)|*((uint8_t*)_payload+22+1)<<8|((uint32_t)*((uint8_t*)_payload+22+2))<<16|((uint32_t)*((uint8_t*)_payload+22+3))<<24))
#define DL_BOOZ2_GPS_ecef_xd(_payload) ((int32_t)(*((uint8_t*)_payload+26)|*((uint8_t*)_payload+26+1)<<8|((uint32_t)*((uint8_t*)_payload+26+2))<<16|((uint32_t)*((uint8_t*)_payload+26+3))<<24))
#define DL_BOOZ2_GPS_ecef_yd(_payload) ((int32_t)(*((uint8_t*)_payload+30)|*((uint8_t*)_payload+30+1)<<8|((uint32_t)*((uint8_t*)_payload+30+2))<<16|((uint32_t)*((uint8_t*)_payload+30+3))<<24))
#define DL_BOOZ2_GPS_ecef_zd(_payload) ((int32_t)(*((uint8_t*)_payload+34)|*((uint8_t*)_payload+34+1)<<8|((uint32_t)*((uint8_t*)_payload+34+2))<<16|((uint32_t)*((uint8_t*)_payload+34+3))<<24))
#define DL_BOOZ2_GPS_pacc(_payload) ((int32_t)(*((uint8_t*)_payload+38)|*((uint8_t*)_payload+38+1)<<8|((uint32_t)*((uint8_t*)_payload+38+2))<<16|((uint32_t)*((uint8_t*)_payload+38+3))<<24))
#define DL_BOOZ2_GPS_sacc(_payload) ((int32_t)(*((uint8_t*)_payload+42)|*((uint8_t*)_payload+42+1)<<8|((uint32_t)*((uint8_t*)_payload+42+2))<<16|((uint32_t)*((uint8_t*)_payload+42+3))<<24))
#define DL_BOOZ2_GPS_tow(_payload) ((uint32_t)(*((uint8_t*)_payload+46)|*((uint8_t*)_payload+46+1)<<8|((uint32_t)*((uint8_t*)_payload+46+2))<<16|((uint32_t)*((uint8_t*)_payload+46+3))<<24))
#define DL_BOOZ2_GPS_pdop(_payload) ((uint16_t)(*((uint8_t*)_payload+50)|*((uint8_t*)_payload+50+1)<<8))
#define DL_BOOZ2_GPS_numsv(_payload) ((uint8_t)(*((uint8_t*)_payload+52)))
#define DL_BOOZ2_GPS_fix(_payload) ((uint8_t)(*((uint8_t*)_payload+53)))

#define DL_BOOZ2_AHRS_EULER_imu_phi(_payload) ((int32_t)(*((uint8_t*)_payload+2)|*((uint8_t*)_payload+2+1)<<8|((uint32_t)*((uint8_t*)_payload+2+2))<<16|((uint32_t)*((uint8_t*)_payload+2+3))<<24))
#define DL_BOOZ2_AHRS_EULER_imu_theta(_payload) ((int32_t)(*((uint8_t*)_payload+6)|*((uint8_t*)_payload+6+1)<<8|((uint32_t)*((uint8_t*)_payload+6+2))<<16|((uint32_t)*((uint8_t*)_payload+6+3))<<24))
#define DL_BOOZ2_AHRS_EULER_imu_psi(_payload) ((int32_t)(*((uint8_t*)_payload+10)|*((uint8_t*)_payload+10+1)<<8|((uint32_t)*((uint8_t*)_payload+10+2))<<16|((uint32_t)*((uint8_t*)_payload+10+3))<<24))
#define DL_BOOZ2_AHRS_EULER_body_phi(_payload) ((int32_t)(*((uint8_t*)_payload+14)|*((uint8_t*)_payload+14+1)<<8|((uint32_t)*((uint8_t*)_payload+14+2))<<16|((uint32_t)*((uint8_t*)_payload+14+3))<<24))
#define DL_BOOZ2_AHRS_EULER_body_theta(_payload) ((int32_t)(*((uint8_t*)_payload+18)|*((uint8_t*)_payload+18+1)<<8|((uint32_t)*((uint8_t*)_payload+18+2))<<16|((uint32_t)*((uint8_t*)_payload+18+3))<<24))
#define DL_BOOZ2_AHRS_EULER_body_psi(_payload) ((int32_t)(*((uint8_t*)_payload+22)|*((uint8_t*)_payload+22+1)<<8|((uint32_t)*((uint8_t*)_payload+22+2))<<16|((uint32_t)*((uint8_t*)_payload+22+3))<<24))

#define DL_BOOZ2_AHRS_QUAT_imu_qi(_payload) ((int32_t)(*((uint8_t*)_payload+2)|*((uint8_t*)_payload+2+1)<<8|((uint32_t)*((uint8_t*)_payload+2+2))<<16|((uint32_t)*((uint8_t*)_payload+2+3))<<24))
#define DL_BOOZ2_AHRS_QUAT_imu_qx(_payload) ((int32_t)(*((uint8_t*)_payload+6)|*((uint8_t*)_payload+6+1)<<8|((uint32_t)*((uint8_t*)_payload+6+2))<<16|((uint32_t)*((uint8_t*)_payload+6+3))<<24))
#define DL_BOOZ2_AHRS_QUAT_imu_qy(_payload) ((int32_t)(*((uint8_t*)_payload+10)|*((uint8_t*)_payload+10+1)<<8|((uint32_t)*((uint8_t*)_payload+10+2))<<16|((uint32_t)*((uint8_t*)_payload+10+3))<<24))
#define DL_BOOZ2_AHRS_QUAT_imu_qz(_payload) ((int32_t)(*((uint8_t*)_payload+14)|*((uint8_t*)_payload+14+1)<<8|((uint32_t)*((uint8_t*)_payload+14+2))<<16|((uint32_t)*((uint8_t*)_payload+14+3))<<24))
#define DL_BOOZ2_AHRS_QUAT_body_qi(_payload) ((int32_t)(*((uint8_t*)_payload+18)|*((uint8_t*)_payload+18+1)<<8|((uint32_t)*((uint8_t*)_payload+18+2))<<16|((uint32_t)*((uint8_t*)_payload+18+3))<<24))
#define DL_BOOZ2_AHRS_QUAT_body_qx(_payload) ((int32_t)(*((uint8_t*)_payload+22)|*((uint8_t*)_payload+22+1)<<8|((uint32_t)*((uint8_t*)_payload+22+2))<<16|((uint32_t)*((uint8_t*)_payload+22+3))<<24))
#define DL_BOOZ2_AHRS_QUAT_body_qy(_payload) ((int32_t)(*((uint8_t*)_payload+26)|*((uint8_t*)_payload+26+1)<<8|((uint32_t)*((uint8_t*)_payload+26+2))<<16|((uint32_t)*((uint8_t*)_payload+26+3))<<24))
#define DL_BOOZ2_AHRS_QUAT_body_qz(_payload) ((int32_t)(*((uint8_t*)_payload+30)|*((uint8_t*)_payload+30+1)<<8|((uint32_t)*((uint8_t*)_payload+30+2))<<16|((uint32_t)*((uint8_t*)_payload+30+3))<<24))

#define DL_BOOZ2_AHRS_RMAT_imu_m00(_payload) ((int32_t)(*((uint8_t*)_payload+2)|*((uint8_t*)_payload+2+1)<<8|((uint32_t)*((uint8_t*)_payload+2+2))<<16|((uint32_t)*((uint8_t*)_payload+2+3))<<24))
#define DL_BOOZ2_AHRS_RMAT_imu_m01(_payload) ((int32_t)(*((uint8_t*)_payload+6)|*((uint8_t*)_payload+6+1)<<8|((uint32_t)*((uint8_t*)_payload+6+2))<<16|((uint32_t)*((uint8_t*)_payload+6+3))<<24))
#define DL_BOOZ2_AHRS_RMAT_imu_m02(_payload) ((int32_t)(*((uint8_t*)_payload+10)|*((uint8_t*)_payload+10+1)<<8|((uint32_t)*((uint8_t*)_payload+10+2))<<16|((uint32_t)*((uint8_t*)_payload+10+3))<<24))
#define DL_BOOZ2_AHRS_RMAT_imu_m10(_payload) ((int32_t)(*((uint8_t*)_payload+14)|*((uint8_t*)_payload+14+1)<<8|((uint32_t)*((uint8_t*)_payload+14+2))<<16|((uint32_t)*((uint8_t*)_payload+14+3))<<24))
#define DL_BOOZ2_AHRS_RMAT_imu_m11(_payload) ((int32_t)(*((uint8_t*)_payload+18)|*((uint8_t*)_payload+18+1)<<8|((uint32_t)*((uint8_t*)_payload+18+2))<<16|((uint32_t)*((uint8_t*)_payload+18+3))<<24))
#define DL_BOOZ2_AHRS_RMAT_imu_m12(_payload) ((int32_t)(*((uint8_t*)_payload+22)|*((uint8_t*)_payload+22+1)<<8|((uint32_t)*((uint8_t*)_payload+22+2))<<16|((uint32_t)*((uint8_t*)_payload+22+3))<<24))
#define DL_BOOZ2_AHRS_RMAT_imu_m20(_payload) ((int32_t)(*((uint8_t*)_payload+26)|*((uint8_t*)_payload+26+1)<<8|((uint32_t)*((uint8_t*)_payload+26+2))<<16|((uint32_t)*((uint8_t*)_payload+26+3))<<24))
#define DL_BOOZ2_AHRS_RMAT_imu_m21(_payload) ((int32_t)(*((uint8_t*)_payload+30)|*((uint8_t*)_payload+30+1)<<8|((uint32_t)*((uint8_t*)_payload+30+2))<<16|((uint32_t)*((uint8_t*)_payload+30+3))<<24))
#define DL_BOOZ2_AHRS_RMAT_imu_m22(_payload) ((int32_t)(*((uint8_t*)_payload+34)|*((uint8_t*)_payload+34+1)<<8|((uint32_t)*((uint8_t*)_payload+34+2))<<16|((uint32_t)*((uint8_t*)_payload+34+3))<<24))
#define DL_BOOZ2_AHRS_RMAT_body_m00(_payload) ((int32_t)(*((uint8_t*)_payload+38)|*((uint8_t*)_payload+38+1)<<8|((uint32_t)*((uint8_t*)_payload+38+2))<<16|((uint32_t)*((uint8_t*)_payload+38+3))<<24))
#define DL_BOOZ2_AHRS_RMAT_body_m01(_payload) ((int32_t)(*((uint8_t*)_payload+42)|*((uint8_t*)_payload+42+1)<<8|((uint32_t)*((uint8_t*)_payload+42+2))<<16|((uint32_t)*((uint8_t*)_payload+42+3))<<24))
#define DL_BOOZ2_AHRS_RMAT_body_m02(_payload) ((int32_t)(*((uint8_t*)_payload+46)|*((uint8_t*)_payload+46+1)<<8|((uint32_t)*((uint8_t*)_payload+46+2))<<16|((uint32_t)*((uint8_t*)_payload+46+3))<<24))
#define DL_BOOZ2_AHRS_RMAT_body_m10(_payload) ((int32_t)(*((uint8_t*)_payload+50)|*((uint8_t*)_payload+50+1)<<8|((uint32_t)*((uint8_t*)_payload+50+2))<<16|((uint32_t)*((uint8_t*)_payload+50+3))<<24))
#define DL_BOOZ2_AHRS_RMAT_body_m11(_payload) ((int32_t)(*((uint8_t*)_payload+54)|*((uint8_t*)_payload+54+1)<<8|((uint32_t)*((uint8_t*)_payload+54+2))<<16|((uint32_t)*((uint8_t*)_payload+54+3))<<24))
#define DL_BOOZ2_AHRS_RMAT_body_m12(_payload) ((int32_t)(*((uint8_t*)_payload+58)|*((uint8_t*)_payload+58+1)<<8|((uint32_t)*((uint8_t*)_payload+58+2))<<16|((uint32_t)*((uint8_t*)_payload+58+3))<<24))
#define DL_BOOZ2_AHRS_RMAT_body_m20(_payload) ((int32_t)(*((uint8_t*)_payload+62)|*((uint8_t*)_payload+62+1)<<8|((uint32_t)*((uint8_t*)_payload+62+2))<<16|((uint32_t)*((uint8_t*)_payload+62+3))<<24))
#define DL_BOOZ2_AHRS_RMAT_body_m21(_payload) ((int32_t)(*((uint8_t*)_payload+66)|*((uint8_t*)_payload+66+1)<<8|((uint32_t)*((uint8_t*)_payload+66+2))<<16|((uint32_t)*((uint8_t*)_payload+66+3))<<24))
#define DL_BOOZ2_AHRS_RMAT_body_m22(_payload) ((int32_t)(*((uint8_t*)_payload+70)|*((uint8_t*)_payload+70+1)<<8|((uint32_t)*((uint8_t*)_payload+70+2))<<16|((uint32_t)*((uint8_t*)_payload+70+3))<<24))

#define DL_ROTORCRAFT_NAV_STATUS_block_time(_payload) ((uint16_t)(*((uint8_t*)_payload+2)|*((uint8_t*)_payload+2+1)<<8))
#define DL_ROTORCRAFT_NAV_STATUS_stage_time(_payload) ((uint16_t)(*((uint8_t*)_payload+4)|*((uint8_t*)_payload+4+1)<<8))
#define DL_ROTORCRAFT_NAV_STATUS_cur_block(_payload) ((uint8_t)(*((uint8_t*)_payload+6)))
#define DL_ROTORCRAFT_NAV_STATUS_cur_stage(_payload) ((uint8_t)(*((uint8_t*)_payload+7)))
#define DL_ROTORCRAFT_NAV_STATUS_horizontal_mode(_payload) ((uint8_t)(*((uint8_t*)_payload+8)))

#define DL_BOOZ2_RADIO_CONTROL_roll(_payload) ((int16_t)(*((uint8_t*)_payload+2)|*((uint8_t*)_payload+2+1)<<8))
#define DL_BOOZ2_RADIO_CONTROL_pitch(_payload) ((int16_t)(*((uint8_t*)_payload+4)|*((uint8_t*)_payload+4+1)<<8))
#define DL_BOOZ2_RADIO_CONTROL_yaw(_payload) ((int16_t)(*((uint8_t*)_payload+6)|*((uint8_t*)_payload+6+1)<<8))
#define DL_BOOZ2_RADIO_CONTROL_throttle(_payload) ((int16_t)(*((uint8_t*)_payload+8)|*((uint8_t*)_payload+8+1)<<8))
#define DL_BOOZ2_RADIO_CONTROL_mode(_payload) ((int16_t)(*((uint8_t*)_payload+10)|*((uint8_t*)_payload+10+1)<<8))
#define DL_BOOZ2_RADIO_CONTROL_kill(_payload) ((int16_t)(*((uint8_t*)_payload+12)|*((uint8_t*)_payload+12+1)<<8))
#define DL_BOOZ2_RADIO_CONTROL_status(_payload) ((uint8_t)(*((uint8_t*)_payload+14)))

#define DL_BOOZ_BARO_RAW_offset(_payload) ((uint16_t)(*((uint8_t*)_payload+2)|*((uint8_t*)_payload+2+1)<<8))
#define DL_BOOZ_BARO_RAW_value(_payload) ((uint16_t)(*((uint8_t*)_payload+4)|*((uint8_t*)_payload+4+1)<<8))
#define DL_BOOZ_BARO_RAW_value_filtered(_payload) ((uint16_t)(*((uint8_t*)_payload+6)|*((uint8_t*)_payload+6+1)<<8))

#define DL_VFF_measure(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+2)|*((uint8_t*)_payload+2+1)<<8|((uint32_t)*((uint8_t*)_payload+2+2))<<16|((uint32_t)*((uint8_t*)_payload+2+3))<<24); _f.f; }))
#define DL_VFF_z(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+6)|*((uint8_t*)_payload+6+1)<<8|((uint32_t)*((uint8_t*)_payload+6+2))<<16|((uint32_t)*((uint8_t*)_payload+6+3))<<24); _f.f; }))
#define DL_VFF_zd(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+10)|*((uint8_t*)_payload+10+1)<<8|((uint32_t)*((uint8_t*)_payload+10+2))<<16|((uint32_t)*((uint8_t*)_payload+10+3))<<24); _f.f; }))
#define DL_VFF_bias(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+14)|*((uint8_t*)_payload+14+1)<<8|((uint32_t)*((uint8_t*)_payload+14+2))<<16|((uint32_t)*((uint8_t*)_payload+14+3))<<24); _f.f; }))
#define DL_VFF_Pzz(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+18)|*((uint8_t*)_payload+18+1)<<8|((uint32_t)*((uint8_t*)_payload+18+2))<<16|((uint32_t)*((uint8_t*)_payload+18+3))<<24); _f.f; }))
#define DL_VFF_Pzdzd(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+22)|*((uint8_t*)_payload+22+1)<<8|((uint32_t)*((uint8_t*)_payload+22+2))<<16|((uint32_t)*((uint8_t*)_payload+22+3))<<24); _f.f; }))
#define DL_VFF_Pbb(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+26)|*((uint8_t*)_payload+26+1)<<8|((uint32_t)*((uint8_t*)_payload+26+2))<<16|((uint32_t)*((uint8_t*)_payload+26+3))<<24); _f.f; }))

#define DL_BOOZ2_TUNE_FF_fb_rms(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+2)|*((uint8_t*)_payload+2+1)<<8|((uint32_t)*((uint8_t*)_payload+2+2))<<16|((uint32_t)*((uint8_t*)_payload+2+3))<<24); _f.f; }))
#define DL_BOOZ2_TUNE_FF_dg(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+6)|*((uint8_t*)_payload+6+1)<<8|((uint32_t)*((uint8_t*)_payload+6+2))<<16|((uint32_t)*((uint8_t*)_payload+6+3))<<24); _f.f; }))
#define DL_BOOZ2_TUNE_FF_g(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+10)|*((uint8_t*)_payload+10+1)<<8|((uint32_t)*((uint8_t*)_payload+10+2))<<16|((uint32_t)*((uint8_t*)_payload+10+3))<<24); _f.f; }))

#define DL_HFF_x(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+2)|*((uint8_t*)_payload+2+1)<<8|((uint32_t)*((uint8_t*)_payload+2+2))<<16|((uint32_t)*((uint8_t*)_payload+2+3))<<24); _f.f; }))
#define DL_HFF_y(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+6)|*((uint8_t*)_payload+6+1)<<8|((uint32_t)*((uint8_t*)_payload+6+2))<<16|((uint32_t)*((uint8_t*)_payload+6+3))<<24); _f.f; }))
#define DL_HFF_xd(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+10)|*((uint8_t*)_payload+10+1)<<8|((uint32_t)*((uint8_t*)_payload+10+2))<<16|((uint32_t)*((uint8_t*)_payload+10+3))<<24); _f.f; }))
#define DL_HFF_yd(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+14)|*((uint8_t*)_payload+14+1)<<8|((uint32_t)*((uint8_t*)_payload+14+2))<<16|((uint32_t)*((uint8_t*)_payload+14+3))<<24); _f.f; }))
#define DL_HFF_xdd(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+18)|*((uint8_t*)_payload+18+1)<<8|((uint32_t)*((uint8_t*)_payload+18+2))<<16|((uint32_t)*((uint8_t*)_payload+18+3))<<24); _f.f; }))
#define DL_HFF_ydd(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+22)|*((uint8_t*)_payload+22+1)<<8|((uint32_t)*((uint8_t*)_payload+22+2))<<16|((uint32_t)*((uint8_t*)_payload+22+3))<<24); _f.f; }))

#define DL_HFF_DBG_x_measure(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+2)|*((uint8_t*)_payload+2+1)<<8|((uint32_t)*((uint8_t*)_payload+2+2))<<16|((uint32_t)*((uint8_t*)_payload+2+3))<<24); _f.f; }))
#define DL_HFF_DBG_y_measure(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+6)|*((uint8_t*)_payload+6+1)<<8|((uint32_t)*((uint8_t*)_payload+6+2))<<16|((uint32_t)*((uint8_t*)_payload+6+3))<<24); _f.f; }))
#define DL_HFF_DBG_yd_measure(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+10)|*((uint8_t*)_payload+10+1)<<8|((uint32_t)*((uint8_t*)_payload+10+2))<<16|((uint32_t)*((uint8_t*)_payload+10+3))<<24); _f.f; }))
#define DL_HFF_DBG_xd_measure(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+14)|*((uint8_t*)_payload+14+1)<<8|((uint32_t)*((uint8_t*)_payload+14+2))<<16|((uint32_t)*((uint8_t*)_payload+14+3))<<24); _f.f; }))
#define DL_HFF_DBG_Pxx(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+18)|*((uint8_t*)_payload+18+1)<<8|((uint32_t)*((uint8_t*)_payload+18+2))<<16|((uint32_t)*((uint8_t*)_payload+18+3))<<24); _f.f; }))
#define DL_HFF_DBG_Pyy(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+22)|*((uint8_t*)_payload+22+1)<<8|((uint32_t)*((uint8_t*)_payload+22+2))<<16|((uint32_t)*((uint8_t*)_payload+22+3))<<24); _f.f; }))
#define DL_HFF_DBG_Pxdxd(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+26)|*((uint8_t*)_payload+26+1)<<8|((uint32_t)*((uint8_t*)_payload+26+2))<<16|((uint32_t)*((uint8_t*)_payload+26+3))<<24); _f.f; }))
#define DL_HFF_DBG_Pydyd(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+30)|*((uint8_t*)_payload+30+1)<<8|((uint32_t)*((uint8_t*)_payload+30+2))<<16|((uint32_t)*((uint8_t*)_payload+30+3))<<24); _f.f; }))

#define DL_HFF_GPS_lag_cnt(_payload) ((uint16_t)(*((uint8_t*)_payload+2)|*((uint8_t*)_payload+2+1)<<8))
#define DL_HFF_GPS_lag_cnt_err(_payload) ((int16_t)(*((uint8_t*)_payload+4)|*((uint8_t*)_payload+4+1)<<8))
#define DL_HFF_GPS_save_cnt(_payload) ((int16_t)(*((uint8_t*)_payload+6)|*((uint8_t*)_payload+6+1)<<8))

#define DL_BOOZ2_SONAR_front(_payload) ((uint16_t)(*((uint8_t*)_payload+2)|*((uint8_t*)_payload+2+1)<<8))
#define DL_BOOZ2_SONAR_back(_payload) ((uint16_t)(*((uint8_t*)_payload+4)|*((uint8_t*)_payload+4+1)<<8))
#define DL_BOOZ2_SONAR_right(_payload) ((uint16_t)(*((uint8_t*)_payload+6)|*((uint8_t*)_payload+6+1)<<8))
#define DL_BOOZ2_SONAR_left(_payload) ((uint16_t)(*((uint8_t*)_payload+8)|*((uint8_t*)_payload+8+1)<<8))

#define DL_BOOZ2_CAM_tilt(_payload) ((int16_t)(*((uint8_t*)_payload+2)|*((uint8_t*)_payload+2+1)<<8))
#define DL_BOOZ2_CAM_pan(_payload) ((int16_t)(*((uint8_t*)_payload+4)|*((uint8_t*)_payload+4+1)<<8))

#define DL_BOOZ2_AHRS_REF_QUAT_ref_qi(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+2)|*((uint8_t*)_payload+2+1)<<8|((uint32_t)*((uint8_t*)_payload+2+2))<<16|((uint32_t)*((uint8_t*)_payload+2+3))<<24); _f.f; }))
#define DL_BOOZ2_AHRS_REF_QUAT_ref_qx(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+6)|*((uint8_t*)_payload+6+1)<<8|((uint32_t)*((uint8_t*)_payload+6+2))<<16|((uint32_t)*((uint8_t*)_payload+6+3))<<24); _f.f; }))
#define DL_BOOZ2_AHRS_REF_QUAT_ref_qy(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+10)|*((uint8_t*)_payload+10+1)<<8|((uint32_t)*((uint8_t*)_payload+10+2))<<16|((uint32_t)*((uint8_t*)_payload+10+3))<<24); _f.f; }))
#define DL_BOOZ2_AHRS_REF_QUAT_ref_qz(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+14)|*((uint8_t*)_payload+14+1)<<8|((uint32_t)*((uint8_t*)_payload+14+2))<<16|((uint32_t)*((uint8_t*)_payload+14+3))<<24); _f.f; }))
#define DL_BOOZ2_AHRS_REF_QUAT_body_qi(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+18)|*((uint8_t*)_payload+18+1)<<8|((uint32_t)*((uint8_t*)_payload+18+2))<<16|((uint32_t)*((uint8_t*)_payload+18+3))<<24); _f.f; }))
#define DL_BOOZ2_AHRS_REF_QUAT_body_qx(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+22)|*((uint8_t*)_payload+22+1)<<8|((uint32_t)*((uint8_t*)_payload+22+2))<<16|((uint32_t)*((uint8_t*)_payload+22+3))<<24); _f.f; }))
#define DL_BOOZ2_AHRS_REF_QUAT_body_qy(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+26)|*((uint8_t*)_payload+26+1)<<8|((uint32_t)*((uint8_t*)_payload+26+2))<<16|((uint32_t)*((uint8_t*)_payload+26+3))<<24); _f.f; }))
#define DL_BOOZ2_AHRS_REF_QUAT_body_qz(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+30)|*((uint8_t*)_payload+30+1)<<8|((uint32_t)*((uint8_t*)_payload+30+2))<<16|((uint32_t)*((uint8_t*)_payload+30+3))<<24); _f.f; }))

#define DL_EKF7_XHAT_c(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+2)|*((uint8_t*)_payload+2+1)<<8|((uint32_t)*((uint8_t*)_payload+2+2))<<16|((uint32_t)*((uint8_t*)_payload+2+3))<<24); _f.f; }))
#define DL_EKF7_XHAT_s1(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+6)|*((uint8_t*)_payload+6+1)<<8|((uint32_t)*((uint8_t*)_payload+6+2))<<16|((uint32_t)*((uint8_t*)_payload+6+3))<<24); _f.f; }))
#define DL_EKF7_XHAT_s2(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+10)|*((uint8_t*)_payload+10+1)<<8|((uint32_t)*((uint8_t*)_payload+10+2))<<16|((uint32_t)*((uint8_t*)_payload+10+3))<<24); _f.f; }))
#define DL_EKF7_XHAT_s3(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+14)|*((uint8_t*)_payload+14+1)<<8|((uint32_t)*((uint8_t*)_payload+14+2))<<16|((uint32_t)*((uint8_t*)_payload+14+3))<<24); _f.f; }))
#define DL_EKF7_XHAT_p(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+18)|*((uint8_t*)_payload+18+1)<<8|((uint32_t)*((uint8_t*)_payload+18+2))<<16|((uint32_t)*((uint8_t*)_payload+18+3))<<24); _f.f; }))
#define DL_EKF7_XHAT_q(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+22)|*((uint8_t*)_payload+22+1)<<8|((uint32_t)*((uint8_t*)_payload+22+2))<<16|((uint32_t)*((uint8_t*)_payload+22+3))<<24); _f.f; }))
#define DL_EKF7_XHAT_r(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+26)|*((uint8_t*)_payload+26+1)<<8|((uint32_t)*((uint8_t*)_payload+26+2))<<16|((uint32_t)*((uint8_t*)_payload+26+3))<<24); _f.f; }))
#define DL_EKF7_XHAT_bp(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+30)|*((uint8_t*)_payload+30+1)<<8|((uint32_t)*((uint8_t*)_payload+30+2))<<16|((uint32_t)*((uint8_t*)_payload+30+3))<<24); _f.f; }))
#define DL_EKF7_XHAT_bq(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+34)|*((uint8_t*)_payload+34+1)<<8|((uint32_t)*((uint8_t*)_payload+34+2))<<16|((uint32_t)*((uint8_t*)_payload+34+3))<<24); _f.f; }))
#define DL_EKF7_XHAT_br(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+38)|*((uint8_t*)_payload+38+1)<<8|((uint32_t)*((uint8_t*)_payload+38+2))<<16|((uint32_t)*((uint8_t*)_payload+38+3))<<24); _f.f; }))

#define DL_EKF7_Y_timecount(_payload) ((uint16_t)(*((uint8_t*)_payload+2)|*((uint8_t*)_payload+2+1)<<8))
#define DL_EKF7_Y_g1(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+4)|*((uint8_t*)_payload+4+1)<<8|((uint32_t)*((uint8_t*)_payload+4+2))<<16|((uint32_t)*((uint8_t*)_payload+4+3))<<24); _f.f; }))
#define DL_EKF7_Y_g2(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+8)|*((uint8_t*)_payload+8+1)<<8|((uint32_t)*((uint8_t*)_payload+8+2))<<16|((uint32_t)*((uint8_t*)_payload+8+3))<<24); _f.f; }))
#define DL_EKF7_Y_g3(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+12)|*((uint8_t*)_payload+12+1)<<8|((uint32_t)*((uint8_t*)_payload+12+2))<<16|((uint32_t)*((uint8_t*)_payload+12+3))<<24); _f.f; }))
#define DL_EKF7_Y_m1(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+16)|*((uint8_t*)_payload+16+1)<<8|((uint32_t)*((uint8_t*)_payload+16+2))<<16|((uint32_t)*((uint8_t*)_payload+16+3))<<24); _f.f; }))
#define DL_EKF7_Y_m2(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+20)|*((uint8_t*)_payload+20+1)<<8|((uint32_t)*((uint8_t*)_payload+20+2))<<16|((uint32_t)*((uint8_t*)_payload+20+3))<<24); _f.f; }))
#define DL_EKF7_Y_m3(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+24)|*((uint8_t*)_payload+24+1)<<8|((uint32_t)*((uint8_t*)_payload+24+2))<<16|((uint32_t)*((uint8_t*)_payload+24+3))<<24); _f.f; }))
#define DL_EKF7_Y_p(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+28)|*((uint8_t*)_payload+28+1)<<8|((uint32_t)*((uint8_t*)_payload+28+2))<<16|((uint32_t)*((uint8_t*)_payload+28+3))<<24); _f.f; }))
#define DL_EKF7_Y_q(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+32)|*((uint8_t*)_payload+32+1)<<8|((uint32_t)*((uint8_t*)_payload+32+2))<<16|((uint32_t)*((uint8_t*)_payload+32+3))<<24); _f.f; }))
#define DL_EKF7_Y_r(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+36)|*((uint8_t*)_payload+36+1)<<8|((uint32_t)*((uint8_t*)_payload+36+2))<<16|((uint32_t)*((uint8_t*)_payload+36+3))<<24); _f.f; }))

#define DL_EKF7_P_DIAG_c(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+2)|*((uint8_t*)_payload+2+1)<<8|((uint32_t)*((uint8_t*)_payload+2+2))<<16|((uint32_t)*((uint8_t*)_payload+2+3))<<24); _f.f; }))
#define DL_EKF7_P_DIAG_s1(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+6)|*((uint8_t*)_payload+6+1)<<8|((uint32_t)*((uint8_t*)_payload+6+2))<<16|((uint32_t)*((uint8_t*)_payload+6+3))<<24); _f.f; }))
#define DL_EKF7_P_DIAG_s2(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+10)|*((uint8_t*)_payload+10+1)<<8|((uint32_t)*((uint8_t*)_payload+10+2))<<16|((uint32_t)*((uint8_t*)_payload+10+3))<<24); _f.f; }))
#define DL_EKF7_P_DIAG_s3(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+14)|*((uint8_t*)_payload+14+1)<<8|((uint32_t)*((uint8_t*)_payload+14+2))<<16|((uint32_t)*((uint8_t*)_payload+14+3))<<24); _f.f; }))
#define DL_EKF7_P_DIAG_p(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+18)|*((uint8_t*)_payload+18+1)<<8|((uint32_t)*((uint8_t*)_payload+18+2))<<16|((uint32_t)*((uint8_t*)_payload+18+3))<<24); _f.f; }))
#define DL_EKF7_P_DIAG_q(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+22)|*((uint8_t*)_payload+22+1)<<8|((uint32_t)*((uint8_t*)_payload+22+2))<<16|((uint32_t)*((uint8_t*)_payload+22+3))<<24); _f.f; }))
#define DL_EKF7_P_DIAG_r(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+26)|*((uint8_t*)_payload+26+1)<<8|((uint32_t)*((uint8_t*)_payload+26+2))<<16|((uint32_t)*((uint8_t*)_payload+26+3))<<24); _f.f; }))
#define DL_EKF7_P_DIAG_bp(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+30)|*((uint8_t*)_payload+30+1)<<8|((uint32_t)*((uint8_t*)_payload+30+2))<<16|((uint32_t)*((uint8_t*)_payload+30+3))<<24); _f.f; }))
#define DL_EKF7_P_DIAG_bq(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+34)|*((uint8_t*)_payload+34+1)<<8|((uint32_t)*((uint8_t*)_payload+34+2))<<16|((uint32_t)*((uint8_t*)_payload+34+3))<<24); _f.f; }))
#define DL_EKF7_P_DIAG_br(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+38)|*((uint8_t*)_payload+38+1)<<8|((uint32_t)*((uint8_t*)_payload+38+2))<<16|((uint32_t)*((uint8_t*)_payload+38+3))<<24); _f.f; }))

#define DL_AHRS_EULER_phi(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+2)|*((uint8_t*)_payload+2+1)<<8|((uint32_t)*((uint8_t*)_payload+2+2))<<16|((uint32_t)*((uint8_t*)_payload+2+3))<<24); _f.f; }))
#define DL_AHRS_EULER_theta(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+6)|*((uint8_t*)_payload+6+1)<<8|((uint32_t)*((uint8_t*)_payload+6+2))<<16|((uint32_t)*((uint8_t*)_payload+6+3))<<24); _f.f; }))
#define DL_AHRS_EULER_psi(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+10)|*((uint8_t*)_payload+10+1)<<8|((uint32_t)*((uint8_t*)_payload+10+2))<<16|((uint32_t)*((uint8_t*)_payload+10+3))<<24); _f.f; }))

#define DL_AHRS_MEASUREMENT_EULER_phi(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+2)|*((uint8_t*)_payload+2+1)<<8|((uint32_t)*((uint8_t*)_payload+2+2))<<16|((uint32_t)*((uint8_t*)_payload+2+3))<<24); _f.f; }))
#define DL_AHRS_MEASUREMENT_EULER_theta(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+6)|*((uint8_t*)_payload+6+1)<<8|((uint32_t)*((uint8_t*)_payload+6+2))<<16|((uint32_t)*((uint8_t*)_payload+6+3))<<24); _f.f; }))
#define DL_AHRS_MEASUREMENT_EULER_psi(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+10)|*((uint8_t*)_payload+10+1)<<8|((uint32_t)*((uint8_t*)_payload+10+2))<<16|((uint32_t)*((uint8_t*)_payload+10+3))<<24); _f.f; }))

#define DL_WT_rpm(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+2)|*((uint8_t*)_payload+2+1)<<8|((uint32_t)*((uint8_t*)_payload+2+2))<<16|((uint32_t)*((uint8_t*)_payload+2+3))<<24); _f.f; }))

#define DL_CSC_CAN_DEBUG_err_nb(_payload) ((uint32_t)(*((uint8_t*)_payload+2)|*((uint8_t*)_payload+2+1)<<8|((uint32_t)*((uint8_t*)_payload+2+2))<<16|((uint32_t)*((uint8_t*)_payload+2+3))<<24))
#define DL_CSC_CAN_DEBUG_err_code(_payload) ((uint32_t)(*((uint8_t*)_payload+6)|*((uint8_t*)_payload+6+1)<<8|((uint32_t)*((uint8_t*)_payload+6+2))<<16|((uint32_t)*((uint8_t*)_payload+6+3))<<24))

#define DL_CSC_CAN_MSG_frame(_payload) ((uint32_t)(*((uint8_t*)_payload+2)|*((uint8_t*)_payload+2+1)<<8|((uint32_t)*((uint8_t*)_payload+2+2))<<16|((uint32_t)*((uint8_t*)_payload+2+3))<<24))
#define DL_CSC_CAN_MSG_id(_payload) ((uint32_t)(*((uint8_t*)_payload+6)|*((uint8_t*)_payload+6+1)<<8|((uint32_t)*((uint8_t*)_payload+6+2))<<16|((uint32_t)*((uint8_t*)_payload+6+3))<<24))
#define DL_CSC_CAN_MSG_data_a(_payload) ((uint32_t)(*((uint8_t*)_payload+10)|*((uint8_t*)_payload+10+1)<<8|((uint32_t)*((uint8_t*)_payload+10+2))<<16|((uint32_t)*((uint8_t*)_payload+10+3))<<24))
#define DL_CSC_CAN_MSG_data_b(_payload) ((uint32_t)(*((uint8_t*)_payload+14)|*((uint8_t*)_payload+14+1)<<8|((uint32_t)*((uint8_t*)_payload+14+2))<<16|((uint32_t)*((uint8_t*)_payload+14+3))<<24))

#define DL_BOOZ_AHRS_BIAS_bp(_payload) ((int32_t)(*((uint8_t*)_payload+2)|*((uint8_t*)_payload+2+1)<<8|((uint32_t)*((uint8_t*)_payload+2+2))<<16|((uint32_t)*((uint8_t*)_payload+2+3))<<24))
#define DL_BOOZ_AHRS_BIAS_bq(_payload) ((int32_t)(*((uint8_t*)_payload+6)|*((uint8_t*)_payload+6+1)<<8|((uint32_t)*((uint8_t*)_payload+6+2))<<16|((uint32_t)*((uint8_t*)_payload+6+3))<<24))
#define DL_BOOZ_AHRS_BIAS_br(_payload) ((int32_t)(*((uint8_t*)_payload+10)|*((uint8_t*)_payload+10+1)<<8|((uint32_t)*((uint8_t*)_payload+10+2))<<16|((uint32_t)*((uint8_t*)_payload+10+3))<<24))

#define DL_FMS_TIME_tv_sec(_payload) ((uint32_t)(*((uint8_t*)_payload+2)|*((uint8_t*)_payload+2+1)<<8|((uint32_t)*((uint8_t*)_payload+2+2))<<16|((uint32_t)*((uint8_t*)_payload+2+3))<<24))
#define DL_FMS_TIME_tv_nsec(_payload) ((uint32_t)(*((uint8_t*)_payload+6)|*((uint8_t*)_payload+6+1)<<8|((uint32_t)*((uint8_t*)_payload+6+2))<<16|((uint32_t)*((uint8_t*)_payload+6+3))<<24))
#define DL_FMS_TIME_delay_ns(_payload) ((uint32_t)(*((uint8_t*)_payload+10)|*((uint8_t*)_payload+10+1)<<8|((uint32_t)*((uint8_t*)_payload+10+2))<<16|((uint32_t)*((uint8_t*)_payload+10+3))<<24))

#define DL_LOADCELL_load(_payload) ((int32_t)(*((uint8_t*)_payload+2)|*((uint8_t*)_payload+2+1)<<8|((uint32_t)*((uint8_t*)_payload+2+2))<<16|((uint32_t)*((uint8_t*)_payload+2+3))<<24))

#define DL_FLA_DEBUG_past_input(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+2)|*((uint8_t*)_payload+2+1)<<8|((uint32_t)*((uint8_t*)_payload+2+2))<<16|((uint32_t)*((uint8_t*)_payload+2+3))<<24); _f.f; }))
#define DL_FLA_DEBUG_imu_rate(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+6)|*((uint8_t*)_payload+6+1)<<8|((uint32_t)*((uint8_t*)_payload+6+2))<<16|((uint32_t)*((uint8_t*)_payload+6+3))<<24); _f.f; }))
#define DL_FLA_DEBUG_desired_accel(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+10)|*((uint8_t*)_payload+10+1)<<8|((uint32_t)*((uint8_t*)_payload+10+2))<<16|((uint32_t)*((uint8_t*)_payload+10+3))<<24); _f.f; }))
#define DL_FLA_DEBUG_motor_command(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+14)|*((uint8_t*)_payload+14+1)<<8|((uint32_t)*((uint8_t*)_payload+14+2))<<16|((uint32_t)*((uint8_t*)_payload+14+3))<<24); _f.f; }))

#define DL_BLMC_FAULT_STATUS_raw_fault_length(_payload) ((uint8_t)(*((uint8_t*)_payload+2)))
#define DL_BLMC_FAULT_STATUS_raw_fault(_payload) ((uint16_t*)(_payload+3))

#define DL_BLMC_SPEEDS_speeds_length(_payload) ((uint8_t)(*((uint8_t*)_payload+2)))
#define DL_BLMC_SPEEDS_speeds(_payload) ((int16_t*)(_payload+3))

#define DL_AHRS_DEBUG_QUAT_jqi(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+2)|*((uint8_t*)_payload+2+1)<<8|((uint32_t)*((uint8_t*)_payload+2+2))<<16|((uint32_t)*((uint8_t*)_payload+2+3))<<24); _f.f; }))
#define DL_AHRS_DEBUG_QUAT_jqx(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+6)|*((uint8_t*)_payload+6+1)<<8|((uint32_t)*((uint8_t*)_payload+6+2))<<16|((uint32_t)*((uint8_t*)_payload+6+3))<<24); _f.f; }))
#define DL_AHRS_DEBUG_QUAT_jqy(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+10)|*((uint8_t*)_payload+10+1)<<8|((uint32_t)*((uint8_t*)_payload+10+2))<<16|((uint32_t)*((uint8_t*)_payload+10+3))<<24); _f.f; }))
#define DL_AHRS_DEBUG_QUAT_jqz(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+14)|*((uint8_t*)_payload+14+1)<<8|((uint32_t)*((uint8_t*)_payload+14+2))<<16|((uint32_t)*((uint8_t*)_payload+14+3))<<24); _f.f; }))
#define DL_AHRS_DEBUG_QUAT_xqi(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+18)|*((uint8_t*)_payload+18+1)<<8|((uint32_t)*((uint8_t*)_payload+18+2))<<16|((uint32_t)*((uint8_t*)_payload+18+3))<<24); _f.f; }))
#define DL_AHRS_DEBUG_QUAT_xqx(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+22)|*((uint8_t*)_payload+22+1)<<8|((uint32_t)*((uint8_t*)_payload+22+2))<<16|((uint32_t)*((uint8_t*)_payload+22+3))<<24); _f.f; }))
#define DL_AHRS_DEBUG_QUAT_xqy(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+26)|*((uint8_t*)_payload+26+1)<<8|((uint32_t)*((uint8_t*)_payload+26+2))<<16|((uint32_t)*((uint8_t*)_payload+26+3))<<24); _f.f; }))
#define DL_AHRS_DEBUG_QUAT_xqz(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+30)|*((uint8_t*)_payload+30+1)<<8|((uint32_t)*((uint8_t*)_payload+30+2))<<16|((uint32_t)*((uint8_t*)_payload+30+3))<<24); _f.f; }))
#define DL_AHRS_DEBUG_QUAT_mqi(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+34)|*((uint8_t*)_payload+34+1)<<8|((uint32_t)*((uint8_t*)_payload+34+2))<<16|((uint32_t)*((uint8_t*)_payload+34+3))<<24); _f.f; }))
#define DL_AHRS_DEBUG_QUAT_mqx(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+38)|*((uint8_t*)_payload+38+1)<<8|((uint32_t)*((uint8_t*)_payload+38+2))<<16|((uint32_t)*((uint8_t*)_payload+38+3))<<24); _f.f; }))
#define DL_AHRS_DEBUG_QUAT_mqy(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+42)|*((uint8_t*)_payload+42+1)<<8|((uint32_t)*((uint8_t*)_payload+42+2))<<16|((uint32_t)*((uint8_t*)_payload+42+3))<<24); _f.f; }))
#define DL_AHRS_DEBUG_QUAT_mqz(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+46)|*((uint8_t*)_payload+46+1)<<8|((uint32_t)*((uint8_t*)_payload+46+2))<<16|((uint32_t)*((uint8_t*)_payload+46+3))<<24); _f.f; }))

#define DL_BLMC_BUSVOLTS_busvolts_length(_payload) ((uint8_t)(*((uint8_t*)_payload+2)))
#define DL_BLMC_BUSVOLTS_busvolts(_payload) ((uint16_t*)(_payload+3))

#define DL_SYSTEM_STATUS_csc1_loop_count(_payload) ((uint32_t)(*((uint8_t*)_payload+2)|*((uint8_t*)_payload+2+1)<<8|((uint32_t)*((uint8_t*)_payload+2+2))<<16|((uint32_t)*((uint8_t*)_payload+2+3))<<24))
#define DL_SYSTEM_STATUS_csc1_msg_count(_payload) ((uint32_t)(*((uint8_t*)_payload+6)|*((uint8_t*)_payload+6+1)<<8|((uint32_t)*((uint8_t*)_payload+6+2))<<16|((uint32_t)*((uint8_t*)_payload+6+3))<<24))
#define DL_SYSTEM_STATUS_csc2_loop_count(_payload) ((uint32_t)(*((uint8_t*)_payload+10)|*((uint8_t*)_payload+10+1)<<8|((uint32_t)*((uint8_t*)_payload+10+2))<<16|((uint32_t)*((uint8_t*)_payload+10+3))<<24))
#define DL_SYSTEM_STATUS_csc2_msg_count(_payload) ((uint32_t)(*((uint8_t*)_payload+14)|*((uint8_t*)_payload+14+1)<<8|((uint32_t)*((uint8_t*)_payload+14+2))<<16|((uint32_t)*((uint8_t*)_payload+14+3))<<24))
#define DL_SYSTEM_STATUS_can_rx_err(_payload) ((uint32_t)(*((uint8_t*)_payload+18)|*((uint8_t*)_payload+18+1)<<8|((uint32_t)*((uint8_t*)_payload+18+2))<<16|((uint32_t)*((uint8_t*)_payload+18+3))<<24))
#define DL_SYSTEM_STATUS_can_tx_err(_payload) ((uint32_t)(*((uint8_t*)_payload+22)|*((uint8_t*)_payload+22+1)<<8|((uint32_t)*((uint8_t*)_payload+22+2))<<16|((uint32_t)*((uint8_t*)_payload+22+3))<<24))
#define DL_SYSTEM_STATUS_rc_parser_err(_payload) ((uint32_t)(*((uint8_t*)_payload+26)|*((uint8_t*)_payload+26+1)<<8|((uint32_t)*((uint8_t*)_payload+26+2))<<16|((uint32_t)*((uint8_t*)_payload+26+3))<<24))
#define DL_SYSTEM_STATUS_system_fault(_payload) ((uint8_t)(*((uint8_t*)_payload+30)))

#define DL_DYNAMIXEL_left_wing(_payload) ((uint16_t)(*((uint8_t*)_payload+2)|*((uint8_t*)_payload+2+1)<<8))
#define DL_DYNAMIXEL_right_wing(_payload) ((uint16_t)(*((uint8_t*)_payload+4)|*((uint8_t*)_payload+4+1)<<8))
#define DL_DYNAMIXEL_left_wing_flag(_payload) ((uint8_t)(*((uint8_t*)_payload+6)))
#define DL_DYNAMIXEL_right_wing_flag(_payload) ((uint8_t)(*((uint8_t*)_payload+7)))
#define DL_DYNAMIXEL_invalid_position(_payload) ((uint32_t)(*((uint8_t*)_payload+8)|*((uint8_t*)_payload+8+1)<<8|((uint32_t)*((uint8_t*)_payload+8+2))<<16|((uint32_t)*((uint8_t*)_payload+8+3))<<24))
#define DL_DYNAMIXEL_timeout_events(_payload) ((uint32_t)(*((uint8_t*)_payload+12)|*((uint8_t*)_payload+12+1)<<8|((uint32_t)*((uint8_t*)_payload+12+2))<<16|((uint32_t)*((uint8_t*)_payload+12+3))<<24))
#define DL_DYNAMIXEL_checksum_errors(_payload) ((uint32_t)(*((uint8_t*)_payload+16)|*((uint8_t*)_payload+16+1)<<8|((uint32_t)*((uint8_t*)_payload+16+2))<<16|((uint32_t)*((uint8_t*)_payload+16+3))<<24))
#define DL_DYNAMIXEL_fuse_rotation_angle(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+20)|*((uint8_t*)_payload+20+1)<<8|((uint32_t)*((uint8_t*)_payload+20+2))<<16|((uint32_t)*((uint8_t*)_payload+20+3))<<24); _f.f; }))
#define DL_DYNAMIXEL_fuse_rotation_rate(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+24)|*((uint8_t*)_payload+24+1)<<8|((uint32_t)*((uint8_t*)_payload+24+2))<<16|((uint32_t)*((uint8_t*)_payload+24+3))<<24); _f.f; }))

#define DL_RMAT_DEBUG_a(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+2)|*((uint8_t*)_payload+2+1)<<8|((uint32_t)*((uint8_t*)_payload+2+2))<<16|((uint32_t)*((uint8_t*)_payload+2+3))<<24); _f.f; }))
#define DL_RMAT_DEBUG_b(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+6)|*((uint8_t*)_payload+6+1)<<8|((uint32_t)*((uint8_t*)_payload+6+2))<<16|((uint32_t)*((uint8_t*)_payload+6+3))<<24); _f.f; }))
#define DL_RMAT_DEBUG_c(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+10)|*((uint8_t*)_payload+10+1)<<8|((uint32_t)*((uint8_t*)_payload+10+2))<<16|((uint32_t)*((uint8_t*)_payload+10+3))<<24); _f.f; }))
#define DL_RMAT_DEBUG_d(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+14)|*((uint8_t*)_payload+14+1)<<8|((uint32_t)*((uint8_t*)_payload+14+2))<<16|((uint32_t)*((uint8_t*)_payload+14+3))<<24); _f.f; }))
#define DL_RMAT_DEBUG_e(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+18)|*((uint8_t*)_payload+18+1)<<8|((uint32_t)*((uint8_t*)_payload+18+2))<<16|((uint32_t)*((uint8_t*)_payload+18+3))<<24); _f.f; }))
#define DL_RMAT_DEBUG_f(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+22)|*((uint8_t*)_payload+22+1)<<8|((uint32_t)*((uint8_t*)_payload+22+2))<<16|((uint32_t)*((uint8_t*)_payload+22+3))<<24); _f.f; }))
#define DL_RMAT_DEBUG_g(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+26)|*((uint8_t*)_payload+26+1)<<8|((uint32_t)*((uint8_t*)_payload+26+2))<<16|((uint32_t)*((uint8_t*)_payload+26+3))<<24); _f.f; }))
#define DL_RMAT_DEBUG_h(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+30)|*((uint8_t*)_payload+30+1)<<8|((uint32_t)*((uint8_t*)_payload+30+2))<<16|((uint32_t)*((uint8_t*)_payload+30+3))<<24); _f.f; }))
#define DL_RMAT_DEBUG_i(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+34)|*((uint8_t*)_payload+34+1)<<8|((uint32_t)*((uint8_t*)_payload+34+2))<<16|((uint32_t)*((uint8_t*)_payload+34+3))<<24); _f.f; }))

#define DL_SIMPLE_COMMANDS_roll(_payload) ((int16_t)(*((uint8_t*)_payload+2)|*((uint8_t*)_payload+2+1)<<8))
#define DL_SIMPLE_COMMANDS_pitch(_payload) ((int16_t)(*((uint8_t*)_payload+4)|*((uint8_t*)_payload+4+1)<<8))
#define DL_SIMPLE_COMMANDS_yaw(_payload) ((int16_t)(*((uint8_t*)_payload+6)|*((uint8_t*)_payload+6+1)<<8))

#define DL_VANE_SENSOR_alpha(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+2)|*((uint8_t*)_payload+2+1)<<8|((uint32_t)*((uint8_t*)_payload+2+2))<<16|((uint32_t)*((uint8_t*)_payload+2+3))<<24); _f.f; }))
#define DL_VANE_SENSOR_alpha_filtered(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+6)|*((uint8_t*)_payload+6+1)<<8|((uint32_t)*((uint8_t*)_payload+6+2))<<16|((uint32_t)*((uint8_t*)_payload+6+3))<<24); _f.f; }))
#define DL_VANE_SENSOR_alpha_target(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+10)|*((uint8_t*)_payload+10+1)<<8|((uint32_t)*((uint8_t*)_payload+10+2))<<16|((uint32_t)*((uint8_t*)_payload+10+3))<<24); _f.f; }))
#define DL_VANE_SENSOR_alpha_vane_error(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+14)|*((uint8_t*)_payload+14+1)<<8|((uint32_t)*((uint8_t*)_payload+14+2))<<16|((uint32_t)*((uint8_t*)_payload+14+3))<<24); _f.f; }))
#define DL_VANE_SENSOR_alpha2(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+18)|*((uint8_t*)_payload+18+1)<<8|((uint32_t)*((uint8_t*)_payload+18+2))<<16|((uint32_t)*((uint8_t*)_payload+18+3))<<24); _f.f; }))
#define DL_VANE_SENSOR_beta(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+22)|*((uint8_t*)_payload+22+1)<<8|((uint32_t)*((uint8_t*)_payload+22+2))<<16|((uint32_t)*((uint8_t*)_payload+22+3))<<24); _f.f; }))
#define DL_VANE_SENSOR_beta_filtered(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+26)|*((uint8_t*)_payload+26+1)<<8|((uint32_t)*((uint8_t*)_payload+26+2))<<16|((uint32_t)*((uint8_t*)_payload+26+3))<<24); _f.f; }))
#define DL_VANE_SENSOR_beta_target(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+30)|*((uint8_t*)_payload+30+1)<<8|((uint32_t)*((uint8_t*)_payload+30+2))<<16|((uint32_t)*((uint8_t*)_payload+30+3))<<24); _f.f; }))
#define DL_VANE_SENSOR_beta_vane_error(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+34)|*((uint8_t*)_payload+34+1)<<8|((uint32_t)*((uint8_t*)_payload+34+2))<<16|((uint32_t)*((uint8_t*)_payload+34+3))<<24); _f.f; }))
#define DL_VANE_SENSOR_beta2(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+38)|*((uint8_t*)_payload+38+1)<<8|((uint32_t)*((uint8_t*)_payload+38+2))<<16|((uint32_t)*((uint8_t*)_payload+38+3))<<24); _f.f; }))

#define DL_CONTROLLER_GAINS_roll_gamma_p(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+2)|*((uint8_t*)_payload+2+1)<<8|((uint32_t)*((uint8_t*)_payload+2+2))<<16|((uint32_t)*((uint8_t*)_payload+2+3))<<24); _f.f; }))
#define DL_CONTROLLER_GAINS_roll_gamma_d(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+6)|*((uint8_t*)_payload+6+1)<<8|((uint32_t)*((uint8_t*)_payload+6+2))<<16|((uint32_t)*((uint8_t*)_payload+6+3))<<24); _f.f; }))
#define DL_CONTROLLER_GAINS_roll_gamma_i(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+10)|*((uint8_t*)_payload+10+1)<<8|((uint32_t)*((uint8_t*)_payload+10+2))<<16|((uint32_t)*((uint8_t*)_payload+10+3))<<24); _f.f; }))
#define DL_CONTROLLER_GAINS_pitch_gamma_p(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+14)|*((uint8_t*)_payload+14+1)<<8|((uint32_t)*((uint8_t*)_payload+14+2))<<16|((uint32_t)*((uint8_t*)_payload+14+3))<<24); _f.f; }))
#define DL_CONTROLLER_GAINS_pitch_gamma_d(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+18)|*((uint8_t*)_payload+18+1)<<8|((uint32_t)*((uint8_t*)_payload+18+2))<<16|((uint32_t)*((uint8_t*)_payload+18+3))<<24); _f.f; }))
#define DL_CONTROLLER_GAINS_pitch_gamma_i(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+22)|*((uint8_t*)_payload+22+1)<<8|((uint32_t)*((uint8_t*)_payload+22+2))<<16|((uint32_t)*((uint8_t*)_payload+22+3))<<24); _f.f; }))
#define DL_CONTROLLER_GAINS_yaw_gamma_p(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+26)|*((uint8_t*)_payload+26+1)<<8|((uint32_t)*((uint8_t*)_payload+26+2))<<16|((uint32_t)*((uint8_t*)_payload+26+3))<<24); _f.f; }))
#define DL_CONTROLLER_GAINS_yaw_gamma_d(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+30)|*((uint8_t*)_payload+30+1)<<8|((uint32_t)*((uint8_t*)_payload+30+2))<<16|((uint32_t)*((uint8_t*)_payload+30+3))<<24); _f.f; }))
#define DL_CONTROLLER_GAINS_yaw_gamma_i(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+34)|*((uint8_t*)_payload+34+1)<<8|((uint32_t)*((uint8_t*)_payload+34+2))<<16|((uint32_t)*((uint8_t*)_payload+34+3))<<24); _f.f; }))

#define DL_AHRS_LKF_phi(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+2)|*((uint8_t*)_payload+2+1)<<8|((uint32_t)*((uint8_t*)_payload+2+2))<<16|((uint32_t)*((uint8_t*)_payload+2+3))<<24); _f.f; }))
#define DL_AHRS_LKF_theta(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+6)|*((uint8_t*)_payload+6+1)<<8|((uint32_t)*((uint8_t*)_payload+6+2))<<16|((uint32_t)*((uint8_t*)_payload+6+3))<<24); _f.f; }))
#define DL_AHRS_LKF_psi(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+10)|*((uint8_t*)_payload+10+1)<<8|((uint32_t)*((uint8_t*)_payload+10+2))<<16|((uint32_t)*((uint8_t*)_payload+10+3))<<24); _f.f; }))
#define DL_AHRS_LKF_qi(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+14)|*((uint8_t*)_payload+14+1)<<8|((uint32_t)*((uint8_t*)_payload+14+2))<<16|((uint32_t)*((uint8_t*)_payload+14+3))<<24); _f.f; }))
#define DL_AHRS_LKF_qx(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+18)|*((uint8_t*)_payload+18+1)<<8|((uint32_t)*((uint8_t*)_payload+18+2))<<16|((uint32_t)*((uint8_t*)_payload+18+3))<<24); _f.f; }))
#define DL_AHRS_LKF_qy(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+22)|*((uint8_t*)_payload+22+1)<<8|((uint32_t)*((uint8_t*)_payload+22+2))<<16|((uint32_t)*((uint8_t*)_payload+22+3))<<24); _f.f; }))
#define DL_AHRS_LKF_qz(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+26)|*((uint8_t*)_payload+26+1)<<8|((uint32_t)*((uint8_t*)_payload+26+2))<<16|((uint32_t)*((uint8_t*)_payload+26+3))<<24); _f.f; }))
#define DL_AHRS_LKF_p(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+30)|*((uint8_t*)_payload+30+1)<<8|((uint32_t)*((uint8_t*)_payload+30+2))<<16|((uint32_t)*((uint8_t*)_payload+30+3))<<24); _f.f; }))
#define DL_AHRS_LKF_q(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+34)|*((uint8_t*)_payload+34+1)<<8|((uint32_t)*((uint8_t*)_payload+34+2))<<16|((uint32_t)*((uint8_t*)_payload+34+3))<<24); _f.f; }))
#define DL_AHRS_LKF_r(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+38)|*((uint8_t*)_payload+38+1)<<8|((uint32_t)*((uint8_t*)_payload+38+2))<<16|((uint32_t)*((uint8_t*)_payload+38+3))<<24); _f.f; }))
#define DL_AHRS_LKF_ax(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+42)|*((uint8_t*)_payload+42+1)<<8|((uint32_t)*((uint8_t*)_payload+42+2))<<16|((uint32_t)*((uint8_t*)_payload+42+3))<<24); _f.f; }))
#define DL_AHRS_LKF_ay(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+46)|*((uint8_t*)_payload+46+1)<<8|((uint32_t)*((uint8_t*)_payload+46+2))<<16|((uint32_t)*((uint8_t*)_payload+46+3))<<24); _f.f; }))
#define DL_AHRS_LKF_az(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+50)|*((uint8_t*)_payload+50+1)<<8|((uint32_t)*((uint8_t*)_payload+50+2))<<16|((uint32_t)*((uint8_t*)_payload+50+3))<<24); _f.f; }))
#define DL_AHRS_LKF_mx(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+54)|*((uint8_t*)_payload+54+1)<<8|((uint32_t)*((uint8_t*)_payload+54+2))<<16|((uint32_t)*((uint8_t*)_payload+54+3))<<24); _f.f; }))
#define DL_AHRS_LKF_my(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+58)|*((uint8_t*)_payload+58+1)<<8|((uint32_t)*((uint8_t*)_payload+58+2))<<16|((uint32_t)*((uint8_t*)_payload+58+3))<<24); _f.f; }))
#define DL_AHRS_LKF_mz(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+62)|*((uint8_t*)_payload+62+1)<<8|((uint32_t)*((uint8_t*)_payload+62+2))<<16|((uint32_t)*((uint8_t*)_payload+62+3))<<24); _f.f; }))

#define DL_AHRS_LKF_DEBUG_phi_err(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+2)|*((uint8_t*)_payload+2+1)<<8|((uint32_t)*((uint8_t*)_payload+2+2))<<16|((uint32_t)*((uint8_t*)_payload+2+3))<<24); _f.f; }))
#define DL_AHRS_LKF_DEBUG_theta_err(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+6)|*((uint8_t*)_payload+6+1)<<8|((uint32_t)*((uint8_t*)_payload+6+2))<<16|((uint32_t)*((uint8_t*)_payload+6+3))<<24); _f.f; }))
#define DL_AHRS_LKF_DEBUG_psi_err(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+10)|*((uint8_t*)_payload+10+1)<<8|((uint32_t)*((uint8_t*)_payload+10+2))<<16|((uint32_t)*((uint8_t*)_payload+10+3))<<24); _f.f; }))
#define DL_AHRS_LKF_DEBUG_bp(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+14)|*((uint8_t*)_payload+14+1)<<8|((uint32_t)*((uint8_t*)_payload+14+2))<<16|((uint32_t)*((uint8_t*)_payload+14+3))<<24); _f.f; }))
#define DL_AHRS_LKF_DEBUG_bq(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+18)|*((uint8_t*)_payload+18+1)<<8|((uint32_t)*((uint8_t*)_payload+18+2))<<16|((uint32_t)*((uint8_t*)_payload+18+3))<<24); _f.f; }))
#define DL_AHRS_LKF_DEBUG_br(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+22)|*((uint8_t*)_payload+22+1)<<8|((uint32_t)*((uint8_t*)_payload+22+2))<<16|((uint32_t)*((uint8_t*)_payload+22+3))<<24); _f.f; }))
#define DL_AHRS_LKF_DEBUG_quat_norm(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+26)|*((uint8_t*)_payload+26+1)<<8|((uint32_t)*((uint8_t*)_payload+26+2))<<16|((uint32_t)*((uint8_t*)_payload+26+3))<<24); _f.f; }))
#define DL_AHRS_LKF_DEBUG_phi_accel(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+30)|*((uint8_t*)_payload+30+1)<<8|((uint32_t)*((uint8_t*)_payload+30+2))<<16|((uint32_t)*((uint8_t*)_payload+30+3))<<24); _f.f; }))
#define DL_AHRS_LKF_DEBUG_theta_accel(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+34)|*((uint8_t*)_payload+34+1)<<8|((uint32_t)*((uint8_t*)_payload+34+2))<<16|((uint32_t)*((uint8_t*)_payload+34+3))<<24); _f.f; }))
#define DL_AHRS_LKF_DEBUG_phi_cov(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+38)|*((uint8_t*)_payload+38+1)<<8|((uint32_t)*((uint8_t*)_payload+38+2))<<16|((uint32_t)*((uint8_t*)_payload+38+3))<<24); _f.f; }))
#define DL_AHRS_LKF_DEBUG_theta_cov(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+42)|*((uint8_t*)_payload+42+1)<<8|((uint32_t)*((uint8_t*)_payload+42+2))<<16|((uint32_t)*((uint8_t*)_payload+42+3))<<24); _f.f; }))
#define DL_AHRS_LKF_DEBUG_psi_cov(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+46)|*((uint8_t*)_payload+46+1)<<8|((uint32_t)*((uint8_t*)_payload+46+2))<<16|((uint32_t)*((uint8_t*)_payload+46+3))<<24); _f.f; }))
#define DL_AHRS_LKF_DEBUG_bp_cov(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+50)|*((uint8_t*)_payload+50+1)<<8|((uint32_t)*((uint8_t*)_payload+50+2))<<16|((uint32_t)*((uint8_t*)_payload+50+3))<<24); _f.f; }))
#define DL_AHRS_LKF_DEBUG_bq_cov(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+54)|*((uint8_t*)_payload+54+1)<<8|((uint32_t)*((uint8_t*)_payload+54+2))<<16|((uint32_t)*((uint8_t*)_payload+54+3))<<24); _f.f; }))
#define DL_AHRS_LKF_DEBUG_br_cov(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+58)|*((uint8_t*)_payload+58+1)<<8|((uint32_t)*((uint8_t*)_payload+58+2))<<16|((uint32_t)*((uint8_t*)_payload+58+3))<<24); _f.f; }))

#define DL_AHRS_LKF_ACC_DBG_qi_err(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+2)|*((uint8_t*)_payload+2+1)<<8|((uint32_t)*((uint8_t*)_payload+2+2))<<16|((uint32_t)*((uint8_t*)_payload+2+3))<<24); _f.f; }))
#define DL_AHRS_LKF_ACC_DBG_qx_err(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+6)|*((uint8_t*)_payload+6+1)<<8|((uint32_t)*((uint8_t*)_payload+6+2))<<16|((uint32_t)*((uint8_t*)_payload+6+3))<<24); _f.f; }))
#define DL_AHRS_LKF_ACC_DBG_qy_err(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+10)|*((uint8_t*)_payload+10+1)<<8|((uint32_t)*((uint8_t*)_payload+10+2))<<16|((uint32_t)*((uint8_t*)_payload+10+3))<<24); _f.f; }))
#define DL_AHRS_LKF_ACC_DBG_qz_err(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+14)|*((uint8_t*)_payload+14+1)<<8|((uint32_t)*((uint8_t*)_payload+14+2))<<16|((uint32_t)*((uint8_t*)_payload+14+3))<<24); _f.f; }))
#define DL_AHRS_LKF_ACC_DBG_bp_err(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+18)|*((uint8_t*)_payload+18+1)<<8|((uint32_t)*((uint8_t*)_payload+18+2))<<16|((uint32_t)*((uint8_t*)_payload+18+3))<<24); _f.f; }))
#define DL_AHRS_LKF_ACC_DBG_bq_err(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+22)|*((uint8_t*)_payload+22+1)<<8|((uint32_t)*((uint8_t*)_payload+22+2))<<16|((uint32_t)*((uint8_t*)_payload+22+3))<<24); _f.f; }))
#define DL_AHRS_LKF_ACC_DBG_br_err(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+26)|*((uint8_t*)_payload+26+1)<<8|((uint32_t)*((uint8_t*)_payload+26+2))<<16|((uint32_t)*((uint8_t*)_payload+26+3))<<24); _f.f; }))

#define DL_AHRS_LKF_MAG_DBG_qi_err(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+2)|*((uint8_t*)_payload+2+1)<<8|((uint32_t)*((uint8_t*)_payload+2+2))<<16|((uint32_t)*((uint8_t*)_payload+2+3))<<24); _f.f; }))
#define DL_AHRS_LKF_MAG_DBG_qx_err(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+6)|*((uint8_t*)_payload+6+1)<<8|((uint32_t)*((uint8_t*)_payload+6+2))<<16|((uint32_t)*((uint8_t*)_payload+6+3))<<24); _f.f; }))
#define DL_AHRS_LKF_MAG_DBG_qy_err(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+10)|*((uint8_t*)_payload+10+1)<<8|((uint32_t)*((uint8_t*)_payload+10+2))<<16|((uint32_t)*((uint8_t*)_payload+10+3))<<24); _f.f; }))
#define DL_AHRS_LKF_MAG_DBG_qz_err(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+14)|*((uint8_t*)_payload+14+1)<<8|((uint32_t)*((uint8_t*)_payload+14+2))<<16|((uint32_t)*((uint8_t*)_payload+14+3))<<24); _f.f; }))
#define DL_AHRS_LKF_MAG_DBG_bp_err(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+18)|*((uint8_t*)_payload+18+1)<<8|((uint32_t)*((uint8_t*)_payload+18+2))<<16|((uint32_t)*((uint8_t*)_payload+18+3))<<24); _f.f; }))
#define DL_AHRS_LKF_MAG_DBG_bq_err(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+22)|*((uint8_t*)_payload+22+1)<<8|((uint32_t)*((uint8_t*)_payload+22+2))<<16|((uint32_t)*((uint8_t*)_payload+22+3))<<24); _f.f; }))
#define DL_AHRS_LKF_MAG_DBG_br_err(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+26)|*((uint8_t*)_payload+26+1)<<8|((uint32_t)*((uint8_t*)_payload+26+2))<<16|((uint32_t)*((uint8_t*)_payload+26+3))<<24); _f.f; }))

#define DL_BOOZ_SIM_SENSORS_SCALED_acc_x(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+2)|*((uint8_t*)_payload+2+1)<<8|((uint32_t)*((uint8_t*)_payload+2+2))<<16|((uint32_t)*((uint8_t*)_payload+2+3))<<24); _f.f; }))
#define DL_BOOZ_SIM_SENSORS_SCALED_acc_y(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+6)|*((uint8_t*)_payload+6+1)<<8|((uint32_t)*((uint8_t*)_payload+6+2))<<16|((uint32_t)*((uint8_t*)_payload+6+3))<<24); _f.f; }))
#define DL_BOOZ_SIM_SENSORS_SCALED_acc_z(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+10)|*((uint8_t*)_payload+10+1)<<8|((uint32_t)*((uint8_t*)_payload+10+2))<<16|((uint32_t)*((uint8_t*)_payload+10+3))<<24); _f.f; }))
#define DL_BOOZ_SIM_SENSORS_SCALED_mag_x(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+14)|*((uint8_t*)_payload+14+1)<<8|((uint32_t)*((uint8_t*)_payload+14+2))<<16|((uint32_t)*((uint8_t*)_payload+14+3))<<24); _f.f; }))
#define DL_BOOZ_SIM_SENSORS_SCALED_mag_y(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+18)|*((uint8_t*)_payload+18+1)<<8|((uint32_t)*((uint8_t*)_payload+18+2))<<16|((uint32_t)*((uint8_t*)_payload+18+3))<<24); _f.f; }))
#define DL_BOOZ_SIM_SENSORS_SCALED_mag_z(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+22)|*((uint8_t*)_payload+22+1)<<8|((uint32_t)*((uint8_t*)_payload+22+2))<<16|((uint32_t)*((uint8_t*)_payload+22+3))<<24); _f.f; }))

#define DL_INS_ins_x(_payload) ((int32_t)(*((uint8_t*)_payload+2)|*((uint8_t*)_payload+2+1)<<8|((uint32_t)*((uint8_t*)_payload+2+2))<<16|((uint32_t)*((uint8_t*)_payload+2+3))<<24))
#define DL_INS_ins_y(_payload) ((int32_t)(*((uint8_t*)_payload+6)|*((uint8_t*)_payload+6+1)<<8|((uint32_t)*((uint8_t*)_payload+6+2))<<16|((uint32_t)*((uint8_t*)_payload+6+3))<<24))
#define DL_INS_ins_z(_payload) ((int32_t)(*((uint8_t*)_payload+10)|*((uint8_t*)_payload+10+1)<<8|((uint32_t)*((uint8_t*)_payload+10+2))<<16|((uint32_t)*((uint8_t*)_payload+10+3))<<24))
#define DL_INS_ins_xd(_payload) ((int32_t)(*((uint8_t*)_payload+14)|*((uint8_t*)_payload+14+1)<<8|((uint32_t)*((uint8_t*)_payload+14+2))<<16|((uint32_t)*((uint8_t*)_payload+14+3))<<24))
#define DL_INS_ins_yd(_payload) ((int32_t)(*((uint8_t*)_payload+18)|*((uint8_t*)_payload+18+1)<<8|((uint32_t)*((uint8_t*)_payload+18+2))<<16|((uint32_t)*((uint8_t*)_payload+18+3))<<24))
#define DL_INS_ins_zd(_payload) ((int32_t)(*((uint8_t*)_payload+22)|*((uint8_t*)_payload+22+1)<<8|((uint32_t)*((uint8_t*)_payload+22+2))<<16|((uint32_t)*((uint8_t*)_payload+22+3))<<24))
#define DL_INS_ins_xdd(_payload) ((int32_t)(*((uint8_t*)_payload+26)|*((uint8_t*)_payload+26+1)<<8|((uint32_t)*((uint8_t*)_payload+26+2))<<16|((uint32_t)*((uint8_t*)_payload+26+3))<<24))
#define DL_INS_ins_ydd(_payload) ((int32_t)(*((uint8_t*)_payload+30)|*((uint8_t*)_payload+30+1)<<8|((uint32_t)*((uint8_t*)_payload+30+2))<<16|((uint32_t)*((uint8_t*)_payload+30+3))<<24))
#define DL_INS_ins_zdd(_payload) ((int32_t)(*((uint8_t*)_payload+34)|*((uint8_t*)_payload+34+1)<<8|((uint32_t)*((uint8_t*)_payload+34+2))<<16|((uint32_t)*((uint8_t*)_payload+34+3))<<24))

#define DL_GPS_ERROR_x_position(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+2)|*((uint8_t*)_payload+2+1)<<8|((uint32_t)*((uint8_t*)_payload+2+2))<<16|((uint32_t)*((uint8_t*)_payload+2+3))<<24); _f.f; }))
#define DL_GPS_ERROR_y_position(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+6)|*((uint8_t*)_payload+6+1)<<8|((uint32_t)*((uint8_t*)_payload+6+2))<<16|((uint32_t)*((uint8_t*)_payload+6+3))<<24); _f.f; }))
#define DL_GPS_ERROR_z_position(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+10)|*((uint8_t*)_payload+10+1)<<8|((uint32_t)*((uint8_t*)_payload+10+2))<<16|((uint32_t)*((uint8_t*)_payload+10+3))<<24); _f.f; }))
#define DL_GPS_ERROR_x_velocity(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+14)|*((uint8_t*)_payload+14+1)<<8|((uint32_t)*((uint8_t*)_payload+14+2))<<16|((uint32_t)*((uint8_t*)_payload+14+3))<<24); _f.f; }))
#define DL_GPS_ERROR_y_velocity(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+18)|*((uint8_t*)_payload+18+1)<<8|((uint32_t)*((uint8_t*)_payload+18+2))<<16|((uint32_t)*((uint8_t*)_payload+18+3))<<24); _f.f; }))
#define DL_GPS_ERROR_z_velocity(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+22)|*((uint8_t*)_payload+22+1)<<8|((uint32_t)*((uint8_t*)_payload+22+2))<<16|((uint32_t)*((uint8_t*)_payload+22+3))<<24); _f.f; }))

#define DL_IMU_GYRO_gp(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+2)|*((uint8_t*)_payload+2+1)<<8|((uint32_t)*((uint8_t*)_payload+2+2))<<16|((uint32_t)*((uint8_t*)_payload+2+3))<<24); _f.f; }))
#define DL_IMU_GYRO_gq(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+6)|*((uint8_t*)_payload+6+1)<<8|((uint32_t)*((uint8_t*)_payload+6+2))<<16|((uint32_t)*((uint8_t*)_payload+6+3))<<24); _f.f; }))
#define DL_IMU_GYRO_gr(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+10)|*((uint8_t*)_payload+10+1)<<8|((uint32_t)*((uint8_t*)_payload+10+2))<<16|((uint32_t)*((uint8_t*)_payload+10+3))<<24); _f.f; }))

#define DL_IMU_MAG_mx(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+2)|*((uint8_t*)_payload+2+1)<<8|((uint32_t)*((uint8_t*)_payload+2+2))<<16|((uint32_t)*((uint8_t*)_payload+2+3))<<24); _f.f; }))
#define DL_IMU_MAG_my(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+6)|*((uint8_t*)_payload+6+1)<<8|((uint32_t)*((uint8_t*)_payload+6+2))<<16|((uint32_t)*((uint8_t*)_payload+6+3))<<24); _f.f; }))
#define DL_IMU_MAG_mz(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+10)|*((uint8_t*)_payload+10+1)<<8|((uint32_t)*((uint8_t*)_payload+10+2))<<16|((uint32_t)*((uint8_t*)_payload+10+3))<<24); _f.f; }))

#define DL_IMU_ACCEL_ax(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+2)|*((uint8_t*)_payload+2+1)<<8|((uint32_t)*((uint8_t*)_payload+2+2))<<16|((uint32_t)*((uint8_t*)_payload+2+3))<<24); _f.f; }))
#define DL_IMU_ACCEL_ay(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+6)|*((uint8_t*)_payload+6+1)<<8|((uint32_t)*((uint8_t*)_payload+6+2))<<16|((uint32_t)*((uint8_t*)_payload+6+3))<<24); _f.f; }))
#define DL_IMU_ACCEL_az(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+10)|*((uint8_t*)_payload+10+1)<<8|((uint32_t)*((uint8_t*)_payload+10+2))<<16|((uint32_t)*((uint8_t*)_payload+10+3))<<24); _f.f; }))

#define DL_IMU_GYRO_RAW_gp(_payload) ((int32_t)(*((uint8_t*)_payload+2)|*((uint8_t*)_payload+2+1)<<8|((uint32_t)*((uint8_t*)_payload+2+2))<<16|((uint32_t)*((uint8_t*)_payload+2+3))<<24))
#define DL_IMU_GYRO_RAW_gq(_payload) ((int32_t)(*((uint8_t*)_payload+6)|*((uint8_t*)_payload+6+1)<<8|((uint32_t)*((uint8_t*)_payload+6+2))<<16|((uint32_t)*((uint8_t*)_payload+6+3))<<24))
#define DL_IMU_GYRO_RAW_gr(_payload) ((int32_t)(*((uint8_t*)_payload+10)|*((uint8_t*)_payload+10+1)<<8|((uint32_t)*((uint8_t*)_payload+10+2))<<16|((uint32_t)*((uint8_t*)_payload+10+3))<<24))

#define DL_IMU_ACCEL_RAW_ax(_payload) ((int32_t)(*((uint8_t*)_payload+2)|*((uint8_t*)_payload+2+1)<<8|((uint32_t)*((uint8_t*)_payload+2+2))<<16|((uint32_t)*((uint8_t*)_payload+2+3))<<24))
#define DL_IMU_ACCEL_RAW_ay(_payload) ((int32_t)(*((uint8_t*)_payload+6)|*((uint8_t*)_payload+6+1)<<8|((uint32_t)*((uint8_t*)_payload+6+2))<<16|((uint32_t)*((uint8_t*)_payload+6+3))<<24))
#define DL_IMU_ACCEL_RAW_az(_payload) ((int32_t)(*((uint8_t*)_payload+10)|*((uint8_t*)_payload+10+1)<<8|((uint32_t)*((uint8_t*)_payload+10+2))<<16|((uint32_t)*((uint8_t*)_payload+10+3))<<24))

#define DL_IMU_MAG_RAW_mx(_payload) ((int32_t)(*((uint8_t*)_payload+2)|*((uint8_t*)_payload+2+1)<<8|((uint32_t)*((uint8_t*)_payload+2+2))<<16|((uint32_t)*((uint8_t*)_payload+2+3))<<24))
#define DL_IMU_MAG_RAW_my(_payload) ((int32_t)(*((uint8_t*)_payload+6)|*((uint8_t*)_payload+6+1)<<8|((uint32_t)*((uint8_t*)_payload+6+2))<<16|((uint32_t)*((uint8_t*)_payload+6+3))<<24))
#define DL_IMU_MAG_RAW_mz(_payload) ((int32_t)(*((uint8_t*)_payload+10)|*((uint8_t*)_payload+10+1)<<8|((uint32_t)*((uint8_t*)_payload+10+2))<<16|((uint32_t)*((uint8_t*)_payload+10+3))<<24))

#define DL_IMU_GYRO_LP_gp(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+2)|*((uint8_t*)_payload+2+1)<<8|((uint32_t)*((uint8_t*)_payload+2+2))<<16|((uint32_t)*((uint8_t*)_payload+2+3))<<24); _f.f; }))
#define DL_IMU_GYRO_LP_gq(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+6)|*((uint8_t*)_payload+6+1)<<8|((uint32_t)*((uint8_t*)_payload+6+2))<<16|((uint32_t)*((uint8_t*)_payload+6+3))<<24); _f.f; }))
#define DL_IMU_GYRO_LP_gr(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+10)|*((uint8_t*)_payload+10+1)<<8|((uint32_t)*((uint8_t*)_payload+10+2))<<16|((uint32_t)*((uint8_t*)_payload+10+3))<<24); _f.f; }))

#define DL_IMU_PRESSURE_p(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+2)|*((uint8_t*)_payload+2+1)<<8|((uint32_t)*((uint8_t*)_payload+2+2))<<16|((uint32_t)*((uint8_t*)_payload+2+3))<<24); _f.f; }))

#define DL_IMU_HS_GYRO_axis(_payload) ((uint8_t)(*((uint8_t*)_payload+2)))
#define DL_IMU_HS_GYRO_samples_length(_payload) ((uint8_t)(*((uint8_t*)_payload+3)))
#define DL_IMU_HS_GYRO_samples(_payload) ((uint32_t*)(_payload+4))

#define DL_TEST_PASSTHROUGH_STATUS_io_proc_msg_cnt(_payload) ((uint32_t)(*((uint8_t*)_payload+2)|*((uint8_t*)_payload+2+1)<<8|((uint32_t)*((uint8_t*)_payload+2+2))<<16|((uint32_t)*((uint8_t*)_payload+2+3))<<24))
#define DL_TEST_PASSTHROUGH_STATUS_io_proc_err_cnt(_payload) ((uint32_t)(*((uint8_t*)_payload+6)|*((uint8_t*)_payload+6+1)<<8|((uint32_t)*((uint8_t*)_payload+6+2))<<16|((uint32_t)*((uint8_t*)_payload+6+3))<<24))
#define DL_TEST_PASSTHROUGH_STATUS_io_link_msg_cnt(_payload) ((uint32_t)(*((uint8_t*)_payload+10)|*((uint8_t*)_payload+10+1)<<8|((uint32_t)*((uint8_t*)_payload+10+2))<<16|((uint32_t)*((uint8_t*)_payload+10+3))<<24))
#define DL_TEST_PASSTHROUGH_STATUS_io_link_err_cnt(_payload) ((uint32_t)(*((uint8_t*)_payload+14)|*((uint8_t*)_payload+14+1)<<8|((uint32_t)*((uint8_t*)_payload+14+2))<<16|((uint32_t)*((uint8_t*)_payload+14+3))<<24))
#define DL_TEST_PASSTHROUGH_STATUS_rc_status(_payload) ((uint8_t)(*((uint8_t*)_payload+18)))

#define DL_WEATHER_p_amb(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+2)|*((uint8_t*)_payload+2+1)<<8|((uint32_t)*((uint8_t*)_payload+2+2))<<16|((uint32_t)*((uint8_t*)_payload+2+3))<<24); _f.f; }))
#define DL_WEATHER_t_amb(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+6)|*((uint8_t*)_payload+6+1)<<8|((uint32_t)*((uint8_t*)_payload+6+2))<<16|((uint32_t)*((uint8_t*)_payload+6+3))<<24); _f.f; }))
#define DL_WEATHER_windspeed(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+10)|*((uint8_t*)_payload+10+1)<<8|((uint32_t)*((uint8_t*)_payload+10+2))<<16|((uint32_t)*((uint8_t*)_payload+10+3))<<24); _f.f; }))
#define DL_WEATHER_wind_from(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+14)|*((uint8_t*)_payload+14+1)<<8|((uint32_t)*((uint8_t*)_payload+14+2))<<16|((uint32_t)*((uint8_t*)_payload+14+3))<<24); _f.f; }))

#define DL_IMU_TURNTABLE_omega(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+2)|*((uint8_t*)_payload+2+1)<<8|((uint32_t)*((uint8_t*)_payload+2+2))<<16|((uint32_t)*((uint8_t*)_payload+2+3))<<24); _f.f; }))

#define DL_BARO_RAW_abs(_payload) ((int32_t)(*((uint8_t*)_payload+2)|*((uint8_t*)_payload+2+1)<<8|((uint32_t)*((uint8_t*)_payload+2+2))<<16|((uint32_t)*((uint8_t*)_payload+2+3))<<24))
#define DL_BARO_RAW_diff(_payload) ((int32_t)(*((uint8_t*)_payload+6)|*((uint8_t*)_payload+6+1)<<8|((uint32_t)*((uint8_t*)_payload+6+2))<<16|((uint32_t)*((uint8_t*)_payload+6+3))<<24))

#define DL_TIME_t(_payload) ((uint32_t)(*((uint8_t*)_payload+2)|*((uint8_t*)_payload+2+1)<<8|((uint32_t)*((uint8_t*)_payload+2+2))<<16|((uint32_t)*((uint8_t*)_payload+2+3))<<24))

#define DL_ROTORCRAFT_STATUS_link_imu_nb_err(_payload) ((uint32_t)(*((uint8_t*)_payload+2)|*((uint8_t*)_payload+2+1)<<8|((uint32_t)*((uint8_t*)_payload+2+2))<<16|((uint32_t)*((uint8_t*)_payload+2+3))<<24))
#define DL_ROTORCRAFT_STATUS_blmc_nb_err(_payload) ((uint8_t)(*((uint8_t*)_payload+6)))
#define DL_ROTORCRAFT_STATUS_rc_status(_payload) ((uint8_t)(*((uint8_t*)_payload+7)))
#define DL_ROTORCRAFT_STATUS_frame_rate(_payload) ((uint8_t)(*((uint8_t*)_payload+8)))
#define DL_ROTORCRAFT_STATUS_gps_status(_payload) ((uint8_t)(*((uint8_t*)_payload+9)))
#define DL_ROTORCRAFT_STATUS_ap_mode(_payload) ((uint8_t)(*((uint8_t*)_payload+10)))
#define DL_ROTORCRAFT_STATUS_ap_in_flight(_payload) ((uint8_t)(*((uint8_t*)_payload+11)))
#define DL_ROTORCRAFT_STATUS_ap_motors_on(_payload) ((uint8_t)(*((uint8_t*)_payload+12)))
#define DL_ROTORCRAFT_STATUS_ap_h_mode(_payload) ((uint8_t)(*((uint8_t*)_payload+13)))
#define DL_ROTORCRAFT_STATUS_ap_v_mode(_payload) ((uint8_t)(*((uint8_t*)_payload+14)))
#define DL_ROTORCRAFT_STATUS_vsupply(_payload) ((uint8_t)(*((uint8_t*)_payload+15)))
#define DL_ROTORCRAFT_STATUS_cpu_time(_payload) ((uint16_t)(*((uint8_t*)_payload+16)|*((uint8_t*)_payload+16+1)<<8))

#define DL_OPTICFLOW_flow(_payload) ((uint16_t)(*((uint8_t*)_payload+2)|*((uint8_t*)_payload+2+1)<<8))
#define DL_OPTICFLOW_ref_alt(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+4)|*((uint8_t*)_payload+4+1)<<8|((uint32_t)*((uint8_t*)_payload+4+2))<<16|((uint32_t)*((uint8_t*)_payload+4+3))<<24); _f.f; }))

#define DL_VISUALTARGET_x(_payload) ((uint16_t)(*((uint8_t*)_payload+2)|*((uint8_t*)_payload+2+1)<<8))
#define DL_VISUALTARGET_y(_payload) ((uint16_t)(*((uint8_t*)_payload+4)|*((uint8_t*)_payload+4+1)<<8))

#define DL_BOOZ_SIM_POS_LLH_pprz_lat(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+2)|*((uint8_t*)_payload+2+1)<<8|((uint32_t)*((uint8_t*)_payload+2+2))<<16|((uint32_t)*((uint8_t*)_payload+2+3))<<24); _f.f; }))
#define DL_BOOZ_SIM_POS_LLH_lat_geod(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+6)|*((uint8_t*)_payload+6+1)<<8|((uint32_t)*((uint8_t*)_payload+6+2))<<16|((uint32_t)*((uint8_t*)_payload+6+3))<<24); _f.f; }))
#define DL_BOOZ_SIM_POS_LLH_lat_geoc(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+10)|*((uint8_t*)_payload+10+1)<<8|((uint32_t)*((uint8_t*)_payload+10+2))<<16|((uint32_t)*((uint8_t*)_payload+10+3))<<24); _f.f; }))
#define DL_BOOZ_SIM_POS_LLH_pprz_lon(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+14)|*((uint8_t*)_payload+14+1)<<8|((uint32_t)*((uint8_t*)_payload+14+2))<<16|((uint32_t)*((uint8_t*)_payload+14+3))<<24); _f.f; }))
#define DL_BOOZ_SIM_POS_LLH_lon(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+18)|*((uint8_t*)_payload+18+1)<<8|((uint32_t)*((uint8_t*)_payload+18+2))<<16|((uint32_t)*((uint8_t*)_payload+18+3))<<24); _f.f; }))
#define DL_BOOZ_SIM_POS_LLH_pprz_alt(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+22)|*((uint8_t*)_payload+22+1)<<8|((uint32_t)*((uint8_t*)_payload+22+2))<<16|((uint32_t)*((uint8_t*)_payload+22+3))<<24); _f.f; }))
#define DL_BOOZ_SIM_POS_LLH_alt_geod(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+26)|*((uint8_t*)_payload+26+1)<<8|((uint32_t)*((uint8_t*)_payload+26+2))<<16|((uint32_t)*((uint8_t*)_payload+26+3))<<24); _f.f; }))
#define DL_BOOZ_SIM_POS_LLH_agl(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+30)|*((uint8_t*)_payload+30+1)<<8|((uint32_t)*((uint8_t*)_payload+30+2))<<16|((uint32_t)*((uint8_t*)_payload+30+3))<<24); _f.f; }))
#define DL_BOOZ_SIM_POS_LLH_asl(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+34)|*((uint8_t*)_payload+34+1)<<8|((uint32_t)*((uint8_t*)_payload+34+2))<<16|((uint32_t)*((uint8_t*)_payload+34+3))<<24); _f.f; }))

#define DL_BOOZ_SIM_RPMS_front(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+2)|*((uint8_t*)_payload+2+1)<<8|((uint32_t)*((uint8_t*)_payload+2+2))<<16|((uint32_t)*((uint8_t*)_payload+2+3))<<24); _f.f; }))
#define DL_BOOZ_SIM_RPMS_back(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+6)|*((uint8_t*)_payload+6+1)<<8|((uint32_t)*((uint8_t*)_payload+6+2))<<16|((uint32_t)*((uint8_t*)_payload+6+3))<<24); _f.f; }))
#define DL_BOOZ_SIM_RPMS_right(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+10)|*((uint8_t*)_payload+10+1)<<8|((uint32_t)*((uint8_t*)_payload+10+2))<<16|((uint32_t)*((uint8_t*)_payload+10+3))<<24); _f.f; }))
#define DL_BOOZ_SIM_RPMS_left(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+14)|*((uint8_t*)_payload+14+1)<<8|((uint32_t)*((uint8_t*)_payload+14+2))<<16|((uint32_t)*((uint8_t*)_payload+14+3))<<24); _f.f; }))

#define DL_BOOZ_SIM_SPEED_POS_ltpp_xdd(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+2)|*((uint8_t*)_payload+2+1)<<8|((uint32_t)*((uint8_t*)_payload+2+2))<<16|((uint32_t)*((uint8_t*)_payload+2+3))<<24); _f.f; }))
#define DL_BOOZ_SIM_SPEED_POS_ltpp_ydd(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+6)|*((uint8_t*)_payload+6+1)<<8|((uint32_t)*((uint8_t*)_payload+6+2))<<16|((uint32_t)*((uint8_t*)_payload+6+3))<<24); _f.f; }))
#define DL_BOOZ_SIM_SPEED_POS_ltpp_zdd(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+10)|*((uint8_t*)_payload+10+1)<<8|((uint32_t)*((uint8_t*)_payload+10+2))<<16|((uint32_t)*((uint8_t*)_payload+10+3))<<24); _f.f; }))
#define DL_BOOZ_SIM_SPEED_POS_ltpp_xd(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+14)|*((uint8_t*)_payload+14+1)<<8|((uint32_t)*((uint8_t*)_payload+14+2))<<16|((uint32_t)*((uint8_t*)_payload+14+3))<<24); _f.f; }))
#define DL_BOOZ_SIM_SPEED_POS_ltpp_yd(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+18)|*((uint8_t*)_payload+18+1)<<8|((uint32_t)*((uint8_t*)_payload+18+2))<<16|((uint32_t)*((uint8_t*)_payload+18+3))<<24); _f.f; }))
#define DL_BOOZ_SIM_SPEED_POS_ltpp_zd(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+22)|*((uint8_t*)_payload+22+1)<<8|((uint32_t)*((uint8_t*)_payload+22+2))<<16|((uint32_t)*((uint8_t*)_payload+22+3))<<24); _f.f; }))
#define DL_BOOZ_SIM_SPEED_POS_ltpp_x(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+26)|*((uint8_t*)_payload+26+1)<<8|((uint32_t)*((uint8_t*)_payload+26+2))<<16|((uint32_t)*((uint8_t*)_payload+26+3))<<24); _f.f; }))
#define DL_BOOZ_SIM_SPEED_POS_ltpp_y(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+30)|*((uint8_t*)_payload+30+1)<<8|((uint32_t)*((uint8_t*)_payload+30+2))<<16|((uint32_t)*((uint8_t*)_payload+30+3))<<24); _f.f; }))
#define DL_BOOZ_SIM_SPEED_POS_ltpp_z(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+34)|*((uint8_t*)_payload+34+1)<<8|((uint32_t)*((uint8_t*)_payload+34+2))<<16|((uint32_t)*((uint8_t*)_payload+34+3))<<24); _f.f; }))

#define DL_BOOZ_SIM_RATE_ATTITUDE_p(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+2)|*((uint8_t*)_payload+2+1)<<8|((uint32_t)*((uint8_t*)_payload+2+2))<<16|((uint32_t)*((uint8_t*)_payload+2+3))<<24); _f.f; }))
#define DL_BOOZ_SIM_RATE_ATTITUDE_q(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+6)|*((uint8_t*)_payload+6+1)<<8|((uint32_t)*((uint8_t*)_payload+6+2))<<16|((uint32_t)*((uint8_t*)_payload+6+3))<<24); _f.f; }))
#define DL_BOOZ_SIM_RATE_ATTITUDE_r(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+10)|*((uint8_t*)_payload+10+1)<<8|((uint32_t)*((uint8_t*)_payload+10+2))<<16|((uint32_t)*((uint8_t*)_payload+10+3))<<24); _f.f; }))
#define DL_BOOZ_SIM_RATE_ATTITUDE_phi(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+14)|*((uint8_t*)_payload+14+1)<<8|((uint32_t)*((uint8_t*)_payload+14+2))<<16|((uint32_t)*((uint8_t*)_payload+14+3))<<24); _f.f; }))
#define DL_BOOZ_SIM_RATE_ATTITUDE_theta(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+18)|*((uint8_t*)_payload+18+1)<<8|((uint32_t)*((uint8_t*)_payload+18+2))<<16|((uint32_t)*((uint8_t*)_payload+18+3))<<24); _f.f; }))
#define DL_BOOZ_SIM_RATE_ATTITUDE_psi(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+22)|*((uint8_t*)_payload+22+1)<<8|((uint32_t)*((uint8_t*)_payload+22+2))<<16|((uint32_t)*((uint8_t*)_payload+22+3))<<24); _f.f; }))

#define DL_BOOZ_SIM_GYRO_BIAS_bp(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+2)|*((uint8_t*)_payload+2+1)<<8|((uint32_t)*((uint8_t*)_payload+2+2))<<16|((uint32_t)*((uint8_t*)_payload+2+3))<<24); _f.f; }))
#define DL_BOOZ_SIM_GYRO_BIAS_bq(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+6)|*((uint8_t*)_payload+6+1)<<8|((uint32_t)*((uint8_t*)_payload+6+2))<<16|((uint32_t)*((uint8_t*)_payload+6+3))<<24); _f.f; }))
#define DL_BOOZ_SIM_GYRO_BIAS_br(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+10)|*((uint8_t*)_payload+10+1)<<8|((uint32_t)*((uint8_t*)_payload+10+2))<<16|((uint32_t)*((uint8_t*)_payload+10+3))<<24); _f.f; }))

#define DL_BOOZ_SIM_RANGE_METER_dist(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+2)|*((uint8_t*)_payload+2+1)<<8|((uint32_t)*((uint8_t*)_payload+2+2))<<16|((uint32_t)*((uint8_t*)_payload+2+3))<<24); _f.f; }))

#define DL_BOOZ_SIM_WIND_vx(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+2)|*((uint8_t*)_payload+2+1)<<8|((uint32_t)*((uint8_t*)_payload+2+2))<<16|((uint32_t)*((uint8_t*)_payload+2+3))<<24); _f.f; }))
#define DL_BOOZ_SIM_WIND_vy(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+6)|*((uint8_t*)_payload+6+1)<<8|((uint32_t)*((uint8_t*)_payload+6+2))<<16|((uint32_t)*((uint8_t*)_payload+6+3))<<24); _f.f; }))
#define DL_BOOZ_SIM_WIND_vz(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+10)|*((uint8_t*)_payload+10+1)<<8|((uint32_t)*((uint8_t*)_payload+10+2))<<16|((uint32_t)*((uint8_t*)_payload+10+3))<<24); _f.f; }))

#define DL_BOOZ_DEBUG_FOO_ami_stat(_payload) ((uint8_t)(*((uint8_t*)_payload+2)))

#define DL_BOOZ_MAX1167_ERR_erno(_payload) ((uint8_t)(*((uint8_t*)_payload+2)))

#define DL_PPRZ_DEBUG_module(_payload) ((uint8_t)(*((uint8_t*)_payload+2)))
#define DL_PPRZ_DEBUG_errno(_payload) ((uint8_t)(*((uint8_t*)_payload+3)))

#define DL_BOOZ_SIM_ACCEL_LTP_xdd(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+2)|*((uint8_t*)_payload+2+1)<<8|((uint32_t)*((uint8_t*)_payload+2+2))<<16|((uint32_t)*((uint8_t*)_payload+2+3))<<24); _f.f; }))
#define DL_BOOZ_SIM_ACCEL_LTP_ydd(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+6)|*((uint8_t*)_payload+6+1)<<8|((uint32_t)*((uint8_t*)_payload+6+2))<<16|((uint32_t)*((uint8_t*)_payload+6+3))<<24); _f.f; }))
#define DL_BOOZ_SIM_ACCEL_LTP_zdd(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+10)|*((uint8_t*)_payload+10+1)<<8|((uint32_t)*((uint8_t*)_payload+10+2))<<16|((uint32_t)*((uint8_t*)_payload+10+3))<<24); _f.f; }))

#define DL_LOOSE_INS_GPS_status(_payload) ((uint8_t)(*((uint8_t*)_payload+2)))
#define DL_LOOSE_INS_GPS_time_running(_payload) (({ union { uint64_t u; double f; } _f; _f.u = (uint64_t)(*((uint8_t*)_payload+3)|((uint64_t)*((uint8_t*)_payload+3+1))<<8|((uint64_t)*((uint8_t*)_payload+3+2))<<16|((uint64_t)*((uint8_t*)_payload+3+3))<<24|((uint64_t)*((uint8_t*)_payload+3+4))<<32|((uint64_t)*((uint8_t*)_payload+3+5))<<40|((uint64_t)*((uint8_t*)_payload+3+6))<<48|((uint64_t)*((uint8_t*)_payload+3+7))<<56); Swap32IfBigEndian(_f.u); _f.f; }))
#define DL_LOOSE_INS_GPS_q0(_payload) (({ union { uint64_t u; double f; } _f; _f.u = (uint64_t)(*((uint8_t*)_payload+11)|((uint64_t)*((uint8_t*)_payload+11+1))<<8|((uint64_t)*((uint8_t*)_payload+11+2))<<16|((uint64_t)*((uint8_t*)_payload+11+3))<<24|((uint64_t)*((uint8_t*)_payload+11+4))<<32|((uint64_t)*((uint8_t*)_payload+11+5))<<40|((uint64_t)*((uint8_t*)_payload+11+6))<<48|((uint64_t)*((uint8_t*)_payload+11+7))<<56); Swap32IfBigEndian(_f.u); _f.f; }))
#define DL_LOOSE_INS_GPS_q1(_payload) (({ union { uint64_t u; double f; } _f; _f.u = (uint64_t)(*((uint8_t*)_payload+19)|((uint64_t)*((uint8_t*)_payload+19+1))<<8|((uint64_t)*((uint8_t*)_payload+19+2))<<16|((uint64_t)*((uint8_t*)_payload+19+3))<<24|((uint64_t)*((uint8_t*)_payload+19+4))<<32|((uint64_t)*((uint8_t*)_payload+19+5))<<40|((uint64_t)*((uint8_t*)_payload+19+6))<<48|((uint64_t)*((uint8_t*)_payload+19+7))<<56); Swap32IfBigEndian(_f.u); _f.f; }))
#define DL_LOOSE_INS_GPS_q2(_payload) (({ union { uint64_t u; double f; } _f; _f.u = (uint64_t)(*((uint8_t*)_payload+27)|((uint64_t)*((uint8_t*)_payload+27+1))<<8|((uint64_t)*((uint8_t*)_payload+27+2))<<16|((uint64_t)*((uint8_t*)_payload+27+3))<<24|((uint64_t)*((uint8_t*)_payload+27+4))<<32|((uint64_t)*((uint8_t*)_payload+27+5))<<40|((uint64_t)*((uint8_t*)_payload+27+6))<<48|((uint64_t)*((uint8_t*)_payload+27+7))<<56); Swap32IfBigEndian(_f.u); _f.f; }))
#define DL_LOOSE_INS_GPS_q3(_payload) (({ union { uint64_t u; double f; } _f; _f.u = (uint64_t)(*((uint8_t*)_payload+35)|((uint64_t)*((uint8_t*)_payload+35+1))<<8|((uint64_t)*((uint8_t*)_payload+35+2))<<16|((uint64_t)*((uint8_t*)_payload+35+3))<<24|((uint64_t)*((uint8_t*)_payload+35+4))<<32|((uint64_t)*((uint8_t*)_payload+35+5))<<40|((uint64_t)*((uint8_t*)_payload+35+6))<<48|((uint64_t)*((uint8_t*)_payload+35+7))<<56); Swap32IfBigEndian(_f.u); _f.f; }))
#define DL_LOOSE_INS_GPS_phi(_payload) (({ union { uint64_t u; double f; } _f; _f.u = (uint64_t)(*((uint8_t*)_payload+43)|((uint64_t)*((uint8_t*)_payload+43+1))<<8|((uint64_t)*((uint8_t*)_payload+43+2))<<16|((uint64_t)*((uint8_t*)_payload+43+3))<<24|((uint64_t)*((uint8_t*)_payload+43+4))<<32|((uint64_t)*((uint8_t*)_payload+43+5))<<40|((uint64_t)*((uint8_t*)_payload+43+6))<<48|((uint64_t)*((uint8_t*)_payload+43+7))<<56); Swap32IfBigEndian(_f.u); _f.f; }))
#define DL_LOOSE_INS_GPS_theta(_payload) (({ union { uint64_t u; double f; } _f; _f.u = (uint64_t)(*((uint8_t*)_payload+51)|((uint64_t)*((uint8_t*)_payload+51+1))<<8|((uint64_t)*((uint8_t*)_payload+51+2))<<16|((uint64_t)*((uint8_t*)_payload+51+3))<<24|((uint64_t)*((uint8_t*)_payload+51+4))<<32|((uint64_t)*((uint8_t*)_payload+51+5))<<40|((uint64_t)*((uint8_t*)_payload+51+6))<<48|((uint64_t)*((uint8_t*)_payload+51+7))<<56); Swap32IfBigEndian(_f.u); _f.f; }))
#define DL_LOOSE_INS_GPS_psi(_payload) (({ union { uint64_t u; double f; } _f; _f.u = (uint64_t)(*((uint8_t*)_payload+59)|((uint64_t)*((uint8_t*)_payload+59+1))<<8|((uint64_t)*((uint8_t*)_payload+59+2))<<16|((uint64_t)*((uint8_t*)_payload+59+3))<<24|((uint64_t)*((uint8_t*)_payload+59+4))<<32|((uint64_t)*((uint8_t*)_payload+59+5))<<40|((uint64_t)*((uint8_t*)_payload+59+6))<<48|((uint64_t)*((uint8_t*)_payload+59+7))<<56); Swap32IfBigEndian(_f.u); _f.f; }))
#define DL_LOOSE_INS_GPS_north(_payload) (({ union { uint64_t u; double f; } _f; _f.u = (uint64_t)(*((uint8_t*)_payload+67)|((uint64_t)*((uint8_t*)_payload+67+1))<<8|((uint64_t)*((uint8_t*)_payload+67+2))<<16|((uint64_t)*((uint8_t*)_payload+67+3))<<24|((uint64_t)*((uint8_t*)_payload+67+4))<<32|((uint64_t)*((uint8_t*)_payload+67+5))<<40|((uint64_t)*((uint8_t*)_payload+67+6))<<48|((uint64_t)*((uint8_t*)_payload+67+7))<<56); Swap32IfBigEndian(_f.u); _f.f; }))
#define DL_LOOSE_INS_GPS_east(_payload) (({ union { uint64_t u; double f; } _f; _f.u = (uint64_t)(*((uint8_t*)_payload+75)|((uint64_t)*((uint8_t*)_payload+75+1))<<8|((uint64_t)*((uint8_t*)_payload+75+2))<<16|((uint64_t)*((uint8_t*)_payload+75+3))<<24|((uint64_t)*((uint8_t*)_payload+75+4))<<32|((uint64_t)*((uint8_t*)_payload+75+5))<<40|((uint64_t)*((uint8_t*)_payload+75+6))<<48|((uint64_t)*((uint8_t*)_payload+75+7))<<56); Swap32IfBigEndian(_f.u); _f.f; }))
#define DL_LOOSE_INS_GPS_down(_payload) (({ union { uint64_t u; double f; } _f; _f.u = (uint64_t)(*((uint8_t*)_payload+83)|((uint64_t)*((uint8_t*)_payload+83+1))<<8|((uint64_t)*((uint8_t*)_payload+83+2))<<16|((uint64_t)*((uint8_t*)_payload+83+3))<<24|((uint64_t)*((uint8_t*)_payload+83+4))<<32|((uint64_t)*((uint8_t*)_payload+83+5))<<40|((uint64_t)*((uint8_t*)_payload+83+6))<<48|((uint64_t)*((uint8_t*)_payload+83+7))<<56); Swap32IfBigEndian(_f.u); _f.f; }))
#define DL_LOOSE_INS_GPS_v_north(_payload) (({ union { uint64_t u; double f; } _f; _f.u = (uint64_t)(*((uint8_t*)_payload+91)|((uint64_t)*((uint8_t*)_payload+91+1))<<8|((uint64_t)*((uint8_t*)_payload+91+2))<<16|((uint64_t)*((uint8_t*)_payload+91+3))<<24|((uint64_t)*((uint8_t*)_payload+91+4))<<32|((uint64_t)*((uint8_t*)_payload+91+5))<<40|((uint64_t)*((uint8_t*)_payload+91+6))<<48|((uint64_t)*((uint8_t*)_payload+91+7))<<56); Swap32IfBigEndian(_f.u); _f.f; }))
#define DL_LOOSE_INS_GPS_v_east(_payload) (({ union { uint64_t u; double f; } _f; _f.u = (uint64_t)(*((uint8_t*)_payload+99)|((uint64_t)*((uint8_t*)_payload+99+1))<<8|((uint64_t)*((uint8_t*)_payload+99+2))<<16|((uint64_t)*((uint8_t*)_payload+99+3))<<24|((uint64_t)*((uint8_t*)_payload+99+4))<<32|((uint64_t)*((uint8_t*)_payload+99+5))<<40|((uint64_t)*((uint8_t*)_payload+99+6))<<48|((uint64_t)*((uint8_t*)_payload+99+7))<<56); Swap32IfBigEndian(_f.u); _f.f; }))
#define DL_LOOSE_INS_GPS_v_down(_payload) (({ union { uint64_t u; double f; } _f; _f.u = (uint64_t)(*((uint8_t*)_payload+107)|((uint64_t)*((uint8_t*)_payload+107+1))<<8|((uint64_t)*((uint8_t*)_payload+107+2))<<16|((uint64_t)*((uint8_t*)_payload+107+3))<<24|((uint64_t)*((uint8_t*)_payload+107+4))<<32|((uint64_t)*((uint8_t*)_payload+107+5))<<40|((uint64_t)*((uint8_t*)_payload+107+6))<<48|((uint64_t)*((uint8_t*)_payload+107+7))<<56); Swap32IfBigEndian(_f.u); _f.f; }))
#define DL_LOOSE_INS_GPS_est_p(_payload) (({ union { uint64_t u; double f; } _f; _f.u = (uint64_t)(*((uint8_t*)_payload+115)|((uint64_t)*((uint8_t*)_payload+115+1))<<8|((uint64_t)*((uint8_t*)_payload+115+2))<<16|((uint64_t)*((uint8_t*)_payload+115+3))<<24|((uint64_t)*((uint8_t*)_payload+115+4))<<32|((uint64_t)*((uint8_t*)_payload+115+5))<<40|((uint64_t)*((uint8_t*)_payload+115+6))<<48|((uint64_t)*((uint8_t*)_payload+115+7))<<56); Swap32IfBigEndian(_f.u); _f.f; }))
#define DL_LOOSE_INS_GPS_est_q(_payload) (({ union { uint64_t u; double f; } _f; _f.u = (uint64_t)(*((uint8_t*)_payload+123)|((uint64_t)*((uint8_t*)_payload+123+1))<<8|((uint64_t)*((uint8_t*)_payload+123+2))<<16|((uint64_t)*((uint8_t*)_payload+123+3))<<24|((uint64_t)*((uint8_t*)_payload+123+4))<<32|((uint64_t)*((uint8_t*)_payload+123+5))<<40|((uint64_t)*((uint8_t*)_payload+123+6))<<48|((uint64_t)*((uint8_t*)_payload+123+7))<<56); Swap32IfBigEndian(_f.u); _f.f; }))
#define DL_LOOSE_INS_GPS_est_r(_payload) (({ union { uint64_t u; double f; } _f; _f.u = (uint64_t)(*((uint8_t*)_payload+131)|((uint64_t)*((uint8_t*)_payload+131+1))<<8|((uint64_t)*((uint8_t*)_payload+131+2))<<16|((uint64_t)*((uint8_t*)_payload+131+3))<<24|((uint64_t)*((uint8_t*)_payload+131+4))<<32|((uint64_t)*((uint8_t*)_payload+131+5))<<40|((uint64_t)*((uint8_t*)_payload+131+6))<<48|((uint64_t)*((uint8_t*)_payload+131+7))<<56); Swap32IfBigEndian(_f.u); _f.f; }))
#define DL_LOOSE_INS_GPS_gyroBias_x(_payload) (({ union { uint64_t u; double f; } _f; _f.u = (uint64_t)(*((uint8_t*)_payload+139)|((uint64_t)*((uint8_t*)_payload+139+1))<<8|((uint64_t)*((uint8_t*)_payload+139+2))<<16|((uint64_t)*((uint8_t*)_payload+139+3))<<24|((uint64_t)*((uint8_t*)_payload+139+4))<<32|((uint64_t)*((uint8_t*)_payload+139+5))<<40|((uint64_t)*((uint8_t*)_payload+139+6))<<48|((uint64_t)*((uint8_t*)_payload+139+7))<<56); Swap32IfBigEndian(_f.u); _f.f; }))
#define DL_LOOSE_INS_GPS_gyroBias_y(_payload) (({ union { uint64_t u; double f; } _f; _f.u = (uint64_t)(*((uint8_t*)_payload+147)|((uint64_t)*((uint8_t*)_payload+147+1))<<8|((uint64_t)*((uint8_t*)_payload+147+2))<<16|((uint64_t)*((uint8_t*)_payload+147+3))<<24|((uint64_t)*((uint8_t*)_payload+147+4))<<32|((uint64_t)*((uint8_t*)_payload+147+5))<<40|((uint64_t)*((uint8_t*)_payload+147+6))<<48|((uint64_t)*((uint8_t*)_payload+147+7))<<56); Swap32IfBigEndian(_f.u); _f.f; }))
#define DL_LOOSE_INS_GPS_gyroBias_z(_payload) (({ union { uint64_t u; double f; } _f; _f.u = (uint64_t)(*((uint8_t*)_payload+155)|((uint64_t)*((uint8_t*)_payload+155+1))<<8|((uint64_t)*((uint8_t*)_payload+155+2))<<16|((uint64_t)*((uint8_t*)_payload+155+3))<<24|((uint64_t)*((uint8_t*)_payload+155+4))<<32|((uint64_t)*((uint8_t*)_payload+155+5))<<40|((uint64_t)*((uint8_t*)_payload+155+6))<<48|((uint64_t)*((uint8_t*)_payload+155+7))<<56); Swap32IfBigEndian(_f.u); _f.f; }))
#define DL_LOOSE_INS_GPS_imuCallbacks(_payload) ((uint32_t)(*((uint8_t*)_payload+163)|*((uint8_t*)_payload+163+1)<<8|((uint32_t)*((uint8_t*)_payload+163+2))<<16|((uint32_t)*((uint8_t*)_payload+163+3))<<24))
#define DL_LOOSE_INS_GPS_gpsCallbacks(_payload) ((uint32_t)(*((uint8_t*)_payload+167)|*((uint8_t*)_payload+167+1)<<8|((uint32_t)*((uint8_t*)_payload+167+2))<<16|((uint32_t)*((uint8_t*)_payload+167+3))<<24))
#define DL_LOOSE_INS_GPS_baroCallbacks(_payload) ((uint32_t)(*((uint8_t*)_payload+171)|*((uint8_t*)_payload+171+1)<<8|((uint32_t)*((uint8_t*)_payload+171+2))<<16|((uint32_t)*((uint8_t*)_payload+171+3))<<24))

#define DL_AFL_COEFFS_roll_a(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+2)|*((uint8_t*)_payload+2+1)<<8|((uint32_t)*((uint8_t*)_payload+2+2))<<16|((uint32_t)*((uint8_t*)_payload+2+3))<<24); _f.f; }))
#define DL_AFL_COEFFS_roll_b(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+6)|*((uint8_t*)_payload+6+1)<<8|((uint32_t)*((uint8_t*)_payload+6+2))<<16|((uint32_t)*((uint8_t*)_payload+6+3))<<24); _f.f; }))
#define DL_AFL_COEFFS_roll_c(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+10)|*((uint8_t*)_payload+10+1)<<8|((uint32_t)*((uint8_t*)_payload+10+2))<<16|((uint32_t)*((uint8_t*)_payload+10+3))<<24); _f.f; }))
#define DL_AFL_COEFFS_pitch_a(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+14)|*((uint8_t*)_payload+14+1)<<8|((uint32_t)*((uint8_t*)_payload+14+2))<<16|((uint32_t)*((uint8_t*)_payload+14+3))<<24); _f.f; }))
#define DL_AFL_COEFFS_pitch_b(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+18)|*((uint8_t*)_payload+18+1)<<8|((uint32_t)*((uint8_t*)_payload+18+2))<<16|((uint32_t)*((uint8_t*)_payload+18+3))<<24); _f.f; }))
#define DL_AFL_COEFFS_pitch_c(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+22)|*((uint8_t*)_payload+22+1)<<8|((uint32_t)*((uint8_t*)_payload+22+2))<<16|((uint32_t)*((uint8_t*)_payload+22+3))<<24); _f.f; }))
#define DL_AFL_COEFFS_yaw_a(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+26)|*((uint8_t*)_payload+26+1)<<8|((uint32_t)*((uint8_t*)_payload+26+2))<<16|((uint32_t)*((uint8_t*)_payload+26+3))<<24); _f.f; }))
#define DL_AFL_COEFFS_yaw_b(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+30)|*((uint8_t*)_payload+30+1)<<8|((uint32_t)*((uint8_t*)_payload+30+2))<<16|((uint32_t)*((uint8_t*)_payload+30+3))<<24); _f.f; }))
#define DL_AFL_COEFFS_yaw_c(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+34)|*((uint8_t*)_payload+34+1)<<8|((uint32_t)*((uint8_t*)_payload+34+2))<<16|((uint32_t)*((uint8_t*)_payload+34+3))<<24); _f.f; }))

#define DL_BOOZ_ATT_REF_MODEL_omega_p(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+2)|*((uint8_t*)_payload+2+1)<<8|((uint32_t)*((uint8_t*)_payload+2+2))<<16|((uint32_t)*((uint8_t*)_payload+2+3))<<24); _f.f; }))
#define DL_BOOZ_ATT_REF_MODEL_zeta_p(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+6)|*((uint8_t*)_payload+6+1)<<8|((uint32_t)*((uint8_t*)_payload+6+2))<<16|((uint32_t)*((uint8_t*)_payload+6+3))<<24); _f.f; }))
#define DL_BOOZ_ATT_REF_MODEL_omega_q(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+10)|*((uint8_t*)_payload+10+1)<<8|((uint32_t)*((uint8_t*)_payload+10+2))<<16|((uint32_t)*((uint8_t*)_payload+10+3))<<24); _f.f; }))
#define DL_BOOZ_ATT_REF_MODEL_zeta_q(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+14)|*((uint8_t*)_payload+14+1)<<8|((uint32_t)*((uint8_t*)_payload+14+2))<<16|((uint32_t)*((uint8_t*)_payload+14+3))<<24); _f.f; }))
#define DL_BOOZ_ATT_REF_MODEL_omega_r(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+18)|*((uint8_t*)_payload+18+1)<<8|((uint32_t)*((uint8_t*)_payload+18+2))<<16|((uint32_t)*((uint8_t*)_payload+18+3))<<24); _f.f; }))
#define DL_BOOZ_ATT_REF_MODEL_zeta_r(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+22)|*((uint8_t*)_payload+22+1)<<8|((uint32_t)*((uint8_t*)_payload+22+2))<<16|((uint32_t)*((uint8_t*)_payload+22+3))<<24); _f.f; }))

#define DL_BOOZ2_FF_ADAP_roll(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+2)|*((uint8_t*)_payload+2+1)<<8|((uint32_t)*((uint8_t*)_payload+2+2))<<16|((uint32_t)*((uint8_t*)_payload+2+3))<<24); _f.f; }))
#define DL_BOOZ2_FF_ADAP_pitch(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+6)|*((uint8_t*)_payload+6+1)<<8|((uint32_t)*((uint8_t*)_payload+6+2))<<16|((uint32_t)*((uint8_t*)_payload+6+3))<<24); _f.f; }))
#define DL_BOOZ2_FF_ADAP_yaw(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+10)|*((uint8_t*)_payload+10+1)<<8|((uint32_t)*((uint8_t*)_payload+10+2))<<16|((uint32_t)*((uint8_t*)_payload+10+3))<<24); _f.f; }))

#define DL_I2C_ERRORS_acknowledge_failure_cnt(_payload) ((uint16_t)(*((uint8_t*)_payload+2)|*((uint8_t*)_payload+2+1)<<8))
#define DL_I2C_ERRORS_misplaced_start_or_stop_cnt(_payload) ((uint16_t)(*((uint8_t*)_payload+4)|*((uint8_t*)_payload+4+1)<<8))
#define DL_I2C_ERRORS_arbitration_lost_cnt(_payload) ((uint16_t)(*((uint8_t*)_payload+6)|*((uint8_t*)_payload+6+1)<<8))
#define DL_I2C_ERRORS_overrun_or_underrun_cnt(_payload) ((uint16_t)(*((uint8_t*)_payload+8)|*((uint8_t*)_payload+8+1)<<8))
#define DL_I2C_ERRORS_pec_error_in_reception_cnt(_payload) ((uint16_t)(*((uint8_t*)_payload+10)|*((uint8_t*)_payload+10+1)<<8))
#define DL_I2C_ERRORS_timeout_or_tlow_error_cnt(_payload) ((uint16_t)(*((uint8_t*)_payload+12)|*((uint8_t*)_payload+12+1)<<8))
#define DL_I2C_ERRORS_smbus_alert_cnt(_payload) ((uint16_t)(*((uint8_t*)_payload+14)|*((uint8_t*)_payload+14+1)<<8))
#define DL_I2C_ERRORS_unexpected_event_cnt(_payload) ((uint16_t)(*((uint8_t*)_payload+16)|*((uint8_t*)_payload+16+1)<<8))
#define DL_I2C_ERRORS_last_unexpected_event(_payload) ((uint32_t)(*((uint8_t*)_payload+18)|*((uint8_t*)_payload+18+1)<<8|((uint32_t)*((uint8_t*)_payload+18+2))<<16|((uint32_t)*((uint8_t*)_payload+18+3))<<24))

#define DL_RDYB_TRAJECTORY_commanded_phi(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+2)|*((uint8_t*)_payload+2+1)<<8|((uint32_t)*((uint8_t*)_payload+2+2))<<16|((uint32_t)*((uint8_t*)_payload+2+3))<<24); _f.f; }))
#define DL_RDYB_TRAJECTORY_commanded_theta(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+6)|*((uint8_t*)_payload+6+1)<<8|((uint32_t)*((uint8_t*)_payload+6+2))<<16|((uint32_t)*((uint8_t*)_payload+6+3))<<24); _f.f; }))
#define DL_RDYB_TRAJECTORY_commanded_psi(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+10)|*((uint8_t*)_payload+10+1)<<8|((uint32_t)*((uint8_t*)_payload+10+2))<<16|((uint32_t)*((uint8_t*)_payload+10+3))<<24); _f.f; }))
#define DL_RDYB_TRAJECTORY_setpoint_x(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+14)|*((uint8_t*)_payload+14+1)<<8|((uint32_t)*((uint8_t*)_payload+14+2))<<16|((uint32_t)*((uint8_t*)_payload+14+3))<<24); _f.f; }))
#define DL_RDYB_TRAJECTORY_setpoint_y(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+18)|*((uint8_t*)_payload+18+1)<<8|((uint32_t)*((uint8_t*)_payload+18+2))<<16|((uint32_t)*((uint8_t*)_payload+18+3))<<24); _f.f; }))
#define DL_RDYB_TRAJECTORY_setpoint_z(_payload) (({ union { uint32_t u; float f; } _f; _f.u = (uint32_t)(*((uint8_t*)_payload+22)|*((uint8_t*)_payload+22+1)<<8|((uint32_t)*((uint8_t*)_payload+22+2))<<16|((uint32_t)*((uint8_t*)_payload+22+3))<<24); _f.f; }))

#define DL_HENRY_GNSS_last_imu_update(_payload) ((uint32_t)(*((uint8_t*)_payload+2)|*((uint8_t*)_payload+2+1)<<8|((uint32_t)*((uint8_t*)_payload+2+2))<<16|((uint32_t)*((uint8_t*)_payload+2+3))<<24))
#define DL_HENRY_GNSS_GPS_time(_payload) (({ union { uint64_t u; double f; } _f; _f.u = (uint64_t)(*((uint8_t*)_payload+6)|((uint64_t)*((uint8_t*)_payload+6+1))<<8|((uint64_t)*((uint8_t*)_payload+6+2))<<16|((uint64_t)*((uint8_t*)_payload+6+3))<<24|((uint64_t)*((uint8_t*)_payload+6+4))<<32|((uint64_t)*((uint8_t*)_payload+6+5))<<40|((uint64_t)*((uint8_t*)_payload+6+6))<<48|((uint64_t)*((uint8_t*)_payload+6+7))<<56); Swap32IfBigEndian(_f.u); _f.f; }))
#define DL_HENRY_GNSS_GPS_solution_valid(_payload) ((uint8_t)(*((uint8_t*)_payload+14)))
#define DL_HENRY_GNSS_latitude(_payload) (({ union { uint64_t u; double f; } _f; _f.u = (uint64_t)(*((uint8_t*)_payload+15)|((uint64_t)*((uint8_t*)_payload+15+1))<<8|((uint64_t)*((uint8_t*)_payload+15+2))<<16|((uint64_t)*((uint8_t*)_payload+15+3))<<24|((uint64_t)*((uint8_t*)_payload+15+4))<<32|((uint64_t)*((uint8_t*)_payload+15+5))<<40|((uint64_t)*((uint8_t*)_payload+15+6))<<48|((uint64_t)*((uint8_t*)_payload+15+7))<<56); Swap32IfBigEndian(_f.u); _f.f; }))
#define DL_HENRY_GNSS_longitude(_payload) (({ union { uint64_t u; double f; } _f; _f.u = (uint64_t)(*((uint8_t*)_payload+23)|((uint64_t)*((uint8_t*)_payload+23+1))<<8|((uint64_t)*((uint8_t*)_payload+23+2))<<16|((uint64_t)*((uint8_t*)_payload+23+3))<<24|((uint64_t)*((uint8_t*)_payload+23+4))<<32|((uint64_t)*((uint8_t*)_payload+23+5))<<40|((uint64_t)*((uint8_t*)_payload+23+6))<<48|((uint64_t)*((uint8_t*)_payload+23+7))<<56); Swap32IfBigEndian(_f.u); _f.f; }))
#define DL_HENRY_GNSS_altitude(_payload) (({ union { uint64_t u; double f; } _f; _f.u = (uint64_t)(*((uint8_t*)_payload+31)|((uint64_t)*((uint8_t*)_payload+31+1))<<8|((uint64_t)*((uint8_t*)_payload+31+2))<<16|((uint64_t)*((uint8_t*)_payload+31+3))<<24|((uint64_t)*((uint8_t*)_payload+31+4))<<32|((uint64_t)*((uint8_t*)_payload+31+5))<<40|((uint64_t)*((uint8_t*)_payload+31+6))<<48|((uint64_t)*((uint8_t*)_payload+31+7))<<56); Swap32IfBigEndian(_f.u); _f.f; }))
#define DL_HENRY_GNSS_North(_payload) (({ union { uint64_t u; double f; } _f; _f.u = (uint64_t)(*((uint8_t*)_payload+39)|((uint64_t)*((uint8_t*)_payload+39+1))<<8|((uint64_t)*((uint8_t*)_payload+39+2))<<16|((uint64_t)*((uint8_t*)_payload+39+3))<<24|((uint64_t)*((uint8_t*)_payload+39+4))<<32|((uint64_t)*((uint8_t*)_payload+39+5))<<40|((uint64_t)*((uint8_t*)_payload+39+6))<<48|((uint64_t)*((uint8_t*)_payload+39+7))<<56); Swap32IfBigEndian(_f.u); _f.f; }))
#define DL_HENRY_GNSS_East(_payload) (({ union { uint64_t u; double f; } _f; _f.u = (uint64_t)(*((uint8_t*)_payload+47)|((uint64_t)*((uint8_t*)_payload+47+1))<<8|((uint64_t)*((uint8_t*)_payload+47+2))<<16|((uint64_t)*((uint8_t*)_payload+47+3))<<24|((uint64_t)*((uint8_t*)_payload+47+4))<<32|((uint64_t)*((uint8_t*)_payload+47+5))<<40|((uint64_t)*((uint8_t*)_payload+47+6))<<48|((uint64_t)*((uint8_t*)_payload+47+7))<<56); Swap32IfBigEndian(_f.u); _f.f; }))
#define DL_HENRY_GNSS_Down(_payload) (({ union { uint64_t u; double f; } _f; _f.u = (uint64_t)(*((uint8_t*)_payload+55)|((uint64_t)*((uint8_t*)_payload+55+1))<<8|((uint64_t)*((uint8_t*)_payload+55+2))<<16|((uint64_t)*((uint8_t*)_payload+55+3))<<24|((uint64_t)*((uint8_t*)_payload+55+4))<<32|((uint64_t)*((uint8_t*)_payload+55+5))<<40|((uint64_t)*((uint8_t*)_payload+55+6))<<48|((uint64_t)*((uint8_t*)_payload+55+7))<<56); Swap32IfBigEndian(_f.u); _f.f; }))
#define DL_HENRY_GNSS_SVs_Tracked(_payload) ((uint8_t)(*((uint8_t*)_payload+63)))
#define DL_HENRY_GNSS_SVs_PVT(_payload) ((uint8_t)(*((uint8_t*)_payload+64)))
#define DL_HENRY_GNSS_V_North(_payload) (({ union { uint64_t u; double f; } _f; _f.u = (uint64_t)(*((uint8_t*)_payload+65)|((uint64_t)*((uint8_t*)_payload+65+1))<<8|((uint64_t)*((uint8_t*)_payload+65+2))<<16|((uint64_t)*((uint8_t*)_payload+65+3))<<24|((uint64_t)*((uint8_t*)_payload+65+4))<<32|((uint64_t)*((uint8_t*)_payload+65+5))<<40|((uint64_t)*((uint8_t*)_payload+65+6))<<48|((uint64_t)*((uint8_t*)_payload+65+7))<<56); Swap32IfBigEndian(_f.u); _f.f; }))
#define DL_HENRY_GNSS_V_East(_payload) (({ union { uint64_t u; double f; } _f; _f.u = (uint64_t)(*((uint8_t*)_payload+73)|((uint64_t)*((uint8_t*)_payload+73+1))<<8|((uint64_t)*((uint8_t*)_payload+73+2))<<16|((uint64_t)*((uint8_t*)_payload+73+3))<<24|((uint64_t)*((uint8_t*)_payload+73+4))<<32|((uint64_t)*((uint8_t*)_payload+73+5))<<40|((uint64_t)*((uint8_t*)_payload+73+6))<<48|((uint64_t)*((uint8_t*)_payload+73+7))<<56); Swap32IfBigEndian(_f.u); _f.f; }))
#define DL_HENRY_GNSS_V_Down(_payload) (({ union { uint64_t u; double f; } _f; _f.u = (uint64_t)(*((uint8_t*)_payload+81)|((uint64_t)*((uint8_t*)_payload+81+1))<<8|((uint64_t)*((uint8_t*)_payload+81+2))<<16|((uint64_t)*((uint8_t*)_payload+81+3))<<24|((uint64_t)*((uint8_t*)_payload+81+4))<<32|((uint64_t)*((uint8_t*)_payload+81+5))<<40|((uint64_t)*((uint8_t*)_payload+81+6))<<48|((uint64_t)*((uint8_t*)_payload+81+7))<<56); Swap32IfBigEndian(_f.u); _f.f; }))

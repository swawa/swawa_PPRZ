/* This file has been generated from /home/excelobs/paparazzi/conf/airframes/funjetgfi10.xml */
/* Please DO NOT EDIT */

#ifndef MODULES_H
#define MODULES_H 

#define MODULES_IDLE  0
#define MODULES_RUN   1
#define MODULES_START 2
#define MODULES_STOP  3

#ifdef MODULES_C
#define EXTERN_MODULES
#else
#define EXTERN_MODULES extern
#endif
#include "std.h"
#include "ins/ins_arduimu.h"
#include "sensors/baro_scp_i2c.h"
#include "sensors/airspeed_ets.h"
#include "meteo/humid_sht_i2c.h"
#include "meteo/ir_mlx.h"


#ifdef MODULES_C

static inline void modules_init(void) {
  ins_ardu_init();
  baro_scp_init();
  airspeed_ets_init();
  humid_sht_init();
  ir_mlx_init();
}

static inline void modules_periodic_task(void) {
  static uint8_t i1; i1++; if (i1>=1) i1=0;
  static uint8_t i6; i6++; if (i6>=6) i6=0;
  static uint8_t i7; i7++; if (i7>=7) i7=0;
  static uint8_t i15; i15++; if (i15>=15) i15=0;
  static uint8_t i33; i33++; if (i33>=33) i33=0;






  ins_ardu_periodic();
  if (i6 == 0) {
    airspeed_ets_read_periodic();
  }
  if (i7 == 3) {
    ir_mlx_periodic();
  }
  if (i15 == 0) {
    humid_sht_periodic();
  }
  else if (i15 == 6) {
    humid_sht_p_temp();
  }
  else if (i15 == 9) {
    humid_sht_p_humid();
  }
  if (i33 == 6) {
    baro_scp_periodic();
  }
}

static inline void modules_event_task(void) {
  ins_ardu_event();
  baro_scp_event();
  AirspeedEtsEvent();
  humid_sht_event();
  ir_mlx_event();
}

#endif // MODULES_C

#ifdef MODULES_DATALINK_C

#include "messages.h"
#include "generated/airframe.h"
static inline void modules_parse_datalink(uint8_t msg_id __attribute__ ((unused))) {
}

#endif // MODULES_DATALINK_C

#endif // MODULES_H

#ifndef ins_ardimu_ahrs_h
#define ins_ardimu_ahrs_h


extern float ins_roll_neutral;
extern float ins_pitch_neutral;

void ins_ardu_init( void );
void ins_ardu_periodic( void );
void ins_ardu_event( void );

void ins_ardu_send_gps( void );
void ins_data_process( void );

#endif // ins_ardimu_ahrs_h

#ifndef _DATA_TYPE_DEF_H
#define _DATA_TYPE_DEF_H
#include "map"
#include "string"

#pragma pack(1)
typedef struct _EXTERNALAXIS_STATUS{
    double exaxis_pos_back;
    double exaxis_speed_back;
    int exaxis_error_code;
    uint8_t exaxis_rdy;
    uint8_t exaxis_inpos;
    uint8_t exaxis_alm;
    uint8_t exaxis_flerr;
    uint8_t exaxis_nlimit;
    uint8_t exaxis_plimit;
    uint8_t exaxis_absofln;
    uint8_t exaxis_oflin;
    uint8_t exaxis_home_status;
}EXTERNALAXIS_STATUS;


typedef struct _FR_nonrt_state{
    uint16_t head;
    uint8_t count;
    uint16_t len;
    uint8_t prg_state;
    uint8_t error_code;
    uint8_t robot_mode;
    double j1_cur_pos;
    double j2_cur_pos;
    double j3_cur_pos;
    double j4_cur_pos;
    double j5_cur_pos;
    double j6_cur_pos;
    double cart_x_cur_pos;
    double cart_y_cur_pos;
    double cart_z_cur_pos;
    double cart_a_cur_pos;
    double cart_b_cur_pos;
    double cart_c_cur_pos;
    int tool_num;
    double j1_cur_tor;
    double j2_cur_tor;
    double j3_cur_tor;
    double j4_cur_tor;
    double j5_cur_tor;
    double j6_cur_tor;
    char prg_name[20];
    uint8_t prg_total_line;
    uint8_t prg_cur_line;
    uint8_t dgt_output_h;//DO 15-8
    uint8_t dgt_output_l;//DO 7-0
    uint8_t tl_dgt_output_l;//TOOL DO 7-0
    uint8_t dgt_input_h;//DI 15-8
    uint8_t dgt_input_l;//DI 7-0
    uint8_t tl_dgt_input_l;//TOOL DI 7-0
    double FT_Fx_data;
    double FT_Fy_data;
    double FT_Fz_data;
    double FT_Tx_data;
    double FT_Ty_data;
    double FT_Tz_data;
    uint8_t FT_ActStatus;
    uint8_t EMG;
    int robot_motion_done;
    uint8_t grip_motion_done;
    uint8_t servo_id;
    int32_t servo_errorode;
    int32_t servo_state;
    double servo_actual_pos;
    float servo_actual_speed;
    float servo_actual_torque;
    uint8_t exaxis_out_slimit_error;
    EXTERNALAXIS_STATUS exaxis_status[4];
    uint8_t exaxis_active_flag;
    uint8_t exaxis_motion_status;
    uint16_t check_sum;
}FR_nonrt_state;


typedef struct _rt_state{
    
}FR_rt_state;
#pragma pack()

typedef struct{
    double x;
    double y;
    double z;
}DescTran;

typedef struct{
    double rx;
    double ry;
    double rz;
}Rpy;

typedef struct{
    double jPos[6];
}JointPos;


typedef struct{
    double ePos[4];
}ExaxisPos;

typedef struct{
    DescTran tran;
    Rpy rpy;
}DescPose;

typedef struct{
    double fx;
    double fy;
    double fz;
    double tx;
    double ty;
    double tz;
}ForceTorque;


typedef struct{
    int circle_num;
    float circle_angle;
    float rad_init;
    float rad_add;
    float rotaxis_add;
    unsigned int rot_direction;
}SpiralParam;

#endif
#ifndef __MOTOR_H_
#define __MOTOR_H_

#include "zf_common_headfile.h"
extern int16 encoder_data_r;
extern int16 encoder_data_l;
extern int16 tar_speed;
#define  DIR_R              ( IO_P75 )
#define  PWM_R              ( PWMB_CH1_P74 )
                              
#define  DIR_L              ( IO_P77 )
#define  PWM_L              ( PWMB_CH3_P76 )

#define ENCODER_DIR_1                 	(TIM17_ENCODER)              // 带方向编码器对应使用的编码器接口 
#define ENCODER_DIR_PULSE_1            	(TIM17_ENCODER_CH1_P80)     // PULSE 对应的引脚
#define ENCODER_DIR_DIR_1              	(IO_P44)     // DIR 对应的引脚

#define ENCODER_DIR_2                 	(TIM18_ENCODER)              // 带方向编码器对应使用的编码器接口
#define ENCODER_DIR_PULSE_2       		(TIM18_ENCODER_CH1_P90)     // PULSE 对应的引脚
#define ENCODER_DIR_DIR_2           	(IO_P46)     // DIR 对应的引脚

//250
#define MAX_SPEED 100
#define MIN_SPEED 80


//后轮驱动代码
void Motor_Init(void);
void motor_test(void);
void Encoder_GetValue(void);
void Motor_Loop(void);
void Motor_control(pwm_channel_enum wheel,int16 speed);

extern float diff_kp;
//差速
void Motor_different(void);


#endif



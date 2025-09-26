/*OUTPUTS */
            //WATER PUMPS// 
#define  WATER_PUMP_1                   23u 

#define  WATER_PUMP2                    22u                          

            //TEA_CHAMBER SOLENOID VALVE//                                    
#define FUNNEL_DIVERGENT_SV             25u                          
#define PT_TANK_SV                      24u                          
                                                                    
            //REMOVE WASTE AND    //                                             
#define REMOVE_WASTE_WATER_DIV_SV       27u                                   
//#define                                 26u                              
                                                                    
            //CANISTER_MOTORS //                                                                  
#define CAN_1                           29u                                          
#define CAN_2                           28u                                 
#define CAN_3                           30u                                     
                                                                    
            //FLAVOURED TANK RELATED CANISTER//                                           
#define FLV_CAN                         31u                                          
                                                                  
            //HEATERS//                                                                   
#define PT_HEATER                       45u      

#define ST_HEATER                       43u                                                           
                                                                    
            //ST_INLET//                                                                  
#define ST_TEA_INLET_SV                 41u                                                   

            //DESPENSING_PUMPS//                                                                    
#define TEA_DESPENSING_PUMP             39u                                                                       
                      
            //CLEANING SV//                                                                    
#define ST_CLEANING_SV                  37u                        
                                                        
            //EXHAUST FAN//                                                                   
#define EXHAUST_FAN                     35u


            //ADDITIONAL OUTPUTS//                                                                   
#define ADDITIONAL_OUTPUTS_1                      33u

#define ADDITIONAL_OUTPUTS_2                      32u

#define ADDITIONAL_OUTPUTS_3                      34u

#define ADDITIONAL_OUTPUTS_4                      36u

#define ADDITIONAL_OUTPUTS_5                      40u

#define ADDITIONAL_OUTPUTS_6                      42u

#define ADDITIONAL_OUTPUTS_7                      44u

#define ADDITIONAL_OUTPUTS_8                      46u

#define ADDITIONAL_OUTPUTS_9                      47u
           

            /*INPUTS SECTION */

//WATER SECTION FLOAT LEVEL SWITCH // 
#define WATER_BUBBLE_1_FLOAT_LEVEL_LOW    A5

#define WATER_BUBBLE_2_FLOAT_LEVEL_LOW    A6

//PREPARATION CHAMBER FLOAT LEVEL SWITCH// 
#define PREP_CHAMBER_FLOAT_LOW            A7

#define PREP_CHAMBER_FLOAT_HIGH           A8
//STORAGE CHAMBER FLOAT LEVEL SWITCH//
#define STORAGE_CHAMBER_FLOAT_LOW          A9

//WASTAGE OVERFLOW FLOAT LEVEL SWITCH//
#define WASTAGE_OVERFLOW_FLOAT_HIGH        A10

//FLOW METER READING//
#define FLOW_SENSOR_READING                A11

//FEEDBACK BUTTON OF LEAD SCREW//
#define LEAD_SCREW_FEEDBACK_PUSHBUTTON     A12

//FEEDBACK BUTTON OF MACHINE LOCK//
#define FEEDBACK_OF_MACHINE_LOCK           A13

//ADDITINAL INPUTS//
#define ADDITINAL_INPUT_1                  A14

#define ADDITINAL_INPUT_2                  A15


    //TEMPERATURE SENSORS //
#define PT_TEMP_PIN_NO                   A0
#define ST_TEMP_PIN_NO                   A1

#define ADDITIONAL_TEMP1_PIN_NO          A2
#define ADDITIONAL_TEMP2_PIN_NO          A3

#define MACHINE_TEMP_PIN_NO              A4

           //POWER SENSE//
#define AC_SENSE         38u

            //Proximity  sensor //
#define P_SENSE_1       20u

#define P_SENSE_2       21u


            //L293D DRIVERS//
#define L293D_MOTOR_DIR_1                   2u
#define L293D_MOTOR_DIR_2                   5u
#define L293D_MOTOR_DIR_3                   3u
#define L293D_MOTOR_DIR_4                   4u
#define L293D_MOTOR_DIR_5                   6u
#define L293D_MOTOR_DIR_6                   7u
#define L293D_MOTOR_DIR_7                   8u
#define L293D_MOTOR_DIR_8                   9u
    //unused L293d pins//
#define L293D_MOTOR_DIR_9        10u
#define L293D_MOTOR_DIR_10       11u
#define L293D_MOTOR_DIR_11       48u
#define L293D_MOTOR_DIR_12       49u


const int Canister_Motor[3] = {CAN_1,CAN_2,CAN_3};

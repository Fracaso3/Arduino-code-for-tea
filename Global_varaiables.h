#define DEBUG 0

#if DEBUG
  #define LOG_DBG(x)    Serial.print(F(x))
  #define LOG_DBGln(x)  Serial.println(F(x))
#else
  #define LOG_DBG(x)
  #define LOG_DBGln(x)
#endif


bool SCREW_POSITION_STATE = false; // 0 means at top position and 1 means at bottom position

String Debug_stng=""; //TO STORE THE DEBUGGING STRING

uint8_t float_level[6]; //float_level array is used to store the status of float level switches

uint8_t pinNumber[6] = {WATER_BUBBLE_1_FLOAT_LEVEL_LOW, WATER_BUBBLE_2_FLOAT_LEVEL_LOW, PREP_CHAMBER_FLOAT_LOW, PREP_CHAMBER_FLOAT_HIGH, STORAGE_CHAMBER_FLOAT_LOW, WASTAGE_OVERFLOW_FLOAT_HIGH};
//pinNumber array is used to store the pin numbers of float level switches

signed int PT_TEMP , ST_TEMP, ADD_TEMP1, ADD_TEMP2, MACHINE_TEMP; //variables to store the temperature values read from temperature sensors

int Temp_PinNumber[5] = {PT_TEMP_PIN_NO,ST_TEMP_PIN_NO,ADDITIONAL_TEMP1_PIN_NO,ADDITIONAL_TEMP2_PIN_NO,MACHINE_TEMP_PIN_NO};
//Temp_PinNumber array is used to store the pin numbers of temperature sensors

// Initialize OneWire instances for temperature sensors
OneWire PREPARATION_CHAMBER(PT_TEMP_PIN_NO); 

OneWire STORAGE_CHAMBER(ST_TEMP_PIN_NO);

OneWire ADDITIONAL_TEMPERATURE_1(ADDITIONAL_TEMP1_PIN_NO);

OneWire ADDITIONAL_TEMPERATURE_2(ADDITIONAL_TEMP2_PIN_NO);

OneWire Machine_Temperature(MACHINE_TEMP_PIN_NO);

// Initialize DallasTemperature instances for temperature sensors
DallasTemperature PT_Read_Temp(&PREPARATION_CHAMBER);

DallasTemperature ST_Read_Temp(&STORAGE_CHAMBER);

DallasTemperature ADD_Read_Temp1(&ADDITIONAL_TEMPERATURE_1);

DallasTemperature ADD_Read_Temp2(&ADDITIONAL_TEMPERATURE_2);

DallasTemperature MACHINE_Read_Temp(&Machine_Temperature);


String inputString ="";

String Received_Str = "";

bool stringComplete = false;

String Check_receiving_str = "";

bool last_day_run_today = false;

bool String_receiving_completed = false;

bool Tea_preparation_request  = false;

bool Full_cycle_clean_request = true;

bool Water_Pump2_Sts = false;

bool Water_Pump1_Sts = false;

bool Received_the_last_saved_byte = false;

uint8_t screw_halt = 0;
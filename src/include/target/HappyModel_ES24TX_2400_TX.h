#define DEVICE_NAME "HM ES24TX"

#define USE_TX_BACKPACK
#define USE_SX1280_DCDC

// Output Power
#define MinPower PWR_10mW
#define MaxPower PWR_250mW
#define POWER_OUTPUT_VALUES {-17,-13,-9,-6,-2}

#include "target/DIY_2400_TX_ESP32_SX1280_E28.h"

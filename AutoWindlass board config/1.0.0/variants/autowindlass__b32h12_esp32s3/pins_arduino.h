#ifndef Pins_Arduino_h
#define Pins_Arduino_h

#include <stdint.h>
#include "soc/soc_caps.h"

#define USB_VID          0x239A
#define USB_PID          0x8145
#define USB_MANUFACTURER "AutoWindlass"
#define USB_PRODUCT      "AutoWindlass B32H12 ESP32-S3"
#define USB_SERIAL       ""  // Empty string for MAC address

#define STATUS_LED 17

//#define PIN_BUTTON1 0  // BOOT0 switch

static const uint8_t TX = 43;
static const uint8_t RX = 44;
#define TX1 TX
#define RX1 RX

static const uint8_t SDA = 47;
static const uint8_t SCL = 48;

static const uint8_t SS = 45;
static const uint8_t MOSI = 42;
static const uint8_t SCK = 39;
static const uint8_t MISO = 21;

static const uint8_t A0 = 14;
static const uint8_t A1 = 15;
static const uint8_t A2 = 16;
static const uint8_t A3 = 17;
static const uint8_t A4 = 18;
static const uint8_t A5 = 1;

static const uint8_t A6 = 40;
static const uint8_t A7 = 41;
static const uint8_t A8 = 2;
static const uint8_t A9 = 3;
static const uint8_t A10 = 4;
static const uint8_t A11 = 5;
static const uint8_t A12 = 6;
static const uint8_t A13 = 7;
static const uint8_t A14 = 8;
static const uint8_t A15 = 9;
static const uint8_t A16 = 10;
static const uint8_t A17 = 11;
static const uint8_t A18 = 12;
static const uint8_t A19 = 13;

static const uint8_t T1 = 1;
static const uint8_t T2 = 2;
static const uint8_t T3 = 3;
static const uint8_t T4 = 4;
static const uint8_t T5 = 5;
static const uint8_t T6 = 6;
static const uint8_t T7 = 7;
static const uint8_t T8 = 8;
static const uint8_t T9 = 9;
static const uint8_t T10 = 10;
static const uint8_t T11 = 11;
static const uint8_t T12 = 12;
static const uint8_t T13 = 13;
static const uint8_t T14 = 14;



static const uint8_t INDICATION_LED = 9;
static const uint8_t WINCH_SENSOR_1 = 13;
static const uint8_t WINCH_SENSOR_2 = 14;
static const uint8_t WINCH_PWM = 15;
static const uint8_t PWM_DIFFERENTIAL_EN = 15;
static const uint8_t RED_LED = 17;
static const uint8_t ANCHOR_DIRECTION = 18;
static const uint8_t USB_N = 19;
static const uint8_t USB_P = 20;

#endif /* Pins_Arduino_h */

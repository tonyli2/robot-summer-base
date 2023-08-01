#include <Arduino.h>
#include <Wire.h>
#include <Adafruit_SSD1306.h>
#include <Servo.h>

// Custom header files
#include <fft.h>
#include <digital_pid.h>
#include <driver_motors.h>
#include <sensor_fusion.h>
#include <hivemind.h>
#include <jump_handler.h>
#include <location_identifier.h>

/*
    This header file contains all the constants
    corresponding to the pins used
*/

// Adafruit OLED Constants
#define SCREEN_WIDTH                    128 // OLED display width, in pixels
#define SCREEN_HEIGHT                   64 // OLED display height, in pixels
#define OLED_RESET                      -1    // This display does not have a reset pin accessible

// Tape Reflectance Sensor L R (Analog)
#define LEFT_TAPE_PIN                   PA0
#define RIGHT_TAPE_PIN                  PA1

// Marker Reflectance Sensors L R (Digital)
#define MARKER_SENSE_LEFT               PB0
#define MARKER_SENSE_RIGHT              PB1
#define INTERRUPT_PIN                   PB7

// IR sensors (Analog)
#define IR_DETECTOR_LEFT                PA4
#define IR_DETECTOR_RIGHT               PA5

// Steering servo pin (PWM)
#define STEERING_SERVO                  PA_8

// Motor driving pins (PWM)
#define LEFT_DRIVING_FWD                PB_9
#define LEFT_DRIVING_BKWD               PB_8

#define RIGHT_DRIVING_FWD               PA_6
#define RIGHT_DRIVING_BKWD              PA_7
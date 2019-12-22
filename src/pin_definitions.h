#pragma once

/* LOLIN D32 PRO */
#ifdef ESP32
  #define PID1_READ 33
  #define PID1_CONT 13
  #define PID1_CHAN 0

  #define PID2_READ 32
  #define PID2_CONT 12
  #define PID2_CHAN 1

  #define PID3_READ 34
  #define PID3_CONT 14
  #define PID3_CHAN 2

  #define PID4_READ 39
  #define PID4_CONT 27 // recently changed
  #define PID4_CHAN 3

  #define MASTER_SOLENOID_PIN 5

  #define SENSOR_L_READ_PIN 0
  #define SENSOR_L_EN_PIN 16

  #define SENSOR_R_READ_PIN 4
  #define SENSOR_R_EN_PIN 17

  #define STEPPER_STEP_PIN 21
  #define STEPPER_DIR_PIN 19
  #define STEPPER_EN_PIN 18
#endif


/* ATMEGA 2560 */
#ifdef MEGA
  #define PID1_READ A0
  #define PID1_CONT 6

  #define PID2_READ A1
  #define PID2_CONT 7

  #define PID3_READ A2
  #define PID3_CONT 8

  #define PID4_READ A3
  #define PID4_CONT 9

  #define RX_PIN -1
  #define TX_PIN -1

  #define MASTER_SOLENOID_PIN 10

  #define SENSOR_L_READ_PIN 19
  #define SENSOR_L_EN_PIN 17

  #define SENSOR_R_READ_PIN 18
  #define SENSOR_R_EN_PIN 16

  #define STEPPER_STEP_PIN 53
  #define STEPPER_DIR_PIN 51
  #define STEPPER_EN_PIN 49

  #define SDA_PIN 20
  #define SCL_PIN 21

  #define ENCODER_A_PIN 26
  #define ENCODER_B_PIN 24
  #define ENCODER_BUTTON_PIN 22 //switch

  #define LED_DATA_PIN 28

  #define TONE_PIN 31
#endif

/* UNO REV 3 */
#ifdef UNO
  #define PID1_READ A0
  #define PID1_CONT 11

  #define PID2_READ A1
  #define PID2_CONT 10

  #define PID3_READ A2
  #define PID3_CONT 6

  #define PID4_READ A3
  #define PID4_CONT 5 // recently changed

  #define RX_PIN 2
  #define TX_PIN 3

  #define MASTER_SOLENOID_PIN 13

  // SLAVE
  #define SENSOR_L_READ_PIN 9
  #define SENSOR_L_EN_PIN 12

  #define SENSOR_R_READ_PIN 8
  #define SENSOR_R_EN_PIN 11

  #define STEPPER_STEP_PIN 7
  #define STEPPER_DIR_PIN 6
  #define STEPPER_EN_PIN 5
#endif


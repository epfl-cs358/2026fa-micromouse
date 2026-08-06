/**
 * @file motors.h
 * @brief Dual DC motor driver abstraction for Micromouse.
 *
 * Provides high-level control of two DC motors, including forward/backward
 * motion, in-place turning, stopping, braking, and gyro-based yaw turns.
 */

#pragma once
#include <Arduino.h>

/**
 * @brief Hardware channel mapping for a single motor.
 *
 * Each motor uses two PWM pins and two hardware channels.
 */
struct MotorPins {
  int in1;  ///< PWM input pin 1
  int in2;  ///< PWM input pin 2
  int ch1;  ///< PWM channel 1
  int ch2;  ///< PWM channel 2
};

/**
 * @brief Configuration parameters for the motor driver.
 */
struct MotorConfig {
  MotorPins left;               ///< Left motor pin mapping
  MotorPins right;              ///< Right motor pin mapping
  uint16_t pwm_freq = 20000;    ///< PWM frequency (Hz)
  uint8_t  pwm_res  = 8;        ///< PWM resolution (bits)
  int16_t  max_pwm  = 255;      ///< Maximum PWM value
};

/**
 * @brief High-level dual motor controller.
 */
class Motors {
public:
  /**
   * @brief Initializes motor pins and PWM channels.
   *
   * @param cfg Motor configuration parameters.
   * @return true if initialization succeeded, false otherwise.
   */
  bool begin(const MotorConfig& cfg);

  /**
   * @brief Stops both motors (coast).
   */
  void stop();

  /**
   * @brief Brakes both motors (active short).
   */
  void brake();
};

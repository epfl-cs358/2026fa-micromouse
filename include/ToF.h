/**
 * @file ToF.h
 * @brief Time-of-Flight distance sensor manager.
 *
 * Provides an abstraction for multiple VL53L1X Time-of-Flight sensors,
 * typically mounted on the left, center (front), and right sides of the robot.
 */
#pragma once

#include "VL53L1X.h"
#include <Wire.h>

/**
 * @brief Manages multiple VL53L1X Time-of-Flight distance sensors.
 */
class ToF {
public:
  /**
   * @brief Constructs a ToF sensor manager.
   */
  ToF();

  /**
   * @brief Initializes all Time-of-Flight sensors.
   *
   * Configures I2C communication, initializes each sensor,
   * and applies sensor-specific offsets.
   */
  void initSensors();

  /**
   * @brief Returns the distance measured by the front sensor.
   *
   * @return Distance value millimeters.
   */
  int getFrontDistance();

private:
  /**
   * @brief Initializes the front-facing sensor.
   */
  void initCenterSensor();

  VL53L1X center_sensor;  ///< Front-facing distance sensor

};


/**
 * @file wiring.h
 * @brief Hardware pin and address definitions.
 *
 * Centralized mapping of all hardware-related constants, including:
 *  - GPIO pin assignments for Time-of-Flight sensors (XSHUT)
 *  - I2C bus pin configuration
 *  - Motor driver and quadrature encoder pin mapping
 *  - I2C addresses for sensors
 *  - Register definitions for the MPU6050 gyroscope
 *
 * This file serves as a single source of truth for hardware wiring.
 */

#pragma once

#include <Arduino.h>
#include <VL53L1X.h>

// ---------- ToF XSHUT pins ----------
#define TOF_CENTER_XSHUT  19    // D15 (strap pin on ESP32)


// ---------- I2C pins ----------
#define I2C_SDA 21
#define I2C_SCL 22

// ---------- MOTOR / ENCODER MAP ----------
#define MTR_A_IN1 26  // D12  (⚠ boot-strap pin)
#define MTR_A_IN2 25  // D14
#define MTR_B_IN1 33  // D27
#define MTR_B_IN2 32  // D26

// Encoders (quadrature)
#define ENC_A_CH_A 15
#define ENC_A_CH_B 2
#define ENC_B_CH_A 4
#define ENC_B_CH_B 5

constexpr uint8_t ADDR_CENTER = 0x31;

constexpr uint8_t MPU_ADDR = 0x68;

/**
 * @file config.h
 * @brief Robot geometry, motion, and maze configuration constants.
 *
 * Defines compile-time constants related to:
 *  - Physical robot geometry and kinematics
 *  - Motion control parameters (PWM limits and defaults)
 *  - Maze dimensions and start/goal configuration
 *  - Sensor thresholds and calibration values
 *  - Miscellaneous hardware-related constants
 *
 * These values are hardware- and build-specific and should be adjusted
 * to match the physical robot and competition setup.
 */
#pragma once
#include <Arduino.h>

/* ---------- geometry (measure yours!) ---------- */
constexpr float WHEEL_DIAMETER = 0;   // cm
constexpr int SPR = 0; // steps per revolution

/* ---------- motion constants ---------- */
constexpr int BASE_PWM = 0; // base PWM for speed-run
constexpr int TURN_PWM = 0; // base PWM for turns
constexpr int MIN_PWM = 0; // minimum PWM
constexpr int MAX_PWM = 0; // Maximum PWM 

// ---------- ToF sensor offsets (mm) ----------
// linear regression on sensors to calbrate them 
// CALIBRATE YOUR OWN!
constexpr float TOF_CENTER_OFFSET = 0.0f;
constexpr float TOF_CENTER_SLOPE = 0.0f;


/* ---------- misc ---------- */
const int LED_BUILTIN = 2;

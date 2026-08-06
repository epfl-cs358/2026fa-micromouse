/**
 * @file encoders.h
 * @brief Quadrature encoder interface and ISR handlers.
 *
 * Declares encoder counters, initialization routines, interrupt service
 * routines (ISRs), and accessors for reading wheel encoder values.
 *
 * Encoder values are updated asynchronously via hardware interrupts.
 */
#include <Arduino.h>

extern volatile long encoderValueLeft;
extern volatile long encoderValueRight;

/**
 * @brief Initializes the encoder hardware and interrupts.
 */
void initEncoders();

/**
 * @brief Interrupt Service Routine (ISR) for the left encoder.
 */
void updateEncoderLeft();

/**
 * @brief Interrupt Service Routine (ISR) for the right encoder.
 */
void updateEncoderRight();

/**
 * @brief Resets both encoder counts to zero.
 */
void resetEncoders();

/**
 * @brief Returns the left encoder count.
 *
 * @return Current left encoder value.
 */
long getEncoderLeft();

/**
 * @brief Returns the right encoder count.
 *
 * @return Current right encoder value.
 */
long getEncoderRight();


#include <Arduino.h>
int fsrPin = A0;
/**
 * @file src/main.cpp
 * @brief Main Arduino sketch: reads FSR sensor and prints an initial reading.
 *
 * Briefing:
 * This sketch initializes Serial communication at 9600 baud, reads an
 * analog force-sensitive resistor (FSR) connected to analog pin A0 once
 * during setup and prints the measured value to the Serial monitor.
 * The main loop is left empty for further implementation.
 *
 * @author aakashsingghh
 * @date 2026-02-22
 */

#include <Arduino.h>

/**
 * @brief Analog pin connected to the force-sensitive resistor (FSR).
 */
int fsrPin = A0;

/**
 * @brief Arduino setup function.
 *
 * Initializes the Serial interface, performs an initial analog read of the FSR
 * and prints the value to the Serial monitor. A short delay is added to allow
 * the Serial connection to stabilize.
 *
 * @return void
 */
void setup() {
    Serial.begin(9600);
    // Allow time for serial connection to initialize on some boards
    delay(50);

    int fsrValue = analogRead(fsrPin);
    Serial.println(fsrValue);

    // brief pause after initial print
    delay(500);

    // write your initialization code here
}

/**
 * @brief Arduino main loop.
 *
 * This function runs repeatedly after setup. It is intentionally left empty
 * as a placeholder for application-specific logic (e.g., periodic FSR reads,
 * filtering, event detection, or communication).
 *
 * @return void
 */
void loop() {

    // write your code here
}
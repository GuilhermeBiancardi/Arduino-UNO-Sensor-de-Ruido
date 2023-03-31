/**
 * Sensor 5v
 */

#include <Arduino.h>

#define pinOut A0

void setup() {
    Serial.begin(9600); 
}

void loop() {

    int sensorRuido = analogRead(pinOut);

    // Transforma a escala 0 a 1023 em 0 a 100
    // sensorRuido = map(sensorRuido, 0, 1023, 0, 100);

    Serial.print(sensorRuido);
    Serial.println("dB");

    if(sensorRuido > 700) {
        delay(1000);
    } else {
        delay(10);
    }

}
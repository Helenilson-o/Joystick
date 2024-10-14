#include <Arduino.h>
#include "Joystick.h"

void setup() {
    Serial.begin(115200); // Inicia a comunicação serial
    joystick.update(); // Chama o método de atualização do joystick para inicializar
}

void loop() {
    joystick.update(); // Atualiza os valores do joystick

    // Obtém os ângulos e os imprime
    Serial.printf("Ângulo X: %d, Ângulo Y: %d\n", joystick.getXAngle(), joystick.getYAngle());

    // Atraso para facilitar a leitura
    delay(10); // Aguarda 100 ms
}

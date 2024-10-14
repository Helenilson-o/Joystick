#include "Joystick.h"

Joystick::Joystick() 
    : filterX(0.05), filterY(0.05) { // Inicializa os filtros com fator de suavização
    pinMode(VRx, INPUT);
    pinMode(VRy, INPUT);
    analogSetAttenuation(ADC_11db);
}

void Joystick::update() {
    filterX.addReading(analogRead(VRx)); // Adiciona leitura filtrada para X
    filterY.addReading(analogRead(VRy)); // Adiciona leitura filtrada para Y

    setXAngle(); // Atualiza o ângulo X
    setYAngle(); // Atualiza o ângulo Y
}

void Joystick::setXAngle() {
    angleX = map(filterX.getAverage(), 0, 4095, 0, 180); // Mapeia com média
}

void Joystick::setYAngle() {
    angleY = map(filterY.getAverage(), 0, 4095, 0, 180); // Mapeia com média
}

int Joystick::getXAngle() {
    return angleX; // Retorna o ângulo X
}

int Joystick::getYAngle() {
    return angleY; // Retorna o ângulo Y
}

// Cria a instância global
Joystick joystick;

#ifndef JOYSTICK_H
#define JOYSTICK_H

#include <Arduino.h>
#include "MovingAverageFilter.h"

#define VRx 35
#define VRy 34

class Joystick {
private:
    MovingAverageFilter filterX; // Filtro para X
    MovingAverageFilter filterY; // Filtro para Y
    int angleX{90}; // Inicializa ângulo X
    int angleY{90}; // Inicializa ângulo Y

public:
    Joystick(); // Construtor
    void update(); // Método para atualizar os valores
    void setXAngle(); // Método para definir ângulo X
    void setYAngle(); // Método para definir ângulo Y
    int getXAngle(); // Método para obter ângulo X
    int getYAngle(); // Método para obter ângulo Y
};

extern Joystick joystick;

#endif

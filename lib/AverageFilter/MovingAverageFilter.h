#ifndef MOVINGAVERAGEFILTER_H
#define MOVINGAVERAGEFILTER_H

#include <Arduino.h>

class MovingAverageFilter {
private:
    float average; // Média atual
    float alpha; // Fator de suavização

public:
    MovingAverageFilter(float alpha); // Construtor
    void addReading(uint32_t reading); // Adiciona uma nova leitura
    float getAverage(); // Retorna a média das leituras
};

#endif

#include "MovingAverageFilter.h"

MovingAverageFilter::MovingAverageFilter(float alpha) 
    : average(0), alpha(alpha) {}

void MovingAverageFilter::addReading(uint32_t reading) {
    average = (alpha * reading) + ((1 - alpha) * average); // Filtro exponencialmente ponderado
}

float MovingAverageFilter::getAverage() {
    return average; // Retorna a média
}

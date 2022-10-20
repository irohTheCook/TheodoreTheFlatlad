#include "planet.h"

Planet::Planet(int width, int height, char border, string name, Flatlad* flatlad_pointer) {
    this->width = width;
    this->height = height;
    this->border = border;
    this->name = name;
    this->flatland_pointer = flatlad_pointer;
    flatlad_pointer->setCordX(width / 2);
    flatlad_pointer->setCordY(width / 2);
}

// TODO print hollow rectangle here
void Planet::printPlanet() const {
}

void Planet::moveFlatlad(Direction dir) {
    switch (dir) {
        case W: flatland_pointer->setCordY(flatland_pointer->getCordY() - 1); break;
        case S: flatland_pointer->setCordY(flatland_pointer->getCordY() + 1); break;
        case A: flatland_pointer->setCordX(flatland_pointer->getCordX() - 1); break;
        case D: flatland_pointer->setCordX(flatland_pointer->getCordX() + 1); break;
    }
}

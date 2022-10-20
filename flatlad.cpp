#include "flatlad.h"

// getters
int Flatlad::getCordX() const {
    return cord_x;
}
int Flatlad::getCordY() const {
    return cord_y;
}
char Flatlad::getLooks() const {
    return looks;
}
const string &Flatlad::getName() const {
    return name;
}

// setters
void Flatlad::setCordX(int cordX) {
    cord_x = cordX;
}
void Flatlad::setCordY(int cordY) {
    cord_y = cordY;
}
void Flatlad::setLooks(char looks) {
    Flatlad::looks = looks;
}
void Flatlad::setName(const string &name) {
    Flatlad::name = name;
}

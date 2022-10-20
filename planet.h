#ifndef LAB3_PLANET_H
#define LAB3_PLANET_H

#include "flatlad.h"

enum Direction { W, S, A, D };

class Planet {
    int width;
    int height;
    char border;
    string name;
    Flatlad* flatland_pointer{};
public:
    Planet(int width, int height, char border, string name, Flatlad* flatlad_pointer);
    ~Planet() { cout << "Planet " << name << " got nae naed" << endl; }

    void printPlanet() const;
    void moveFlatlad(Direction dir);


};

#endif

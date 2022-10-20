#include "flatlad.h"
#include "planet.h"

int main() {
    Flatlad Barnaba;
    Planet Rect001(50, 30, '@', "Rect001", &Barnaba);
    Rect001.printPlanet();

    return 0;
}

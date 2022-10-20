#ifndef OOP_FLATLAD_H
#define OOP_FLATLAD_H

#include <iostream>
#include <utility>
using namespace std;

class Flatlad {
    int cord_x;
    int cord_y;
    char looks;
    string name;
public:
    explicit Flatlad(int cord_x = 0, int cord_y = 0, char looks = '?', string name = "Barnaba") :
            cord_x(cord_x), cord_y(cord_y),looks(looks), name(move(name)) {}
    ~Flatlad() { cout << "Flatlad " << name << " " << "got nae naed" << endl; }

    void printFlatlad() const { cout << looks << endl; }
    void moveUp();
    void moveDown();
    void moveLeft();
    void moveRight();

    // getters
    int getCordX() const;
    int getCordY() const;
    char getLooks() const;
    const string &getName() const;

    // setters
    void setCordX(int cordX);
    void setCordY(int cordY);
    void setLooks(char looks);
    void setName(const string &name);
};


#endif

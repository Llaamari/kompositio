#ifndef CAR_H
#define CAR_H
#include "Engine.h"
#include "Wheel.h"
#include <string>
using namespace std;

// Koosteluokka (kompositio ◆) – omistaa Engine-olion ja 4 Wheel-oliota
class Car {
private:
Engine objEngine;
Wheel objWheel1;
Wheel objWheel2;
Wheel objWheel3;
Wheel objWheel4;
string model;
string brand;


public:
Car();
Car(const string &br, const string &md);


void setEngine();
void setWheels();


string getModel() const;
void setModel(const string &md);


string getBrand() const;
void setBrand(const string &br);


void printDetails() const;
};


#endif
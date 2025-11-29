#include "Car.h"
#include <iostream>
#include <windows.h>

// Pääohjelma luo Car-olion ja alustaa sen osat ennen tulostamista
int main() {
SetConsoleOutputCP(65001);  // Asettaa UTF-8 tulostuksen konsoliin
Car auto1("Toyota", "Corolla");


auto1.setEngine();
auto1.setWheels();


auto1.printDetails();


return 0;
}
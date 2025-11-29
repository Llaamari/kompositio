#include "Car.h"

// Pääohjelma luo Car-olion ja alustaa sen osat ennen tulostamista
int main() {
Car auto1("Toyota", "Corolla");


auto1.setEngine();
auto1.setWheels();


auto1.printDetails();


return 0;
}
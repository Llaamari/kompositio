#include "Car.h"

// Pääohjelma luo Car-olion ja alustaa sen osat ennen tulostamista
int main() {
SetConsoleOutputCP(CP_UTF8);
SetConsoleCP(CP_UTF8);

Car auto1("Toyota", "Corolla");


auto1.setEngine();
auto1.setWheels();


auto1.printDetails();


return 0;
}
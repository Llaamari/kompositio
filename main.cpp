#include "Car.h"

// Pääohjelma luo Car-olion ja alustaa sen osat ennen tulostamista
int main() {
// Vaihdetaan Windowsin konsolin merkistö UTF-8:ksi, jotta ääkköset näkyvät oikein
system("chcp 65001 > nul");
Car auto1("Toyota", "Corolla");


auto1.setEngine();
auto1.setWheels();


auto1.printDetails();


return 0;
}
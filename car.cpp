#include "Car.h"
#include <iostream>


Car::Car() : model("") , brand("") {}


Car::Car(const string &br, const string &md) : brand(br), model(md) {}

// Asettaa moottorin vakioarvot tehtävänannon mukaan
void Car::setEngine() {
objEngine.setHorsepower(150);
objEngine.setDisplacement(2.0);
}

// Alustaa kaikki 4 rengasta vakioarvoilla (kesärenkaat, 17 tuumaa)
void Car::setWheels() {
objWheel1.setSize(17);
objWheel1.setType("kesärengas");


objWheel2.setSize(17);
objWheel2.setType("kesärengas");


objWheel3.setSize(17);
objWheel3.setType("kesärengas");


objWheel4.setSize(17);
objWheel4.setType("kesärengas");
}


void Car::printDetails() const {
cout << "Auto: " << brand << " " << model << endl;
cout << "Moottori: " << objEngine.getHorsepower() << " hp, "
<< objEngine.getDisplacement() << " L" << endl;


cout << "Rengas 1: " << objWheel1.getSize() << " tuumaa, "
<< objWheel1.getType() << endl;
cout << "Rengas 2: " << objWheel2.getSize() << " tuumaa, "
<< objWheel2.getType() << endl;
cout << "Rengas 3: " << objWheel3.getSize() << " tuumaa, "
<< objWheel3.getType() << endl;
cout << "Rengas 4: " << objWheel4.getSize() << " tuumaa, "
<< objWheel4.getType() << endl;
}
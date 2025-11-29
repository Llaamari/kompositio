#ifndef ENGINE_H
// Mallintaa moottorin komponentin – käytetään kompositiossa Car-luokassa
#define ENGINE_H


class Engine {
private:
int horsepower;
double displacement;


public:
Engine();
Engine(int hp, double disp);


int getHorsepower() const;
void setHorsepower(int hp);


double getDisplacement() const;
void setDisplacement(double disp);
};


#endif
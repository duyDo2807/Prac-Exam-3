#ifndef FORD_H
#define FORD_H
#include "Car.h"

class Ford : public Car {
 private:
  int badgeNumber;
  float litresOfFuel = 60;

 public:
  Ford();
  Ford(int badgeNumber, int price);

  void set_badgeNumber(int newBadgeNumber);
  int get_badgeNumber();
  void set_litresOfFuel(int newlitresOfFuel);
  int get_litresOfFuel();

  void refuel(int litres);
  void drive(int kms);
};

#endif
#ifndef TESLA_H
#define TESLA_H
#include "Car.h"

class Tesla : public Car {
 private:
  char model;
  float batteryPercentage = 100;

 public:
  Tesla();
  Tesla(char model, int price);

  void set_model(char newModel);
  void set_batteryPercentage(int newBatteryPercentage);

  char get_model();
  int get_batteryPercentage();

  void chargeBattery(int mins);
  void drive(int kms);
};

#endif
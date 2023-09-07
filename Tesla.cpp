#include "Tesla.h"

#include <iostream>

Tesla::Tesla() : Car(0) {}
Tesla::Tesla(char model, int price) : Car(price), model(model) {}

void Tesla::set_model(char newModel) { model = newModel; }
void Tesla::set_batteryPercentage(int newBatteryPercentage) {
  if (newBatteryPercentage < 0) {
    newBatteryPercentage = 0;
  } else if (newBatteryPercentage > 100) {
    newBatteryPercentage = 100;
  }
  batteryPercentage = newBatteryPercentage;
}

char Tesla::get_model() { return model; }
int Tesla::get_batteryPercentage() { return batteryPercentage; }

void Tesla::chargeBattery(int mins) {
  if (mins < 0) {
    std::cout << "Minutes charge not appropriate" << std::endl;
  } else if (mins = 0) {
    std::cout << "Tesla not charged" << std::endl;
  } else {
    for (int i = 1; i <= mins; i++) {
      if (batteryPercentage >= 0) {
        batteryPercentage = batteryPercentage + 0.5;
      } else {
        std::cout << "Tesla's battery is fully charged." << std::endl;
      }
    }
  }
}

void Tesla::drive(int kms) {
  emissions = 0;
  int x = kms / 5;
  int numEveryFive = abs(x);
  if (batteryPercentage > 0) {
    if (numEveryFive >= 1) {
      for (int i = 1; i <= numEveryFive; i++) {
        emissions = 74 * (numEveryFive * 5);
        batteryPercentage = batteryPercentage - 1;
      }
    }
    emissions = emissions + 74 * (kms - numEveryFive * 5);
  } else {
    std::cout << "Tesla out of battery" << std::endl;
  }
}
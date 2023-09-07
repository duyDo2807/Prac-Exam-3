#include <iostream>

#include "Tesla.h"

int main() {
  Tesla tesla('X', 20000);
  tesla.set_batteryPercentage(25);
  tesla.chargeBattery(300);
  tesla.drive(20000);
  std::cout << "Tesla model " << tesla.get_model()
            << " current battery percentage is "
            << tesla.get_batteryPercentage() << " and its emissions are "
            << tesla.get_emissions() << std::endl;
}
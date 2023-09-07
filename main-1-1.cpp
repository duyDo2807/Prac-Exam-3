#include <iostream>

#include "Car.h"

int main() {
  Car car(3000);
  int price = car.get_price();
  int kms = 10;
  car.drive(kms);
  int emissions = car.get_emissions();
  std::cout << "The car's price is " << price << " and the car's emissions are "
            << emissions << std::endl;
  return 0;
}
#include <iostream>

#include "Ford.h"

int main() {
  Ford ford('X', 20000);
  ford.set_badgeNumber(25);
  ford.set_litresOfFuel(50);
  ford.drive(20000);
  std::cout << "Ford badgenumber " << ford.get_badgeNumber()
            << " current fuel is " << ford.get_litresOfFuel()
            << " and its emissions are " << ford.get_emissions() << std::endl;
}
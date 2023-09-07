#include "Ford.h"

#include <iostream>

Ford::Ford() : Car(0) {}
Ford::Ford(int badgeNumber, int price) : badgeNumber(badgeNumber), Car(price) {}

void Ford::set_badgeNumber(int newBadgeNumber) { badgeNumber = newBadgeNumber; }
void Ford::set_litresOfFuel(int newLitresOfFuel) {
  litresOfFuel = newLitresOfFuel;
}

int Ford::get_badgeNumber() { return badgeNumber; }
int Ford::get_litresOfFuel() { return litresOfFuel; }

void Ford::refuel(int litres) {
  if (litresOfFuel + litres <= 60) {
    litresOfFuel = litresOfFuel + litres;
  }
}

void Ford::drive(int kms) {
  emissions = 0;
  int x = kms / 5;
  int numEveryFive = abs(x);
  if (litresOfFuel > 0) {
    if (numEveryFive >= 1) {
      for (int i = 1; i <= numEveryFive; i++) {
        emissions = 234 * (numEveryFive * 5);
        litresOfFuel = litresOfFuel - 1;
      }
    }
    emissions = emissions + 234 * (kms - numEveryFive * 5);
  }
}
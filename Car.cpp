#include "Car.h"

Car::Car() : price(0), emissions(0) {}

Car::Car(int price) : price(price), emissions(0) {}

void Car::set_price(int newPrice) { price = newPrice; }

void Car::set_emissions(int emissions) { emissions = emissions; }

int Car::get_emissions() { return emissions; }

int Car::get_price() { return price; }

void Car::drive(int kms) { emissions = 20 * kms; }
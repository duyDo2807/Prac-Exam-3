#ifndef CAR_H
#define CAR_H

class Car {
 protected:
  int price;
  int emissions;

 public:
  Car();
  Car(int price);

  void set_price(int newPrice);
  void set_emissions(int emissions);
  int get_price();
  int get_emissions();
  virtual void drive(int kms);
};

#endif
#include"dynamics.h"

/*Sub-class*/
class Car : public Vehicle{
    public:
        Car(void);
        double get_length(void){return length;}
};

Car::Car(){
    width = 1; length = 2; v_max = 30;
}

/*Sub-class*/
class Truck : public Vehicle{
    public:
        Truck(void);
        double get_length(void){return length;}
};

Truck::Truck(){
    width = 1; length = 4; v_max = 20;
}

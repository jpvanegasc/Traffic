#include"vehicle.h"

/*Sub-class*/
class Car : public Vehicle{
    private:
        int nothing;
    public:
        Car(void){
            width = 1; length = 2; v_max = 30;
        }
        double get_length(void){return length;}
        int get_nothing(void){return nothing;}
};

/*Sub-class*/
class Truck : public Vehicle{
    private:
        int nothing;
    public:
        Truck(void){
            width = 1; length = 4; v_max = 20;
        }
        double get_length(void){return length;}
        int get_nothing(void){return nothing;}
};
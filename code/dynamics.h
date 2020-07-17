#include"constants.h"

/*Superclass*/
class Vehicle{
    protected:
        double width, length, v_max;
        Vector2D r, v, a;
    public:
        Vehicle(void);
        void init(double x0, double y0, double vx0, double vy0);
        double boundary_force(void);
        double neighbor_force(void);
        void add_force(Vector2D dF);

        friend class Interact;
};

Vehicle::Vehicle(){
    width = 1; length =1; v_max = 10;
}

void Vehicle::init(double x0, double y0, double vx0, double vy0){
    r(x0, y0); v(vx0, vy0);
}

double Vehicle::boundary_force(void){
    return 0;
}

double Vehicle::neighbor_force(void){
    return 0;
}

void Vehicle::add_force(Vector2D dF){
    double aux = boundary_force() + neighbor_force();
    F += dF + aux;
}


class Interact{
    private:
        bool hit;
    public:
        bool get_hit(void){return hit;}
};
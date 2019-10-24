#include<iostream>
#include<cmath>
#include"Road-Geometry.hpp"

/*Superclass*/
class Vehicle{
	protected:
		// F is used in MD, no idea if it will be useful here
		double x, y, vx, vy, ax, ay, width, length, v_max, F;
	public:
		Vehicle(void){
			width = 1; length =1; v_max = 10; F = 0;
		}
		void init(double x0, double y0, double vx0, double vy0){
			x = x0; y = y0; vx = vx0; vy = vy0;
		}
		double boundary_force(void){
			return 0;
		}
		double neighbor_force(void){
			return 0;
		}
		void add_force(double dFx, double dFy){
			double aux = boundary_force() + neighbor_force();
			F += dFx + dFy + aux;
		}
	friend class Interact;
};
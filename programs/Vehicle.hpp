#include<iostream>
#include<cmath>
#include"Road-Geometry.hpp"

/*Superclass*/
class Vehicle{
	private:
		int name;
	public:
		Vehicle(void){
			name=0;
		}
		int get_name(void){return name;}
	friend class Interact;
};
#include<iostream>
#include<cmath>
#include"Vehicle.h"

/*Sub-class*/
class Car : public Vehicle{
	private:
		int year;
	public:
		Car(void){
			year=2019;
		}
		int get_year(void){return year;}
};
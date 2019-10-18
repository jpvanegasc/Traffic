#include<iostream>
#include<cmath>
#include"Car.h"

int main(void){
	Car MyCar;

	std::cout << MyCar.get_name() << ' ' << MyCar.get_year() << std::endl;

	return 0;
}
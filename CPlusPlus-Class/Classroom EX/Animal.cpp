#include "Animal.h"
#include <iostream>

Animal::Animal(int foodInit_)
{
	std::cout << "an animal is born" << std::endl;
	food_ = foodInit_;
}


void Animal::eat(int foodToEat_)
{
	std::cout << "animal is eating" << std::endl;
	food_--;
	
}
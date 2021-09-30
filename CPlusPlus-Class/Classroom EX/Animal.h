#pragma once
#include<iostream>

class Animal
{
	Animal();
	
	private:
		int food_ = 0;

	public:
		Animal(int foodInit_);

		void eat(int);
		void drink();
		void play();

		void print();

};
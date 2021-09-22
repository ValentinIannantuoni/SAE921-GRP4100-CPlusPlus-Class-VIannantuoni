#include <iostream>
#include <array>


int main()
{
 #pragma region C++STYLE Arrays

	std::array<int, 6> myArrayA{ 19, 10, 8, 17, 9, 15 };
	//parcour facon c 
	std::cout << "contenu du tableau [";
	for (auto myNumber : myArrayA ) 
	{
		std::cout << myNumber << " : ";
	}

} 
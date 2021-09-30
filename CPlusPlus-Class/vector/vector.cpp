#include <iostream>
#include <vector>


int main()
{
	srand(time(NULL));
		
	std::vector <int>numbers = std::vector <int>(12);

	for (int i = 0; i < 12; i++)
	{
		numbers[i] = 1 + (rand() % 20);

		std::cout << numbers[i] << std::endl;
	}
	
}


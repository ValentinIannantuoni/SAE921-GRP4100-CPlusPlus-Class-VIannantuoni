#include<iostream>
#include<vector>



void printVector(std::vector<int> numbers)
{
	for (int i = 0; i < numbers.size(); i++)
	{
		std::cout << numbers[i] << std::endl;
	}
}


int main()
{
	srand(time(NULL));

	std::vector <int>numbers = std::vector <int>(12);

	for (int i = 0; i < 12; i++)
	{
		numbers[i] = 1 + (rand() % 20);
	}
	printVector(numbers);




	
}
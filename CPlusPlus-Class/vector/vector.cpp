#include <iostream>
#include <vector>
#include <algorithm>



int main()
{
	srand(time(NULL));
		
	std::vector <int>numbers = std::vector <int>(12);

	for (int i = 0; i < 12; i++)
	{
		numbers[i] = 1 + (rand() % 20);
	}
	
	auto minPos = numbers.begin();
	int minVal = numbers[0];

	for (auto it = numbers.begin(); it < numbers.end(); it++)
	{
		if (minVal > *it)
		{
			minVal = *it;
			minPos = it;
		}
	}
	std::cout << "Min Val is :" << minVal << std::endl;
	std::cout << "Min pos check :" << *minPos << std::endl;

	numbers.insert(minPos +1 , minVal, 0);
	
	for (int i = 0; i < numbers.size(); i++)
	{
	std::cout << numbers[i] << std::endl;
	}
	

}


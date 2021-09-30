#include <iostream>
#include <vector>
#include <list>


void printlist(std::list<int> numbers)
{
	for (auto v : numbers)
	{
		std::cout << v  << std::endl;
	}
}

int main()
{
	std::cout << "Imprestion 1er liste :" << std::endl << std::endl;

	srand(time(NULL));

	std::list <int> numbers;

	for (int i = 0; i < 12; i++)
	{
		numbers.push_back(1 + rand() % 20);
	}

		printlist(numbers);

	std::cout << "Imprestion 2eme liste" << std::endl<< std::endl;
	
	std::list<int>::iterator it = numbers.begin();
	while (it != numbers.end())
	{
		if (*it % 2 == 0)
		{
			it = numbers.erase(it);
		}
		else
		{
			++it;
		}
	}

		printlist(numbers);
}
#include<iostream>

#pragma region Global

enum class Pokemon1 : char
{
	Pikachu = 'p'
};
enum class Pokemon2 : char
{
	Evoli = 'e'
};
enum class Pokemon3 : char
{
	Salameche = 's'
};
void printScream(Pokemon1 pokemon1_)
{
	switch (pokemon1_)
	{
	case Pokemon1::Pikachu:
		std::cout << "Bienvenue dans le monde de Pokemon !";
	}
}
void printScream(Pokemon2 pokemon2_)
{
	switch (pokemon2_)
	{
	case Pokemon2::Evoli:
		std::cout << "Bienvenue dans le monde de Pokemon !";
	}
}
void printScream(Pokemon3 pokemon3_)
{
	switch (pokemon3_)
	{
	case Pokemon3::Salameche:
		std::cout << "Bienvenue dans le monde de Pokemon !";
	}
}
#pragma endregion

int main()
{
	char Pokemon_1 = 'x';
	char Pokemon_2 = 'x';
	char Pokemon_3 = 'x';

	do
	{
		std::cout << "Qu'elle Starter choisi tu ?" << std::endl ;
		std::cout << "Pikachu (p)" << std::endl ;
		std::cout << "Evoli (e)" << std::endl;
		std::cout << "Salameche (s)" << std::endl;
		
		std::cin >> Pokemon_1;
		
		switch (static_cast<Pokemon1>(Pokemon_1))
		{
		
		case Pokemon1::Pikachu:
			printScream(static_cast<Pokemon1>(Pokemon_1));
			break;
		default:
			return EXIT_FAILURE;
			break;
		}
		switch (static_cast<Pokemon2>(Pokemon_2))
		{
		
		case Pokemon2::Evoli:
			printScream(static_cast<Pokemon2>(Pokemon_2));
			break;
		default:
			return EXIT_FAILURE;
			break;
		}
		switch (static_cast<Pokemon3>(Pokemon_3))
		{

		case Pokemon3::Salameche:
			printScream(static_cast<Pokemon3>(Pokemon_3));
			break;
		default:
			return EXIT_FAILURE;
			break;
		}
		

	} while (true);
	
}



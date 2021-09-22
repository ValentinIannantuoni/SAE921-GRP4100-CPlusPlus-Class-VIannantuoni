#include <iostream>


#pragma region Global
enum class Animals : char 
{
		loup = 'L',
		rats = 'R',
		aigle = 'A',
		singe = 'S',
		signe = 'I',
};
void printScream(Animals animal_) {
	
	switch (animal_)
	{
	case Animals::loup:
		std::cout << "ahouuuuuuuuuu";
		break;
	case Animals::rats:
		std::cout << "hiiiiihiiiiihiii";
		break;
	case Animals::aigle:
		std::cout << "piaaaaaaaaaa";
		break;
	case Animals::singe:
		std::cout << "ouh ouh ah ah";
		break;
	case Animals::signe:
		std::cout << "coin coin coin";
		break;
	default:
		std::cout << "________________";
		break;
	}
	
		

}

#pragma endregion 
int main()
{
	char myAnimal = 'x';
	
	do
	{
		std::cout << "connais tu le son des animaux ??" << std::endl;
		std::cout << "loup (L)" << std::endl;
		std::cout << "Rats (R)" << std::endl;
		std::cout << "Aigle (A)" << std::endl;
		std::cout << "Singe (S)" << std::endl;
		std::cout << "Signe (I)" << std::endl;

		std::cin >> myAnimal;


		switch (static_cast<Animals>(myAnimal))
		{
		case Animals::loup:
		case Animals::rats:
		case Animals::aigle:
		case Animals::singe:
		case Animals::signe:
			printScream(static_cast<Animals>(myAnimal));
			break;
		default:
			return EXIT_FAILURE;
			break;
		}

		std::cout << std::endl;

	} while (true);
}
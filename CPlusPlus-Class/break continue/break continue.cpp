# include <iostream>

int main()
{
	bool letsContinue = false;

	char reponse;

	do
	{
		std::cout << "voulez vous continuer ? (o/n) ? " << std::endl;
		std::cin >> reponse;

		if (reponse == 'o') {
			letsContinue == true;
		}
		
		else if (reponse == 'n') {
			letsContinue = false;
		}
		
		else {
			// restarte the loop
			std::cout << "restart the loop" << std::endl;
			continue;
		}
		
		std::cout << "end of the loop " << std::endl;
	
	} while (letsContinue == true); 
	
	std::cout << "end of the main" << std::endl;
}
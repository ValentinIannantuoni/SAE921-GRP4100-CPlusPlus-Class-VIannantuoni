//QUITTEOUDOUBLE
#include <iostream>
int somme(int valeur1, int valeur2)
{
	return valeur1 + valeur2;
}
int main()

{	// generation de seed 
	srand(time(NULL));

	int scoreCourant;
	int scorePrecedent = 5;

	bool continuer = true;

	int moula = 5;

	

	
		do

		{	//un lancement de dés
			int tirageDe1 = 1 + (rand() % 6);
			int tirageDe2 = 1 + (rand() % 6);
			scoreCourant = somme(tirageDe1, tirageDe2);

			// Affichage du tirage 
			std::cout << " tirage " << tirageDe1 << std::endl << tirageDe2 << std::endl;
			std::cout << "score courant : " << scoreCourant << std::endl;
			std::cout << "score precedent : " << scorePrecedent << std::endl;

			//determination de la win ou lose 
			if (scoreCourant > scorePrecedent)
			{
				std::cout << " Gagné " << std::endl;
				scorePrecedent = scoreCourant;

				char reponse;
				std::cout << "votre porte moula contient " << moula << "chf" << std::endl;
				std::cout << "coulaz vous rejouer ou repartir avec la somme Gagné (o/n) ?" << std::endl;
				std::cin >> reponse;

				if (reponse == 'o')
					// on a decide de doubler et rejouer 
				{
					moula *= 2;
					continuer = true;	}

				else if (reponse == 'o')
				{
					std::cout << "vous avez gagné" << moula << "CHF" << std::endl;
					
					continuer = false;	}
				else
				{ }
			}
		else
		{
			std::cout << "Perdu" << std::endl;
			// on pert donc on quitte le jeu 
			continuer = false;
		}
	} while (continuer);
} 
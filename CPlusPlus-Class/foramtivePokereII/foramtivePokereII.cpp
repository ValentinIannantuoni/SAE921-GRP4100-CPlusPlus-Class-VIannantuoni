#include<iostream>
#include<list>
#include<vector>


enum class Carte
{
	AS = 11,
	DEUX = 2,
	TROIS = 3,
	QUATRE = 4,
	CINQ = 5,
	SIX = 6,
	SEPT = 7,
	HUIT = 8,
	NEUF = 9,
	Valais = 10,
	Reine = 10,
	ROI = 10,
};
int somme(int valeur1, int valeur2, int valeur3, int valeur4, int valeur5)
{
	return valeur1 + valeur2 + valeur3 + valeur4 + valeur5;
}
int main()
{
	//gene de seed
	srand(time(NULL));

	int scoreCourant;
	bool continuer = true;


	do
	{   //tirage des carte 
		int tirageC1 = 1 + (rand() % 11);
		int tirageC2 = 1 + (rand() % 11);
		int tirageC3 = 1 + (rand() % 11);
		int tirageC4 = 1 + (rand() % 11);
		int tirageC5 = 1 + (rand() % 11);

		scoreCourant = somme(tirageC1, tirageC2, tirageC3, tirageC4, tirageC5);

		//affichage du tirage 
		std::cout << "tirage" << tirageC1 << std::endl << tirageC2 << std::endl << tirageC3 << std::endl << tirageC4 << std::endl << tirageC5 << std::endl;




	} while (continuer);
}
#include<iostream>
#include<vector>

#include "Pommier.h"
#include "Poirier.h"
#include "Cerisier.h"

std::vector<Arbres*> inisArbres(int NBArbres)
{

	std::vector<Arbres*> arbres;

	for (int i = 0; i < NBArbres; ++i)
	{
		srand(time(NULL) * i);
		int tirage = rand();

		if (tirage % 3 == 0)
		{
			arbres.push_back(new Pommier());
		}
		else if (tirage % 3 == 1)
		{
			arbres.push_back(new Cerisier());
		}
		else if (tirage % 3 == 2)
		{
			arbres.push_back(new Poirier());
		}
		else
		{
			std::cout << "sa ne devrais pas arriver regarder le code ";
		}

		arbres.back()->valeurdesfruit();
	}
	return arbres;

}

void regarderArbes(std::vector<Arbres*> Arbres)
{
	float Poidrecolter = 0;

	for (auto A : Arbres)
	{
		float Poids = 0;
		std::string TypeArbres;
				
		Poids = A->Poidsdisponible();
		Poidrecolter += Poids;

		if (dynamic_cast<Pommier*>(A) != nullptr)
		{
			TypeArbres = "Pommier";
		}
		else if (dynamic_cast<Cerisier*>(A) !=nullptr)
		{
			TypeArbres = "Cerisier";
		}
		else if (dynamic_cast<Poirier*>(A) != nullptr)
		{
			TypeArbres = "Poirier";
		}
		else
		{
			{
				std::cout << "Type d'arbres:" << TypeArbres << "| Poids:" << Poids << "| KG" << std::endl;

			}
			std::cout << "total : " << Poidrecolter << "| KG" << std::endl << std::endl;
			std::cout << "fin de la liste -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- --" << std::endl << std::endl;
		}


	}
}

int main()
{
	std::vector<Arbres*> arbres;
	static const int NBArbres = 127;

	std::cout << "inis abres --------------------" << std::endl;
	arbres = inisArbres(NBArbres);

	std::cout << "Regarder Quanti. ------------------" << std::endl;
	regarderArbes(arbres);

		int nbRecolte = 1;
		bool contractEnded = false;
		unsigned int idxarbres = 0;


		do
		{
			float PoidsTotalRecolter = 0;
			float PoidsCeriseRecolter = 0;
			float PoidsPommeRecolter = 0;
			float PoidsPoirerecolter = 0;

			do
			{
				Arbres *arbresactuel = arbres.at(idxarbres);

				float Poidsdunarbres = arbresactuel->Recolte(2000 - PoidsTotalRecolter);
				PoidsTotalRecolter += Poidsdunarbres;
				
				if (dynamic_cast<Cerisier*>(arbresactuel) != nullptr)
				{
					PoidsCeriseRecolter += Poidsdunarbres;
				}
				else if (dynamic_cast<Pommier*>(arbresactuel) != nullptr)
				{
					PoidsPommeRecolter += Poidsdunarbres;
				}
				else if (dynamic_cast<Poirier*>(arbresactuel) != nullptr)
				{
					PoidsPoirerecolter += Poidsdunarbres;
				}
				else
				{
					break;
				}
				
				if (arbresactuel->Poidsdisponible() <=0 )
				{
					idxarbres++;
				}


			} while (PoidsTotalRecolter < 2000 && idxarbres < arbres.size());
			std::cout << "Recolte :" << nbRecolte << std::endl;
			std::cout << "Poids des Cerise \a\a\a" << PoidsCeriseRecolter << " KG" << std::endl;
			std::cout << "Poids des Poire \a\a\a" << PoidsPoirerecolter << " KG" << std::endl;
			std::cout << "Poids des Pomme \a\a\a" << PoidsPommeRecolter << " KG" << std::endl;
			std::cout << "poid total \a\a\a" << PoidsTotalRecolter << "KG" << std::endl;
			std::cout << "----\a" << "----\a" << "----\a" << "----\a" << "----\a" << "----\a" << std::endl;

			if (PoidsTotalRecolter < 2000 || idxarbres >= arbres.size())
			{
				finducontra = true;
				std::cout << "Contra terminer :[ " << std::endl;
			}

			nbRecolte++;
		
		} while (nbRecolte <= && finducontra == false);


}
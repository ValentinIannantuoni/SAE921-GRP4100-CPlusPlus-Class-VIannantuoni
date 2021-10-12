#include "Pommier.h"



Pommier::Pommier() : Arbres()
{}

void Pommier::valeurdesfruit()
{
	

	Poidsfurit = 0.150f;
	NBfruit = 600 + rand() % 300;
}
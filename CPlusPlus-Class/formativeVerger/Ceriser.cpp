#include "Cerisier.h"

Cerisier::Cerisier() : Arbres()
{}

void Cerisier::valeurdesfruit()
{
	Poidsfurit = 0.005f;
	NBfruit = 55000 + rand() % 20000;
}
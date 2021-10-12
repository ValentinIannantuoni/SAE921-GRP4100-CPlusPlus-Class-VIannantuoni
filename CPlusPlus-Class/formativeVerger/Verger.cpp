#include "Verger.h"

float Arbres::Poidsdisponible()
{
	return static_cast<float>(NBfruit) * Poidsfurit;
}

float Arbres::Recolte(float PoidRecolte)
{

	int NBfruitaRecolter;
	if (Poidsdisponible() > NBfruitaRecolter)
	{
		NBfruitaRecolter = static_cast<int>(float(PoidRecolte / Poidsfurit));
		if (NBfruitaRecolter <= 0)
		{
			NBfruitaRecolter = 1;
		}
	}

	else
	{
		NBfruitaRecolter = NBfruit;
	}
	NBfruit -= NBfruitaRecolter;
	return NBfruitaRecolter * Poidsfurit;
}
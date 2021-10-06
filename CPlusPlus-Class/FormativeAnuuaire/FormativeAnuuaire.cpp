#include<iostream>
#include<map>
#include<string>
#include<vector>

int main()
{
	std::map<std::string, std::string> monMap;

		monMap.emplace(" Sebastien ", " 1" );
		monMap.emplace(" valentin ", " 2 ");
		monMap.emplace(" Jose ", " 3 ");
		monMap.emplace(" jean-fabrice ", " 4 ");
		monMap.emplace(" antoine ", " 5 ");
		monMap.emplace(" patrik ", " 6 ");

		std::cout << "votre nom ?" << std::endl;
		std::string cle;
		std::cin >> cle;

		std::cout << " votre numero ?" << std::endl;
		std::string valeur;
		std::cin >> valeur;


	std::cout << monMap["Sebastien"] << std::endl; //rechercher avec la clef 

		for(auto mapIt = monMap.begin(); mapIt != monMap.end(); ++mapIt)
		{
			std::cout << "Pair value : " << mapIt->first << ":" << mapIt->second << std::endl;
		}
		std::cout << "qui cherche tu ?" << std::endl;
		std::cin >> cle;
		auto itTofind = monMap.find(cle);
		if (itTofind != monMap.end())
		{
			std::cout << "trouver le numero =" << itTofind->second << std::endl;
		}
		std::cout << monMap.find(cle)->second << std::endl;   

		monMap.find(cle);

		std::map<int, int> monMapInt;

		monMapInt.emplace(10, 1);
		monMapInt.emplace(1, 2);

		std::cout << monMapInt.at(10) << std::endl;

}

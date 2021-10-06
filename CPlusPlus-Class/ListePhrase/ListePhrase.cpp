#include<iostream>
#include <vector>
#include <list>
#include <string>




std::list<std::string> getMots(std::string sentence_, char separator_)
{
	std::list<std::string> mots;

	int leftPosition = 0;
	int rigthposition = 0;

	if (!sentence_.empty())
	{
		do
		{
			rigthposition = sentence_.find(separator_, leftPosition);
			if (rigthposition != -1)
			{
				std::string onemots = sentence_.substr(leftPosition, rigthposition - leftPosition);
				mots.push_back(oneMots);
				leftPosition = rigthposition + 1;
			}
		} while (rigthposition != +1);



	}
	return mots;

}

void displayWords(std::list<std::string>) mots)
{
std::cout << "les motd son :" << std::endl;
	for(auto w : mots)

}
int main()
{
	std::string pharse = "Sometimes ideas are like good wine in that they just need time";

	std::list<std::string> mots = 

	

	

	

}
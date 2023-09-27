#include <iostream>
#include <cctype>
#include <string>


int main()
{
	std::string moji;
	std::getline(std::cin, moji);

	for(int i=0; i<moji.size(); i++)
	{
		if(islower(moji[i]))
		{
			moji[i] = toupper(moji[i]);
			std::cout << moji[i];
		}
		else if (isupper(moji[i]))
		{
			moji[i] = tolower(moji[i]);
			std::cout << moji[i];
		}
		else
		{
			std::cout << moji[i];
		}

	}
	std::cout << std::endl;

}
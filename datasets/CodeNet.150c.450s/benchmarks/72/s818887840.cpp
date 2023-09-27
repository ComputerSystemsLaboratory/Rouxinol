#include<cctype>
#include<iostream>
#include<string>
int main(void) {
		std::string InputString;
		std::getline(std::cin , InputString);
		for (unsigned int i = 0; i < InputString.size(); ++i) {
			if (std::islower(InputString[i])) { InputString[i] = std::toupper(InputString[i]); }
			else { InputString[i] = std::tolower(InputString[i]); }
		}
		std::cout << InputString<<std::endl;
	//system("pause");
	return 0;
}
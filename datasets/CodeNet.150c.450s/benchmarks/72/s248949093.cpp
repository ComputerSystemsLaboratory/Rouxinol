#include<iostream>
#include<cctype>
#include<string>
#include<algorithm>

int main()
{
	std::string word;
	std::getline(std::cin, word);
	for (int i = 0; i < word.size(); i++) {
		if (std::islower(word[i])) {
			word[i] = std::toupper(word[i]);
		}
		else if (std::isupper(word[i])) {
			word[i] = std::tolower(word[i]);
		}
		std::cout << word[i];
	}
	std::cout << std::endl;
}
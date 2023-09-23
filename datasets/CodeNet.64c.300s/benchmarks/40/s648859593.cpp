#include <iostream>
int main(int argc, char const* argv[])
{
	const char downcase = 'a' - 'A';
	const char upcase = -downcase;
	std::string str;

	std::getline(std::cin,str);
	for (int i = 0; i < str.length(); i++) {
		char letter = str[i];
		if (letter >= 'A' && letter <= 'Z') {
			letter += downcase;
		} else if (letter >= 'a' && letter <= 'z') {
			letter += upcase;
		}
		str[i] = letter;
	}
	std::cout << str << std::endl;
	return 0;
}
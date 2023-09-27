#include <string.h>

#include <iostream>

int main() {
	char str[21];
	std::cin >> str;

	for (int i = strlen(str) - 1; i >= 0; i--)
			std::cout << str[i];

	std::cout << std::endl;
}
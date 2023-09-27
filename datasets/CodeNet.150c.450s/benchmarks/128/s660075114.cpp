#include <cstdio>
#include <cstdlib>
#include <iostream>

int main() {
	const int size = 21;
	char str[size];
	std::scanf("%s", &str);

	for (int i = size - 1; i >= 0; i--)
		if (48 <= str[i] && str[i] <= 57)
			std::cout << str[i];
		else if(97 <= str[i] && str[i] <= 122)
			std::cout << str[i];

	std::cout << std::endl;
}
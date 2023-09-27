#include <iostream>
#include <cstring>
int main() {
	char s[20];
	std::cin >> s;
	for (int i = strlen(s)-1; i >= 0; i--)
		std::cout << s[i];
	std::cout << std::endl;
	return 0;
}
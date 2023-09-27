#include <iostream>



int main() {

	int alphabets[26] = {};
	char c;

	while (!(std::cin >> c).eof()) {
		c = tolower(c);
		if ('a' <= c && c <= 'z') alphabets[c - 'a']++;
	}

	for (int i = 0; i < 26; i++) {
		std::cout << static_cast<char>(i + 'a') << " : " << alphabets[i] << "\n";
	}

	int wait;
	std::cin >> wait;


	return 0;

}
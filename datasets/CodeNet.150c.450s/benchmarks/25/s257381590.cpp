#include <iostream>

int main() {
	char ch;
	int counter[26] = { 0 };
	while (std::cin >> ch) {
		if (static_cast<bool>(isupper(ch))) {
			ch = static_cast<int>(tolower(ch));
		}
		int num = ch - 'a';
		counter[num]++;
	}
	for (int i = 0; i < 26; i++) {
		char word = i + 'a';
		std::cout << word << " " << ":" << " " << counter[i] << std::endl;
	}
}
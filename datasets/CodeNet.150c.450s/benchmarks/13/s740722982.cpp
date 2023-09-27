#include "iostream"
#include "string"


int main()
{
	std::string ring, word;
	std::cin >> ring;
	std::cin >> word;
	ring += ring;

	for (int i = 0; i < ring.length(); i++) {
		if (ring[i] == word[0]) {
			for (int j = 0; j < word.length(); j++) {
				if (i + j + 1 >= ring.length())
					break;
				if (ring[i + j] == word[j] && j + 1 == word.length()) {
					std::cout << "Yes" << std::endl;
					return 0;
				}
				else if (ring[i + j] != word[j])
					break;
			}
		}
		if (i + 1 == ring.length())
			std::cout << "No" << std::endl;
	}
	return 0;
}
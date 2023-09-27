#include "iostream"
#include "string"
#include "cctype"


int main()
{
	std::string line, word;
	int count = 0;
	std::cin >> word;
	for (int i = 0; i < word.length(); i++)
		if (isupper(word[i]))
			word[i] = tolower(word[i]);

	while (1) {
		std::cin >> line;
		if (line == "END_OF_TEXT") break;
		for (int i = 0; i < line.length(); i++)
			if (isupper(line[i]))
				line[i] = tolower(line[i]);
		if (line == word)
			count++;
	}
	std::cout << count << std::endl;
    return 0;
}
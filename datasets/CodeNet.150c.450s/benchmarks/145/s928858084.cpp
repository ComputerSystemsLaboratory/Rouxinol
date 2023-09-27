#include <iostream>
#include <string>
#include <map>

int main()
{
	std::map<std::string, int> word_frequency;
	std::string word;
	while (std::cin >> word) {
		word_frequency[word]++;
	}

	std::string most_frequent_word;
	std::string longest_word;
	int max_frequency = 0;
	for (std::map<std::string, int>::iterator i = word_frequency.begin(); i != word_frequency.end(); ++i) {
		if (i->second > max_frequency) {
			most_frequent_word = i->first;
			max_frequency = i->second;
		}
		if (i->first.size() > longest_word.size()) {
			longest_word = i->first;
		}
	}

	std::cout << most_frequent_word << ' ' << longest_word << std::endl;

	return 0;
}
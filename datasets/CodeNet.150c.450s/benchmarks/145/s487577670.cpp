#include<iostream>
#include<string>
#include<map>

int main() {
	std::map<std::string, int> words;
	int maxlen = 0, maxfreq = 0;
	std::string word, letword, freqword;
	while (std::cin >> word) {
		if (maxlen < word.length()) {
			maxlen = word.length();
			letword = word;
		}
		if (words.find(word) == words.end()) {
			words[word] = 1;
		}
		else {
			words[word] += 1;
		}
		if (maxfreq < words[word]) {
			maxfreq = words[word];
			freqword = word;
		}
	}
	std::cout << freqword << " " << letword << std::endl;

	return 0;
}

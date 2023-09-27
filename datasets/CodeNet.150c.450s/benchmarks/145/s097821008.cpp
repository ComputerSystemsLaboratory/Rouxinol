#include <string>
#include <map>
#include <cctype>
#include <iostream>

void wordProcess(std::map<std::string, int> &wordCount,
	std::string &word, std::string &modeWord, std::string &maxLenWord) {
	if (wordCount.find(word) == wordCount.end()) {
		wordCount[word] = 0;
		if (word.length() > maxLenWord.length()) {
			maxLenWord = word;
		}
	}
	++wordCount[word];
	if (wordCount[word] > wordCount[modeWord]) {
		modeWord = word;
	}
}

int main() {
	std::string sentence, word, modeWord, maxLenWord;
	std::map<std::string, int> wordCount;
	std::getline(std::cin, sentence);
	for (std::string::iterator it = sentence.begin(); it != sentence.end(); ++it) {
		if (isspace(*it)) {
			if (!word.empty()) {
				wordProcess(wordCount, word, modeWord, maxLenWord);
			}
			word = "";
		} else {
			word += tolower(*it);
		}
	}
	wordProcess(wordCount, word, modeWord, maxLenWord);
	std::cout << modeWord << ' ' << maxLenWord << '\n';
	return 0;
}
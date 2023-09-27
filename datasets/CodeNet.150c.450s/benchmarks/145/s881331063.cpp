#include <iostream>
#include <map>
#include <string>

int main() {
	std::string word, longest, freqest;
	std::map<std::string, int> table;
	//入力
	while (std::cin >> word) ++table[word];
	//演算
	longest = table.begin()->first;
	freqest = table.begin()->first;
	for (std::map<std::string, int>::iterator it = table.begin(); it != table.end(); ++it) {
		if (longest.length() < it->first.length()) longest = it->first;
		if (table[freqest] < it->second) freqest = it->first;
	}
	//出力
	std::cout << freqest << " " << longest << std::endl;
	return 0;
}
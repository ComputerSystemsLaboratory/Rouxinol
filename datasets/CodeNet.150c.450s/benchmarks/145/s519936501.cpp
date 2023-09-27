#include <iostream>
#include <map>
int main()
{
	std::map<std::string, int> words;	
	std::string  input, longest, frequent;
	while (std::cin >> input) {
		words[input]++; // 出現頻度++
		if (words[input] > words[frequent]) { // 最出現頻度単語更新
			frequent = input;
		}
		if (input.length() > longest.length()) {
			longest = input;
		}
	}
	std::cout << frequent << ' ' << longest << std::endl;
}
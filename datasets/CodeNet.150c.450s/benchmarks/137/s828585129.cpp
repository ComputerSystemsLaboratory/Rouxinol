#include<set>
#include<string>
#include<iostream>
#include <algorithm>
int main(void) {
	std::ios_base::sync_with_stdio(false);
	int n;
	std::cin >> n;
	std::set<std::string>DICTIONARY;
	std::string COMMAND;std::string WORD;
	for (int i = 0; i < n; ++i) {
		std::cin >> COMMAND>>WORD;
		if (COMMAND == "insert") {
			
			DICTIONARY.insert(WORD);
		}
		else if (COMMAND == "find") {
			//if (std::find(DICTIONARY.begin(), DICTIONARY.end(), WORD) != DICTIONARY.end())
			if (DICTIONARY.find( WORD) != DICTIONARY.end())
			{
				std::cout << "yes" << std::endl;
			}
			else { std::cout << "no" << std::endl; }
		}
	}
	//	system("pause");
	return 0;
}
#include <iostream>
#include <string>
#include <algorithm>

#define INPUT_FROM_FILE (0)
#if INPUT_FROM_FILE
#include <fstream>
#endif

int main(int argc, char **argv){
#if INPUT_FROM_FILE
	std::ifstream ifs("test.txt");
#endif
	std::string word;
	std::string tmp;
	int count = 0;
	
#if INPUT_FROM_FILE
	ifs >> word;
#else
	std::cin >> word;
#endif

#if INPUT_FROM_FILE
	while(ifs >> tmp){
#else
	while(std::cin >> tmp){
#endif
		std::transform(tmp.cbegin(), tmp.cend(), tmp.begin(), tolower);	
		if(word == tmp){
			count++;
		}
	}

	std::cout << count << std::endl;
	return 0;
}
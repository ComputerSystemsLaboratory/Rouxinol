#include <iostream>
#include <string>

#define INPUT_FROM_FILE (0)
#if INPUT_FROM_FILE
#include <fstream>
#endif

int main(int argc, char **argv){
#if INPUT_FROM_FILE
	std::ifstream ifs("test.txt");
#endif
	std::string str;

#if INPUT_FROM_FILE
	ifs >> str;
#else
	std::cin >> str;
#endif

	for(int i = str.size() - 1; i >= 0; i--){
		std::cout << str.at(i);
	}
	std::cout << std::endl;
	return 0;
}
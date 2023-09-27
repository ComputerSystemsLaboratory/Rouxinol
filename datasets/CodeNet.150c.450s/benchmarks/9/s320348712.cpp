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
	std::string str;
	int m = 0;
	int h = 0;

	for(;;){
#if INPUT_FROM_FILE
		ifs >> str;
#else
		std::cin >> str;
#endif
		if(str == "-"){ break;}
		
#if INPUT_FROM_FILE
		ifs >> m;
#else
		std::cin >> m;
#endif
		for(int i = 0; i < m; i++){
#if INPUT_FROM_FILE
			ifs >> h;
#else
			std::cin >> h;
#endif
			str = str.substr(h, std::string::npos) + str.substr(0, h);
		}
		std::cout << str << std::endl;
	}
	return 0;
}
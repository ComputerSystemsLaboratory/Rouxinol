
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

#define INPUT_FROM_FILE (0)
#if INPUT_FROM_FILE
#include <fstream>
#endif

int main(int argc, char **argv){
#if INPUT_FROM_FILE
	std::ifstream ifs("test.txt");
#endif
	std::string str0;
	std::string str1;

#if INPUT_FROM_FILE
	ifs >> str0 >> str1;
#else
	std::cin >> str0 >> str1;
#endif

	for(unsigned int i = 0; i < str0.size(); i++){
		if(str0.at(i) == str1.at(0)){
			bool is_matched = true;
			for(unsigned int j = 0; j < str1.size(); j++){
				//std::cout << str1.at(j) << str0.at( (i + j) % str0.size() ) << std::endl;
				if(str1.at(j) != str0.at( (i + j) % str0.size() )){
					is_matched = false;
					break;
				}
			}
			//std::cout << std::endl;
			if(is_matched){
				std::cout << "Yes" << std::endl;
				return 0;
			}
		}
	}
	std::cout << "No" << std::endl;
	return 0;
}
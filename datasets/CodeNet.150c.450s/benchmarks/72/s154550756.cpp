
#include <iostream>
#include <vector>
#include <sstream>
#include <algorithm>

#define INPUT_FROM_FILE (0)
#if INPUT_FROM_FILE
#include <fstream>
#endif

int main(int argc, char **argv){
#if INPUT_FROM_FILE
	std::ifstream ifs("test.txt");
#endif
	std::string buf;

#if INPUT_FROM_FILE
	std::getline(ifs, buf);
#else
	std::getline(std::cin, buf);
#endif
	for(int i = 0; i < buf.size(); i++){
		char c = buf.at(i);
		if(c >= 'a' && c <= 'z'){
			c = toupper(c);
		}
		else if(c >= 'A' && c <= 'Z'){
			c = tolower(c);
		}
		std::cout << c;
	}
	std::cout << std::endl;
	return 0;
}
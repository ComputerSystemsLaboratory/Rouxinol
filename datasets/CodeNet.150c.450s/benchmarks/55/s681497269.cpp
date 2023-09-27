#include <iostream>
#include <sstream>

#define INPUT_FROM_FILE (0)
#if INPUT_FROM_FILE
#include <fstream>
#endif

int main(int argc, char **argv){
#if INPUT_FROM_FILE
	std::ifstream ifs("test.txt");
#endif
	std::string buf;

	for(;;){
		int sum = 0;
#if INPUT_FROM_FILE
		std::getline(ifs, buf);
#else
		std::getline(std::cin, buf);
#endif
		if(buf.at(0) == '0'){ break;}

		for(int i = 0; i < buf.size(); i++){
			sum += buf.at(i) - '0';
		}
		std::cout << sum << std::endl;
	}
	return 0;
}
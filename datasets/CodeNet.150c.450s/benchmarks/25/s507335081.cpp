
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
	std::string buf;;
	std::string tmp;
	std::vector<int> alpha_counter(26);	

#if INPUT_FROM_FILE
	while(std::getline(ifs, tmp)){
#else
	while(std::getline(std::cin, tmp)){
#endif
		buf.append(tmp);	
	}

	for(unsigned int i = 0; i < buf.size(); i++){
		char c = buf.at(i);
		if(c >=  'A' && c <= 'Z'){
			c -= 'A';	
		}
		else if(c >= 'a' && c <= 'z'){
			c -= 'a';	
		}
		else{
			continue;
		}
		alpha_counter[c]++;
	}

	for(unsigned int i = 0; i < alpha_counter.size(); i++){
		std::cout << char(i + 'a') << " : " << alpha_counter[i] << std::endl;
	}
	return 0;
}
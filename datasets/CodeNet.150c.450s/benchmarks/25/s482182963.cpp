#include <iostream>
#include <string>
#include <vector>
int main(int argc, char const *argv[])
{
	std::string line;
	std::vector<int> res(26,0);
	while(true){
		std::getline(std::cin,line);
		if(std::cin.eof()){break;}
		for(char c : line){
			int cn = (int)c;
			if(cn >= (int)'a'){
				cn -= (int)'a';
			}else{
				cn -= (int)'A';
			}
			if(cn >= 0){
				res[cn] ++;
			}
		}
	}
	for(int i = 0; i < 26 ; i ++){
		std::cout << (char)(i+(int)'a') << " : " << res[i] << std::endl;
	}

	return 0;
}
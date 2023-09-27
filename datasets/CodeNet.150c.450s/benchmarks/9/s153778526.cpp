#include <iostream>
#include <string>

int main(int argc, char const *argv[])
{
	std::string word;
	while(true){
		std::cin >> word;
		if(word == "-") break;
		int times;
		std::cin >> times ;
		int idx = 0;
		int h = 0;
		for(int i = 0 ; i < times ; i ++ ){
			std::cin >> h;
			idx += h;
			idx %= word.length();
		}
		for(unsigned int i = 0 ; i < word.length() ;i ++){
			std::cout << word.at((i+idx)%word.length());
		}
		std::cout << std::endl;
	}
	return 0;
}
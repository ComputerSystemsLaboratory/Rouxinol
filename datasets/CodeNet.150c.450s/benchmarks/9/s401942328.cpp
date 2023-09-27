#include <iostream>

int main() {
	std::string str;
	int m, h;

	while(true){
		std::cin >> str;
		if(str == "-") break;
		std::cin >> m;

		for(int i=0; i<m; i++){
			std::cin >> h;
			str =  str.substr(h) +  str.substr(0, h);
		}
		std::cout << str << std::endl;
	}
}


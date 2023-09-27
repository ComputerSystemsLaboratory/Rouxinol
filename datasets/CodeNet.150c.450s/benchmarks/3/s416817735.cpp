#include <iostream>
#include <string>

int main(int argc, char const *argv[])
{
	std::string input;
	std::cin >> input;
	int times ;
	std::cin >> times;
	std::string op;
	for(int i = 0 ; i < times ; i ++){
		std::cin >> op;
		if(op == "replace"){
			int s,e;
			std::cin >> s >> e;
			std::string rep;
			std::cin >> rep;
			input.replace(s,e-s+1,rep);
		}else if(op == "reverse"){
			int s,e;
			std::cin >> s >> e;
			std::string rev = "";
			for(int i = e ; i >= s ; i --){
				rev.push_back(input.at(i));
			}
			input.replace(s,e-s+1,rev);
		}else if(op == "print"){
			int s,e;
			std::cin >> s >> e;
			std::cout << input.substr(s,e-s+1) << std::endl;
		}
	}
	return 0;
}
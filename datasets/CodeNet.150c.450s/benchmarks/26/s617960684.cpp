#include <iostream>

int main(int argc, char **argv){
	int a = 0;
	int b = 0;

	std::cin >> a >> b;

	if(a < b){
		std::cout << "a < b";
	}
	else if(a > b){
		std::cout << "a > b";
	}
	else{
		std::cout << "a == b";
	}
	std::cout << std::endl;
	return 0;
}
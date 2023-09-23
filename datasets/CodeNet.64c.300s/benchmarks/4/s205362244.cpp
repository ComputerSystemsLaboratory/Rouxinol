#include <iostream>
using namespace std;

int main() {
	int num,num2,num3;
	std::cin >> num;
	std::cin >> num2;
	std::cin >> num3;
	
	if(num < num2) {
		if(num2 < num3) {
			std::cout << "Yes" <<std::endl;
		}else {
		std::cout << "No" << std::endl;
		}
	}else {
		std::cout << "No" << std::endl;
	}
	return 0;
}
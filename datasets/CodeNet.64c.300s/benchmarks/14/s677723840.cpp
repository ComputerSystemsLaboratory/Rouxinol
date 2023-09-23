#include <iostream>
using namespace std;

int main() {
	int num,num2;
	std::cin >> num;
	std::cin >> num2;
	if(num > num2) {
		std::cout << "a > b" << std::endl;
	}else if(num == num2) {
		std::cout << "a == b" << std::endl;
	}else {
		std::cout << "a < b" << std::endl;
	}
	return 0;
}
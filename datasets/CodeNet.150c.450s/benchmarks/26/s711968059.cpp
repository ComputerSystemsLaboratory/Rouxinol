#include <iostream>

int main() {
	int num1, num2;
	std::cin >> num1 >> num2;
	
	if(num1 > num2){
		std::cout << "a > b" << std::endl;
	}
	else if (num1 < num2) {
		std::cout << "a < b" << std::endl;
	}
	else
	{
		std::cout << "a == b" << std::endl;
	}
	return 0;
}
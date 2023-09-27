#include <iostream>

int main(int argc, char const *argv[])
{
	int num1, num2;

	while (1) {
		std::cin >> num1 >> num2;
		if (num1 == 0 && num2 ==0) {
			break;
		}
		if (num1 < num2) {
			std::cout << num1 << " " << num2 << std::endl;
		}
		else {
			std::cout << num2 << " " << num1 << std::endl;
		}
	}

	return 0;
}
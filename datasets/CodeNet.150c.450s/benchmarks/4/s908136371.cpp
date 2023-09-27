#include <iostream>

int main()
{
	double a, b, c;
	while (std::cin >> a >> b >> c) {
		if (a == -1 && b == -1 && c == -1) {
			break;
		}
		else if (a == -1 || b == -1) {
			std::cout << "F" << std::endl;
		}
		else if (a + b >= 80) {
			std::cout << "A" << std::endl;
		}
		else if (a + b >= 65 && a + b < 80) {
			std::cout << "B" << std::endl;
		}
		else if (a + b >= 50 && a + b < 65) {
			std::cout << "C" << std::endl;
		}
		else if (a + b >= 30 && a + b < 50) {
			if (c >= 50) {
				std::cout << "C" << std::endl;
			}
			else {
				std::cout << "D" << std::endl;
			}
		}
		else if (a + b < 30) {
			std::cout << "F" << std::endl;
		}
	}
    return 0;
}
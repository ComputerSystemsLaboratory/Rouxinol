#include <iostream>

int main()
{
	int m, f, r;
	std::cin >> m >> f >> r;

	while (m != -1 || f != -1 || r != -1) {
		if (m == -1 || f == -1) {
			std::cout << "F" << std::endl;
		}
		else if (m + f >= 80) {
			std::cout << "A" << std::endl;
		}
		else if (m + f >= 65) {
			std::cout << "B" << std::endl;
		}
		else if (m + f >= 50) {
			std::cout << "C" << std::endl;
		}
		else if (m + f >= 30) {
			if (r >= 50) {
				std::cout << "C" << std::endl;
			}
			else {
				std::cout << "D" << std::endl;
			}
		}
		else {
			std::cout << "F" << std::endl;
		}
		std::cin >> m >> f >> r;
	}
}
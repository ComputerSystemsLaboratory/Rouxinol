#include <iostream>

int main()
{
	int data_num;
	std::cin >> data_num;
	while (data_num >= 1) {
		int x1, x2, x3;
		std::cin >> x1 >> x2 >> x3;
		if (x1 * x1 == x2 * x2 + x3 * x3) {
			std::cout << "YES" << std::endl;
		} else if (x2 * x2 == x3 * x3 + x1 * x1) {
			std::cout << "YES" << std::endl;
		} else if (x3 * x3 == x1 * x1 + x2 * x2) {
			std::cout << "YES" << std::endl;
		} else {
			std::cout << "NO" << std::endl;
		}
		data_num--;
	}
	return 0;
}
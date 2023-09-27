#include <iostream>

int main()
{
	long double x1, y1, x2, y2, x3, y3, x4, y4;
	int num_of_instance;
	std::cin >> num_of_instance;
	for (int i=0; i<num_of_instance; i++) {
		std::cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
		long double tAB = (y2-y1) / (x2-x1);
		long double tCD = (y4-y3) / (x4-x3);
		if (tAB == tCD) std::cout << "YES" << std::endl;
		else std::cout << "NO" << std::endl;
	}
	return 0;
}

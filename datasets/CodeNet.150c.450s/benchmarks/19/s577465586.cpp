#include <iostream>

int main(int argc, char const* argv[]) {
	int x,y;
	std::cin >> x >> y;
	while (!(x==y&&x==0)) {
		if (x <= y) {
			std::cout << x << " " << y << std::endl;
		} else {
			std::cout << y << " " << x << std::endl;
		}
		std::cin >> x >> y;
	}

	return 0;
}
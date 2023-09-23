#include <iostream>

int main(int argc, char *argv[]) {
	int x, i = 1;
	while (std::cin >> x) {
		if (x == 0) break;
		std::cout << "Case " << i << ": " << x << std::endl;
		++i;
	}
	return 0;
}
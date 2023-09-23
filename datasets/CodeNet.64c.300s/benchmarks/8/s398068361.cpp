#include <iostream>

int main() {
	int x, i, k;

	std::cin >> x;

	for (i = 1; i <= x; i++) {
		int k = i;
		if (k % 3 == 0) {
			std::cout << " " << i;
			continue;
		}

		if(k){
			if (k % 10 == 3) {
				std::cout << " " << i;
				continue;
			}
		}

		k /= 10;
		if (k % 10 == 3) {
			std::cout << " " << i;
			continue;
		}
		
		k /= 10;
		if (k % 10 == 3) {
			std::cout << " " << i;
			continue;
		}

		k /= 10;
		if (k % 10 == 3) {
			std::cout << " " << i;
			continue;
		}
	}

	std::cout << std::endl;

	return 0;
}
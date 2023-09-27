#include <iostream>

int main() {
	while (true) {
		int referee;
		std::cin >> referee;
		if (referee == 0) {
			break;
		}

		int max, min;
		std::cin >> max >> min;
		if (max < min) {
			std::swap(min, max);
		}
		int total = 0;
		for (int i = 2; i < referee; ++i) {
			int score;
			std::cin >> score;
			if (max < score) {
				total += max;
				max = score;
			} else if (min > score) {
				total += min;
				min = score;
			} else {
				total += score;
			}
		}
		std::cout << (total / (referee - 2)) << std::endl;
	}
}
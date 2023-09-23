#include<iostream>

int main() {
	int vals[101] = { 0 }, val;
	while (std::cin >> val) {
		vals[val] += 1;
	}
	int max = 0;
	for (int i = 1; i <= 100; ++i) {
		if (max < vals[i]) {
			max = vals[i];
		}
	}
	for (int i = 1; i <= 100; ++i) {
		if (vals[i] == max) std::cout << i << std::endl;
	}
	return 0;
}

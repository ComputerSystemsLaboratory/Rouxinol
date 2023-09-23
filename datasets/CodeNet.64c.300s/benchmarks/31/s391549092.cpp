#include <iostream>
#include <algorithm>
int main() {
	int n[30];
	bool a[30] = {};
	for (int i = 0; i < 30; ++i) {
		n[i] = i + 1;
	}
	for (int i = 0; i < 28; ++i) {
		int t; 
		std::cin >> t;
		for (int j = 0; j < 30; ++j) {
			if (t == n[j])a[j] = true;
		}
	}
	for (int i = 0; i < 30; ++i) {
		if (!a[i]) {
			std::cout << i + 1 << std::endl;
		}
	}
	return 0;
}
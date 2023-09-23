#include<iostream>
int main() {
	int a[28], b[30] = {};
	for (int i = 0; i < 28; i += 1)
		std::cin >> a[i];
	for (int i = 0; i < 28; i += 1) {
		b[a[i] - 1] = 1;
	}
	for (int i = 0; i < 30; i += 1) {
		if (b[i] == 0)
			std::cout << i + 1 << std::endl;
	}
	return 0;
}
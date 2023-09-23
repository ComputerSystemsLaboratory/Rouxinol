#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

int main() {
	int n;
	int a[1000];

	std::cin >> n;
	for (int i = 0; i < n; i++) {
		std::cin >> a[i];
	}

	int tmp;

	for (int i = 0; i < n / 2; i++) {
		tmp = a[i];
		a[i] = a[(n - 1) - i];
		a[(n - 1) - i] = tmp;
	}
	for (int i = 0; i < n; i++) {
		if (i < n - 1)
			std::cout << a[i] << " ";
		else
			std::cout << a[i];
	}
	std::cout << std::endl;
	return 0;
}
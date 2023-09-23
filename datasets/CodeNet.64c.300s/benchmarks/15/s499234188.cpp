#include <iostream>

void out(int n, int* a);

int main() {
	int n;
	int a[100];
	std::cin >> n;
	for (int i = 0; i < n; i++) {
		std::cin >> a[i];
	}
	// Selection Sort
	int count = 0;
	for (int i = 0; i < n; i++) {
		int minj = i;
		for (int j = i; j < n; j++) {
			if (a[j] < a[minj]) {
				minj = j;
			}
		}
		if (i != minj) {
			int aa = a[minj];
			a[minj] = a[i];
			a[i] = aa;
			count++;
		}
	}
	out(n, a);
	std::cout << count << std::endl;
	return 0;
}

void out(int n, int* a) {
	std::cout << a[0];
	for (int i = 1; i < n; i++) {
		std::cout << " " << a[i];
	}
	std::cout << std::endl;
}
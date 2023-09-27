#include <iostream>

int maxSum(int *a, int n) {
	int sum, max = a[0];
	for (int i = 0; i < n; ++i) {
		sum = 0;
		for (int j = i; j < n; ++j) {
			sum += a[j];
			if (sum > max) { max = sum; }
		}
	}
	return max;
}

int main() {
	int n;
	int *a;
	for (;;) {
		std::cin >> n;
		if (n <= 0) { break; }
		a = new int[n];
		for (int i = 0; i < n; ++i) {
			std::cin >> a[i];
		}
		std::cout << maxSum(a, n) << '\n';
		delete [] a;
	}
	return 0;
}
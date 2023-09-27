#include <iostream>

int main() {
	int n, a_s, b_s, *a, *b;
	std::cin >> n;
	while (n) {
		a_s = b_s = 0;
		a = new int[n];
		b = new int[n];
		for (int i=0; i<n; i++) {
			std::cin >> a[i] >> b[i];
		}
		for (int i=0; i<n; i++) {
			if (a[i] > b[i]) {
				a_s += a[i] + b[i];
			} else if (a[i] < b[i]) {
				b_s += a[i] + b[i];
			} else {
				a_s += a[i], b_s += b[i];
			}
		}
		std::cout << a_s << " " << b_s << std::endl;
		delete[] a;
		delete[] b;
		std::cin >> n;
	}
}
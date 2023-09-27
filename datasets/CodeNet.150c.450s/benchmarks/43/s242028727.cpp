#include<iostream>
int main() {
	int n = 0;
	while (std::cin >> n, n) {
		int A = 0, B = 0;
		for (int i = 0; i < n; ++i) {
			int a, b;
			std::cin >> a >> b;
			if (a > b) {
				A = A + a + b;
			}
			else if (a < b) {
				B = B + a + b;
			}
			else if (a == b) {
				A = A + a;
				B = B + b;
			}
		}
		std::cout << A <<" "<< B << std::endl;
	}
	return 0;
}
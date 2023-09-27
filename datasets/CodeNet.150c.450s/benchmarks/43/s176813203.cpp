#include<iostream>
int main() {
	int n;
	while (std::cin >> n, n) {
		int asum = 0, bsum = 0, a, b;
		for (int i = 0; i < n; i++) {
			std::cin >> a >> b;
			if (a > b)
				asum += a + b;
			else if(a < b)
				bsum += a + b;
			else {
				asum += a;
				bsum += b;
			}
		}
		std::cout << asum << " " << bsum << std::endl;
	}
	return 0;
}
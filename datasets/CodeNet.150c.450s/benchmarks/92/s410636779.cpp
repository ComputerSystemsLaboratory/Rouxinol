#include <iostream>

int main() {
	int a, b;
	while (std::cin >> a >> b) {
		a += b;
		int ans = 0;
		while (a > 0, ans++, a /= 10);
		std::cout << ans << std::endl;
	}
}
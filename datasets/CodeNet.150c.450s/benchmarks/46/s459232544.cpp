#include <iostream>

int main()
{
	unsigned n, x;
	while (std::cin >> n >> x, n) {
		unsigned count{};
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j < i; j++) {
				for (int k = 1; k < j; k++) {
					if (i+j+k == x) {
						count++;
						break;
					}
				}
			}
		}
		std::cout << count << std::endl;
	}
	return 0;
}
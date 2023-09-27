#include <iostream>

int main()
{
	int n, x;
	std::cin >> n >> x;

	int cont = 0;

	while (n + x > 0) {
		for (int i = 1; i <= n; i++) {
			for (int j = i + 1; j <= n; j++) {
					for (int k = j + 1; k <= n; k++) {
							if (i + j + k == x) {
								cont++;
							}
					}
			}
		}
		std::cout << cont << std::endl;
		
		std::cin >> n >> x;
		cont = 0;
	}
}
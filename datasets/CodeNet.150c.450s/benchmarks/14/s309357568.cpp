#include <iostream>

int main()
{
	int n, x;
	std::cin >> n;

	for(int i=1;i<=n;i++){
		if (i % 3 == 0) {
			std::cout << " " << i;
		}
		else {
			x = i;
			while (x > 0) {
				if (x % 10 == 3) {
					std::cout << " " << i;
					break;
				}
				x /= 10;
			}
		}
	}
	std::cout << std::endl;
}
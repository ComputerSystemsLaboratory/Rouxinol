#include "iostream"
#include "string"


int main()
{
	int n;
	std::cin >> n;
	int i = 1;

	for (; i <= n; i++) {
		if (i % 3 == 0)
				std::cout << " " << i;
		else {
			int temp = i;
			for (; temp >= 3;) {
				if (temp % 10 == 3) {
					std::cout << " " << i;
					break;
				}
				else
					temp /= 10;
			}
		}
	}

	std::cout << std::endl;
	return 0;
}
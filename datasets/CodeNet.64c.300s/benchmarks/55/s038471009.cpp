#include <iostream>

int main()
{
	int i = 1;
	int x;
	std::cin >> x;

	while (x != 0) {
		std::cout << "Case " << i << ": " << x << std::endl;
		i++;
		std::cin >> x;
	}
}
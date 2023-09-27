#include <iostream>

int main(void)
{
	int x, i = 0;
	std::cin >> x;
	while(x != 0) {
		i++;
		std::cout << "Case " << i << ": " << x << std::endl;
		std::cin >> x;
	}
	return 0;
}
#include <iostream>
int main(int argc, char const* argv[])
{
	long long x, i;
	i = 1;
	std::cin >> x;
	while (x!=0) {
		std::cout << "Case " << i << ": " << x << std::endl;
		i++;
		std::cin >> x;
	}

	return 0;
}
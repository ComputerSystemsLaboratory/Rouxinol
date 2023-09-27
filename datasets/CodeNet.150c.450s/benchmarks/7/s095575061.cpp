#include <algorithm>
#include <iostream>

int main() {
	int h[10];

	for (int i = 0; i < 10; i++)
		std::cin >> h[i];

	std::sort(h, h + 10);

	std::cout
		<< h[9] << std::endl
		<< h[8] << std::endl
		<< h[7] << std::endl;
}
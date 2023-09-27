#include <iostream>
#include <algorithm>

int main() {
	int a[4] = {}, b[4] = {};
	std::cin >> a[0] >> a[1] >> a[2] >> a[3];
	std::cin >> b[0] >> b[1] >> b[2] >> b[3];
	std::cout << std::max({ a[0] + a[1] + a[2] + a[3], b[0] + b[1] + b[2] + b[3] }) << std::endl;
	return 0;
}
#include <iostream>

int main() {
	int a,b,c;
	std::cin >> a >> b >> c;

	if (a < b && b < c && a!=b && b!=c && c!=a) {
		std::cout << "Yes" << std::endl;
	}
	else {
		std::cout << "No" << std::endl;
	}
}

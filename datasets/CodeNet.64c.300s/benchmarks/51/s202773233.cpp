#include<iostream>

long int fac(int x) {
	if (x == 1) return 1;
	return x * fac(x - 1);
}

int main() {
	long int input;
	while (std::cin >> input) {
		std::cout << fac(input) << std::endl;
	}
	return 0;
}
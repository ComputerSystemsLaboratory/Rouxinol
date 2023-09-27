#include <iostream>

int main(int argc, char const* argv[]) {
	int a,b,c;
	int sum = 0;

	std::cin >> a >> b >> c;

	for (int i = a; i <= b; i++) {
		if (!(c % i)) {
			sum++;
		}
	}
	std::cout << sum << std::endl;

	return 0;
}
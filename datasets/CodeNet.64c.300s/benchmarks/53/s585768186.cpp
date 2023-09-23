#include <iostream>

int main()
{
	int a, b, c, d;
	int cont = 0;

	std::cin >> a >> b >> c;
	d = c / 2;

	while (a <= b && a <= d) {
		if (c % a == 0) {
			cont++;
		}
		a++;
	}

	if (a <= c && c <= b) {
		cont++;
	}

	std::cout << cont << std::endl;
}
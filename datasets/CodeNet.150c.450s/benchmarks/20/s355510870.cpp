#include <iostream>

int main() {

	int s, h, m, s2;

	std::cin >> s;
	h = s / 3600;
	m = (s % 3600) / 60;
	s2 = (s % 3600) % 60;


	std::cout << h << ":" << m << ":" << s2 << "\n";


}

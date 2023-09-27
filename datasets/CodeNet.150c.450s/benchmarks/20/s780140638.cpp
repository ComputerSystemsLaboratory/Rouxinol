#include <iostream>
int main() {
	int h, m, s;
	int S;
	std::cin >> S;
	s = S % 60;
	m = S / 60 % 60;
	h = S / 60 / 60;
	std::cout << h << ":" << m << ":" << s << std::endl;
	return 0;
}
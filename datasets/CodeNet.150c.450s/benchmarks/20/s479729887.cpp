#include <iostream>

int main(int argc, char *argv[]) {
	int S, h, m, s;
	std::cin >> S;
	s = S % 60;
	S /= 60;
	m = S % 60;
	h = S / 60;
	std::cout << h << ":" << m << ":" << s << std::endl;
	return 0;
}
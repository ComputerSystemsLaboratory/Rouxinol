#include <iostream>

int main() {
	const int MIN_MAX = 60;
	const int SEC_MAX = 60;
	
	int input, h, m, s;
	std::cin >> input;
	
	h = input / (MIN_MAX*SEC_MAX);
	m = (input / SEC_MAX) % MIN_MAX;
	s = input % SEC_MAX;
	
	std::cout << h << ":" << m << ":" << s << std::endl;
}
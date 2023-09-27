#include<iostream>
int main() {
	int S;
	std::cin >> S;
	std::cout << S / 3600 << ":" << S % 3600 / 60 << ":" << S % 3600 % 60 << std::endl;
	return 0;
}

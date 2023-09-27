#include <iostream>
#include<string>

int main() {
	int h,m,s,S;
	std::cin >> S;
	std::cout << S / 3600 << ":" << S / 60 % 60 << ":" << S % 60 << std::endl;
	return 0;
}


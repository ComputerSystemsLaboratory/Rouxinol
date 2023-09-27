#include<iostream>
int main() {
	int A, B;
	std::cin >> A >> B;
	if (A < B) {
		std::cout << "a < b" << std::endl;
	}
	if (A > B) {
		std::cout << "a > b" << std::endl;
	}
	if (A == B) {
		std::cout << "a == b" << std::endl;
	}
}

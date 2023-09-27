#include<iostream>
int main() {
	int a[31] = { 0 }, b;
	for (int i = 0; i < 28; i++) {
		std::cin >> b;
		a[b]++;
	}
	for (int i = 1; i <= 30; i++) {
		if (a[i] == 0) {
			std::cout <<i<< std::endl;
		}
	}
}
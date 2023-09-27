#include<iostream>
#include<algorithm>
int main() {
	bool a[31];
	int input;
	for (int i = 0; i < 31; ++i) {
		a[i] = false;
	}
	for (int i = 0; i < 28; ++i) {
		std::cin >> input;
		a[input] = true;
	}
	for (int i = 1; i < 31; ++i) {
		if (a[i] == false) {
			std::cout << i << std::endl;
		}
	}
	return 0;
}
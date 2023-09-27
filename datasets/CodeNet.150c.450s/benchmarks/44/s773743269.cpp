#include<iostream>
int main() {
	int n;
	while (std::cin>>n) {
		int input[4];
		input[0] = n;
		for (int i = 1; i < 4; ++i) {
			std::cin >> input[i];
		}
		int answer[4];
		for (int i = 0; i < 4; ++i) {
			std::cin >> answer[i];
		}
		int e = 0, b = 0;
		for (int i = 0; i < 4; ++i) {
			for (int j = 0; j < 4; ++j) {
				if (input[i] == answer[j]) {
					if (i == j)++e;
					else ++b;
					break;
				}
			}
		}
		std::cout << e << " " << b << std::endl;
	}
	return 0;
}
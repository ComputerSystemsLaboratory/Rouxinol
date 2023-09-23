#include <iostream>

int main() {
	int num[28]= {},getnum = 0;
	int f[31] = {};
	for (int i = 0; i < 28; i++) {
		std::cin >> num[i];
	}
	for (int j = 0; j < 28; j++) {
		getnum = num[j];
		f[getnum] = 1;
	}
	
	for (int k = 1; k < 31; k++) {
		if (f[k] == 0) {
			std::cout << k << std::endl;
		}
	}

	return 0;

}
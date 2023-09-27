#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

#define NUMBER 20000

int main() {
	int x[NUMBER];
	int y[NUMBER];
	char c[NUMBER][1];
	int count;

	for (int i = 0; i < NUMBER; i++) {
		std::cin >> x[i] >> c[i] >> y[i];
		if (c[i][0] == '?') {
			count = i;
			break;
		}
		i++;
	}
	for (int i = 0; i < count; i++) {
		switch (c[i][0]) {
		case '+':std::cout << x[i] + y[i] << std::endl; continue;
		case '-':std::cout << x[i] - y[i] << std::endl; continue;
		case'*':std::cout << x[i] * y[i] << std::endl; continue;
		case'/':std::cout << x[i] / y[i] << std::endl; continue;
		}
	}
	return 0;
}
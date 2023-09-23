#include<stdio.h>
#include <iostream>

int main(void) {

	int n;
	scanf("%d", &n);

	int i = 1;
	while (++i <= n) {
		int x = i;
		if (x % 3 == 0) {
			std::cout << " " << i;
			continue;
		}

		while (x) {
			if (x % 10 == 3) {
				std::cout << " " << i;
				break;
			}
			x /= 10;
		}
	}
	std::cout << std::endl;

	return 0;
}


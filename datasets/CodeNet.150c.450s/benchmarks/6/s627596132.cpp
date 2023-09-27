#include <iostream>
#include <cstdio>

int main() {
	int a, b, c;
	
	scanf("%d %d %d", &a, &b, &c);
	if(a < b && b < c) {
		std::cout << "Yes" << std::endl;
	}
	else {
		std::cout << "No" << std::endl;
	}
}
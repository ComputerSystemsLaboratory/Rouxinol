#include <iostream>
#include <cstdio>

int main() {
	int a, b;
	
	scanf("%d %d", &a, &b);
	if(a<b) {
		std::cout << "a < b" << std::endl;
	}
	else if (a>b) {
		std::cout << "a > b" << std::endl;
	}
	else {
		std::cout << "a == b" << std::endl;
	}
}
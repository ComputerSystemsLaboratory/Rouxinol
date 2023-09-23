#include <iostream>
#include <stdio.h>

bool judge(int, int, int);

int main() 
{
	int N;
	int a;
	int b;
	int c;
	
	std::cin >> N;
	for (int i = 0; i < N; i++) {
		std::cin >> a >> b >> c;
		if (judge(a, b, c)){
			std::cout << "YES" << std::endl;
		} else {
			std::cout << "NO" << std::endl;
		}
	}
	
	return 0;
}

bool judge(int a, int b, int c) {
	if (a * a == b * b + c * c || b * b == a * a + c * c || c * c == a * a + b * b) {
		return true;
	} else {
		return false;
	}
}
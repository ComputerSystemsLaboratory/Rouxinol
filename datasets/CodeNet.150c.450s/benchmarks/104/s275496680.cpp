#include <stdio.h>
#include <iostream>
#include <vector>

std::vector<int> x(30);
int w, n;
int a, b;
int main() {
	std::cin >> w;
	for(int i=0; i<w; ++i) {
		x[i] = i + 1;
	}
	std::cin >> n;
	
	int a, b;
	for(int i=0; i<n; ++i) {
		scanf("%d,%d", &a, &b);
		int tmp = x[a-1];
		x[a-1]  = x[b-1];
		x[b-1]  = tmp;
	}
	
	for(int i=0; i<w; ++i) {
		std::cout << x[i] << std::endl;
	}
	
	return 0;
}

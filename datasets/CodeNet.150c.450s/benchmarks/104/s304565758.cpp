#include <iostream>
#include <stdio.h>

int main() {
	int w; std::cin >> w;
	int W[w];
	for (int i=0; i<w; i++) W[i] = i+1;
	int n; std::cin >> n;
	int a, b, tmp;
	while (~scanf("%d,%d", &a, &b)) {
		tmp = W[a-1];
		W[a-1] = W[b-1];
		W[b-1] = tmp;
	}
	for (int i=0; i<w; i++) std::cout << W[i] << std::endl;
	return 0;
}

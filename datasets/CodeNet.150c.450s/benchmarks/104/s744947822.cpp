#include<iostream>
#include<cstdio>
#include<vector>


int main() {
	int w, n;
	std::cin >> w >> n;
	std::vector<int> vl(w+1);
	for (int i = 1; i < w+1; i++) {
		vl[i] = i;
	}
	for (int j = 0; j < n; j++) {
		int a, b, c;
		std::scanf("%d,%d", &a, &b);
		c = vl[a];
		vl[a] = vl[b];
		vl[b] = c;
	}
	for (int i = 1; i < w + 1; i++) {
		std::cout << vl[i] << std::endl;
	}
}
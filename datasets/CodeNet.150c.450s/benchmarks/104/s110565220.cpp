#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
	int s, a, b, x[30];
	int w, n; cin >> w >> n;
	for (int i = 0; i < w; i++) {
		x[i] = i + 1;
	}
	for (; n > 0; n--) {
		scanf("%d,%d", &a, &b);
		s = x[a - 1];
		x[a - 1] = x[b - 1];
		x[b - 1] = s;
	}
	for (int i = 0; i<w; i++) {
		cout << x[i] << endl;
	}
}

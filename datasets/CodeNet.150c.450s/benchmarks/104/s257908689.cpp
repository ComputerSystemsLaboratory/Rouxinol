#include <iostream>
#include <cstdio>
using namespace std;

void swap(int* x, int* y) {
	int temp = *x;
	*x = *y;
	*y = temp;
}

int main() {
	int w;
	cin >> w;

	int a[w+1];
	for (int i = 0; i <= w; i++) {
		a[i] = i;
	}

	int ops;
	cin >> ops;

	while (ops--) {
		int x, y;
		scanf("%d,%d", &x, &y);

		swap(a[x], a[y]);
	}

	for (int i = 1; i <= w; i++) 
		cout << a[i] << endl;

	return 0;
}
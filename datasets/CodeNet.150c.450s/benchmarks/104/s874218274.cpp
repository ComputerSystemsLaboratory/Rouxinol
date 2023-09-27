#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<iostream>
#include<string>
using namespace std;

void swap(int* a, int* b) {

	int work;

	work = *a;
	*a = *b;
	*b = work;
}

int main() {

	int w, n;
	cin >> w;
	cin >> n;

	int a[30];
	for (int i = 0; i < 30; i++)a[i] = i + 1;
	int x, y;
	char c;
	for (int i = 0; i < n; i++) {
		cin >> x >> c >> y;

		swap(&a[x - 1], &a[y - 1]);
	}

	for (int i = 0; i < w; i++) {
		printf("%d\n", a[i]);
	}

	//system("pause");
	return 0;
}

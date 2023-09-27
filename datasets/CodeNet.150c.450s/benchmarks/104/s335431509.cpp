#define scanf_s scanf
#include <stdio.h>
#include <string>
#include <iostream>
#include <math.h>
using namespace std;
#define MAX 30
int main(void)
{
	int w, n, a, b, x;
	int list[MAX] = { 0 };
	scanf_s("%d", &w);
	scanf_s("%d", &n);
	for (int i = 0; i < w;++i) {
		list[i] = i + 1;
	}
	for (int i = 0; i < n; ++i) {
		scanf_s("%d,%d", &a, &b);
		x = list[a - 1]; list[a - 1] = list[b - 1]; list[b - 1] = x;
	}
	for (int i = 0; i < w; ++i) {
		printf("%d\n", list[i]);
	}

}
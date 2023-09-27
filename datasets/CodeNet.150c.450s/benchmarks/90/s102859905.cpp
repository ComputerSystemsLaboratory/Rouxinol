#define scanf_s scanf
//#define gets_s gets
#include <stdio.h>
#include <string>
#include <iostream>
#include <math.h>
using namespace std;
#define MAX 50//00
#define MIN -100001
#define _MAX 100
int main(void)
{
	int a[_MAX] = { 0 }, x, max = 0;
	while (scanf_s("%d", &x) != EOF) {
		++a[x - 1];
		if (a[x - 1] > max) max = a[x - 1];
	}
	for (int i = 0; i < _MAX; ++i) {
		if (a[i] == max) {
			printf("%d\n", i + 1);
		}
	}
}	
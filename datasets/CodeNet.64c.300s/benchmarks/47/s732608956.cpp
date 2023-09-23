#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

int a[100];

int main(void) {
	int n;
	int max = 0;
	for (int i = 0; i < 100; i++)a[i] = 0;

	while (scanf("%d", &n) != EOF) {
		a[n]++;
	}

	for (int i = 0; i < 100; i++) {
		if (a[i] > max)max = a[i];
	}
	for (int i = 0; i < 100; i++) {
		if (a[i] == max) printf("%d\n", i);
	}
	return 0;
}
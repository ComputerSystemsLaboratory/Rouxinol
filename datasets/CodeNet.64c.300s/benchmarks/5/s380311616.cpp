#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
	int max = 0;
	int max2 = 0;
	int max3= 0;
	int a[10];
	bool flag = false;

	for (int i = 0; i < 10; i++) {
		scanf("%d", &a[i]);
		if (max < a[i]) max = a[i];
	}
	
	for (int i = 0; i < 10; i++) {
		if (!flag && a[i] == max) {
			flag = true;
			a[i] = 0;
		}
		if (max2 < a[i]) max2 = a[i];
	}

	flag = false;

	for (int i = 0; i < 10; i++) {
		if (!flag && a[i] == max2) {
			flag = true;
			a[i] = 0;
		}
		if (max3 < a[i]) max3 = a[i];
	}
		printf("%d\n", max);
		printf("%d\n", max2);
		printf("%d\n", max3);

		return (0);
	
}
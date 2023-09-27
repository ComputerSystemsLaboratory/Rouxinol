#define scanf_s scanf
//#define gets_s gets
#include <stdio.h>
#include <string>
#include <iostream>
#include <math.h>
using namespace std;
#define MAX 81
#define _MAX 100
#define ABC 26
int main(void)
{
	int a[5],b;
	for (int i = 0; i < 5;++i){
		scanf_s("%d", &a[i]);
	}
	for (int i = 0; i < 5; ++i) {
		for (int j = 4; j > i; --j) {
			if (a[j] > a[j - 1]) {
				b = a[j - 1]; a[j - 1] = a[j]; a[j] = b;
			}
		}
	}
	for (int i = 0; i < 5; ++i) {
		if (i != 0)printf(" ");
		printf("%d", a[i]);
	}
	printf("\n");
}
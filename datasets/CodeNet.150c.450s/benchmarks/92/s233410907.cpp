#define scanf_s scanf
#include <stdio.h>
#include <iostream>
using namespace std;
#define MAX 200
int main(void)
{
	int a, b, sum, cou = 0;
	while (scanf_s("%d %d", &a, &b) != EOF) {
		sum = a + b;
		while (1) {
			if (sum <= 0) break;
			sum /= 10;
			++cou;
		}
		printf("%d\n", cou);
		cou = 0;
	}
}
#define scanf_s scanf
#include <stdio.h>
#include <string>
#include <iostream>
using namespace std;
#define MAX 20
int main(void)
{
	int n, sum = 100000;
	scanf_s("%d", &n);
	for (int i = 0; i < n; ++i) {
		sum += sum * 0.05;
		if (sum % 1000 != 0) {
			sum += 1000 - sum % 1000;
		}
	}
	printf("%d\n", sum);
}
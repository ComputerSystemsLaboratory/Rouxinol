#define scanf_s scanf
#include <stdio.h>
#include <iostream>
using namespace std;
#define MAX 200
int main(void)
{
	long long int a, b, c, x, y;
	while (scanf_s("%lld %lld", &a, &b) != EOF) {
		if (b > a) { x = a; a = b; b = x; }
		x = a; y = b;
		c = a % b;
		while (c != 0) {
			a = b; b = c;
			c = a % b;
		}
		printf("%lld %lld\n", b, x * y / b);
	}
}
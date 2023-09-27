#define scanf_s scanf
#include <stdio.h>
#include <iostream>
using namespace std;
#define MAX 200
int main(void)
{
	int n,a, b, c,x, sum, cou = 0;
	scanf_s("%d", &n);
	for (int i = 0; i < n; ++i) {
		scanf_s("%d %d %d", &a, &b, &c);
		if (a > b) {
			x = a; a = b; b = x;
		}
		if (b > c) {
			x = b; b = c; c = x;
		}
		if(c* c == a*a + b * b)	printf("YES\n");
		else printf("NO\n");
	}
}
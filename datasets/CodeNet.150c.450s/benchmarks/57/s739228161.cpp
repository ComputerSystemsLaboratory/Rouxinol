#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
	int n, a[10001], b[10001], i,d;
	char c[10001];
	i = 1;
	d = 1;
	while (1) {
		scanf("%d %c %d", &a[i], &c[i], &b[i]);
		if (c[i] == '?') { break; };
		d = d + 1;
		i++;
	}
	n = 1;
	while (n <= d) {
		if (c[n] == '+') { printf("%d\n", a[n] + b[n]); }
		else if (c[n] == '-') { printf("%d\n", a[n] - b[n]); }
		else if (c[n] == '*') { printf("%d\n", a[n] * b[n]); }
		else if (c[n] == '/') { printf("%d\n", a[n] / b[n]); }
		n++;
	}
	return 0;
}

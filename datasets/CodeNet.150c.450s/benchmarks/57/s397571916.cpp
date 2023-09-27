#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;
int main()
{
	int x, y, i, j, m, n;
	char a;
	while (1) {
		cin >> x >> a >> y;
		if (a == '+') {
			n = x + y;
		}
		if (a == '-') {
			n = x - y;
		}
		if (a == '*') {
			n = x*y;
		}
		if (a == '/') {
			n = x / y;
		}
		if (a == '?') {
			break;
		}
		printf("%d\n", n);

	}
}
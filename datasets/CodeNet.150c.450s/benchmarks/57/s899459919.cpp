#include <stdio.h>
#include<iostream>
using namespace std;
int main()
{
	int a[10000], b[10000],i;
	char c[10000];
	i = 1;
	while (1) {
		cin >> a[i] >> c[i] >> b[i];
		if (c[i] == '?' ) { break; }
		else if (c[i] == '+') { printf("%d\n", a[i] + b[i]); }
		else if (c[i] == '-') { printf("%d\n", a[i] - b[i]); }
		else if (c[i] == '*') { printf("%d\n", a[i] * b[i]); }
		else if (c[i] == '/') { printf("%d\n", a[i] / b[i]); }
	
		i++;
	}
	return 0;
}

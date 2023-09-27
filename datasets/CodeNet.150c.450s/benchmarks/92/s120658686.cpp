#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main()
{
	int a;
	int b;

	while (cin >> a >> b) {
		//scanf("%d%d", &a, &b);
		if (a + b == 0) printf("%d\n", 1);
		else printf("%d\n", (int)log10(a + b) + 1);
	}

		return (0);
	
}
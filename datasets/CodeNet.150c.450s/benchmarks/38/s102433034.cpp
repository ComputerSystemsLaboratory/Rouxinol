#include "stdio.h"

int main()
{
	int a, b, c, n;

	scanf("%d", &n);

	for (int i = 0; i < n; i++){
		scanf("%d %d %d", &a, &b, &c);

		a *= a;
		b *= b;
		c *= c;

		if(c == a+b || b == a+c || a == b+c) printf("YES\n");
		else printf("NO\n");
	}

	return 0;
}
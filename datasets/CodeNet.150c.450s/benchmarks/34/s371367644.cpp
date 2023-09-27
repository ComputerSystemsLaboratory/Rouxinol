#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
	int n;
	int a, b, c, d, ans;
	int i;

	

	while (1) {
		scanf("%d", &n);
		if (n == 0) break;
		a = 1;
		b = 2;
		c = 4;

		if (n == 1) d = a;
		if (n == 2) d = b;
		if (n == 3) d = c;

		for (i = 4; i <= n ; i++) {
			
			d = a + b + c;
			a = b;
			b = c;
			c = d;
		}

		ans = d / 3650;
		if (d % 3650 != 0) ans++;
		printf("%d\n", ans);
	}

	
	return (0);
}
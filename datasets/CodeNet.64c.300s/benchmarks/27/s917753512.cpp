#include <stdio.h>


int main() {
	int n, x,  c = 0, count = 0;
	int b[100] = {};
	for (;;) 
	{
		scanf("%d%d", &n, &x);
		if (n == 0 && x == 0)break;
		for (int i = 1; i < n - 1;i++) {
			for (int j = i + 1; j < n; j++) {
				for (int k = j + 1; k <= n; k++) {
					if (i + j + k == x)c++;
				}
			}
		}
		b[count] = c;
		c = 0;
		count++;
	}
	
	for (int i = 0; i < count; i++) {
		printf("%d\n", b[i]);
	}

	return 0;
}
#include<stdio.h>
#include<math.h>
#include<algorithm>

int main() {
	int n, x;
	while (1) {
		
		scanf("%d %d", &n, &x);
		if (n == 0 && x == 0) {
			break;
		}

		
		int m = 0;
		for (int a = 1; a <= n; a++) {
			for (int b = 1; b < a; b++) {
				for (int c = 1; c < b; c++) {
					if (a + b + c == x) {
						m++;
					}
				}
			}
		}
		printf("%d\n", m);
	}
return 0;
}
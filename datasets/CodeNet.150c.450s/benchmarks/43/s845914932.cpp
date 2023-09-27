#include <stdio.h>

int main(void) {
	while (1) {
		int n;
		scanf("%d", &n);
		
		if (n == 0) {
			break;
		}
		
		int a_score = 0;
		int b_score = 0;
		
		int i;
		for (i = 0; i < n; i++) {
			int a;
			int b;
			scanf("%d %d", &a, &b);
			
			*(a >= b ? &a_score : &b_score) += a;
			*(b >= a ? &b_score : &a_score) += b;
		}
		
		printf("%d %d\n", a_score, b_score);
	}
	
	return 0;
}
#include <stdio.h>

int main(void)
{
	int   m, f, r, sum;


	for (; ; ) {
		scanf("%d %d %d", &m, &f, &r);
		if (m == -1 && f == -1 && r == -1) {
			break;
		}
		sum = m + f;
		
		if (m == -1 || f == -1) {
			printf("F\n");
		}
		else {

			if (sum >= 80) {
				printf("A\n");
			}
			if (sum >= 65 && sum < 80) {
				printf("B\n");
			}
			if (sum >= 50 && sum < 65) {
				printf("C\n");
			}
			if (sum >= 30 && sum < 50) {
				if (r >= 50) {
					printf("C\n");
				}
				else
				printf("D\n");
			}
			if (sum < 30) {
				printf("F\n");
			}
		}
	}	
	return 0;
}

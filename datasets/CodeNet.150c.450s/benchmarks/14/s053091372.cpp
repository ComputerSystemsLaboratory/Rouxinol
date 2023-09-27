#include <stdio.h>

int main(void) {
	int n,tmp,flag;

	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		tmp = i;
		if (tmp % 3 == 0)printf(" %d", i);
		else {
			while (1) {
				if (tmp % 10 == 3) {
					printf(" %d", i);
					flag = 1;
				}
				tmp = tmp / 10;
				if (tmp == 0||flag==1)break;
			}
		}
		flag = 0;
	}
	printf("\n");
	return 0;
}


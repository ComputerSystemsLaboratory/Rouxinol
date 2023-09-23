#include<stdio.h>

void call(int N) {
	int i = 1;
	int x;
	while (i <= N) {
		x = i;
		if (x % 3 == 0) {
			printf(" %d", i);
		}
		else {
			while (x) {
				if (x % 10 == 3) {
					printf(" %d", i);
					break;
				}
				else {
					x /= 10;
				}
			}
		}
		
		i++;
	}
	printf("\n");
}


int main() {
	int N;
	scanf("%d", &N);
	call(N);


	return 0;
}

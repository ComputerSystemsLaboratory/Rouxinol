#include <stdio.h>

int main() {
	int n, i;
	int a[52] = {0};
	scanf("%d", &n); getchar();
	for(i = 0; i < n; i++) {
		char c;
		int b, num;
		scanf("%c %d", &c, &num); getchar();
		if(c == 'S') b = 0;
		else if (c == 'H') b = 1;
		else if (c == 'C') b = 2;
		else b = 3;
		a[b * 13 + num-1] = 1;
	}
	for(i = 0; i < 52; i++) {
		if(!a[i]) {
			if(i / 13 == 0) {
				printf("S ");
			} else if(i / 13 == 1) {
				printf("H ");
			} else if(i / 13 == 2) {
				printf("C ");
			} else {
				printf("D ");
			}
			printf("%d\n", i % 13 + 1);
		}
	}
	return 0;
}
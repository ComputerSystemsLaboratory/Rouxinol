#include<stdio.h>
#include<string.h>
int main(void) {
	int a[10000],n,b=0,i,x,d=3;
	char r[10000];
	char s[10000];
	scanf("%d", &n);
	sprintf(s, "%d", d);
	for(i = 1; i <= n; i++) {
		sprintf(r,"%d", i);
		if (i % 3 == 0) {
			a[b] = i;
			b++;
		}
		else if (strstr(r,s) != NULL) {
			a[b] = i;
			b++;
	}

	}
	for (x = 0; x < b; x++) {
		if (x == 0) {
			printf(" ");
	}
		printf("%d",a[x]);
		if (x == b - 1) {
			printf("\n");
		}
		else {
			printf(" ");
		}
	}
	return 0;
}

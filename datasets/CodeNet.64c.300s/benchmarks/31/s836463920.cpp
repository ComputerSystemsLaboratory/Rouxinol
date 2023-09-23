#include<stdio.h>
int main()
{
	int a[31] = { 0 }, n, i;
	for (i = 0; i < 28; i++) {
		scanf("%d", &n);
		a[n]=a[n]+1;
	}
	for (i = 1; i < 31; i++) {
		if (a[i] != 1) {
			printf("%d\n", i); 
		}
	}
}
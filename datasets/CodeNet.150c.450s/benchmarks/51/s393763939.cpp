#include<stdio.h>
int main()
{
	int a[31] = {0};
	int n,i;
	for (i = 1; i <= 28; i++){
		scanf("%d", &n);
		a[n] = 1;
	}
	for (i = 1; i <= 30; i++){
		if (a[i] != 1){
			printf("%d\n", i);
		}

	}
}
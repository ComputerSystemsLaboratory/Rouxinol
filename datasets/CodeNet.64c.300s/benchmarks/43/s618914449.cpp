#include<stdio.h>
int main()
{
	int a, b,i,a1=0,b1=0;
	for (i = 0; i < 4; i++){
		scanf("%d", &a);
		a1 += a;
	}
	for (i = 0; i < 4; i++){
		scanf("%d", &b);
		b1 += b;
	}
	if (a>b){
		printf("%d\n", a1);
	}
	else if (a < b){
		printf("%d\n", b1);
	}
	else
		printf("%d\n", a1);
}
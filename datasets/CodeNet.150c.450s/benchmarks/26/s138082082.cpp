#include<stdio.h>
int main(void)
{
	int a, b, c, d;
	scanf("%d %d",&a, &b);
	if(a<b){
		printf("a < b\n");
	}
	if(a>b){
		printf("a > b\n");
	}
	if(a==b){
		printf("a == b\n");
	}
	return 0;
}
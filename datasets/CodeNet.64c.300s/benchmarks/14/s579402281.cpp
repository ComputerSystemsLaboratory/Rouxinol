#include<stdio.h>
int main(void)
{
	int a,b;
	scanf("%d %d",&a,&b);
	if(a<b){
		printf("a < b\n",a,b);
	}
	if(a>b){
		printf("a > b\n",a,b);
	}
	if(a==b){
		printf("a == b\n",a,b);
	}
	return 0;
}
#include<stdio.h>
int main(void)
{
	int a, b, c, d;
	scanf("%d %d %d",&a, &b, &c);
	if(a<b && b<c && a<c){
		printf("Yes\n");
	}
	else{
		printf("No\n");
	}
	return 0;
}
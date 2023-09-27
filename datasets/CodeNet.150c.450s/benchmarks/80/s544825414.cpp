#include<stdio.h>
int main(void)
{
	int a,b,i,x;
	a=0; b=0;
	for(i=0;i<4;i++){
		scanf("%d",&x);
		a=a+x;
	}
	for(i=0;i<4;i++){
		scanf("%d",&x);
		b=b+x;
	}
	if(a>b) printf("%d\n",a);
	else printf("%d\n",b);
	return 0;
}
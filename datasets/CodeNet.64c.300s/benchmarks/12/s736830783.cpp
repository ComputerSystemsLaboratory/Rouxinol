#include<stdio.h>
int main(void)
{
	int x,a,c;
	 
	scanf("%d",&x);
		a=3;
	for(c=1;c<=x;c++){
		a=x*x*x;
	}
	printf("%d\n",a);
	
	return 0;
}
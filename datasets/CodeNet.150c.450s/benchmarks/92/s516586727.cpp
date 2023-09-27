#include<stdio.h>
int main(void)
{
	int i,a,x,b,c;
	while((scanf("%d%d",&a,&b))!=EOF){
		c=0;
		x=a+b;
		while(x!=0){
			x=x/10;
			c++;
		}
		printf("%d\n",c);
	}
}
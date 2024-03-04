#include <stdio.h>

int main(void)
{
	int a,b,c;
	int i;
	while((scanf("%d %d",&a,&b))!=EOF){
		c=a+b;
		i=1;
		while(c>=10){
			c=c/10;
			i=i+1;
		}
	printf("%d\n",i);
	}
	return 0;
}
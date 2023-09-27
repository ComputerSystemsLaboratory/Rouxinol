#include<stdio.h>
int main(void)
{
    int x,c;
	c=1;
	while (scanf("%d",&x),x!=0){   
		if(x==0) break;
		printf("Case %d: %d\n",c,x);
		c++;	
	}
	return 0;
}
	
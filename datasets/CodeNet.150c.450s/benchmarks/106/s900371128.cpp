#include <stdio.h>

int main(void)
{
	int a=0,b=0,c=0,x,d,y=0;

	scanf("%d %d %d",&a,&b,&c);


	for(x=a;x<=b;x++)
	{
		d=c%x;
		if(d==0)
		{
			y=y+1;
		}
	}

	printf("%d\n",y);

	return 0;

}
#include<stdio.h>
int main()
{
	int a,b,temp;
	while(scanf("%d%d",&a,&b)!=EOF&&(a||b))
	{
		temp=0;
		if(a>b)
		{
			temp=a;a=b;b=temp;
		}
		printf("%d %d\n",a,b);
	}
	return 0; 
}
#include<stdio.h>
int main()
{
	int a,b,c,sum=0;
	scanf("%d %d %d",&a,&b,&c);
	for(int i=a;i<=b;i++)
	{
		if(c%i==0) sum=sum+1;	
	}
	printf("%d\n",sum);
	return 0;
}
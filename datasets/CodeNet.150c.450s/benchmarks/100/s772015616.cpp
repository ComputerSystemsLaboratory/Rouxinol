#include<stdio.h>

int main(void)
{
	unsigned long long int kai=1;
	int n,i,x=0;
	scanf("%d",&n);
	for(i=1;i<n+1;i++)
	{
		 kai=kai*i;

		 while(kai % 10 ==0)
		 {
			 kai = kai / 10;
			 x+=1;
		 }
	}
	if(x==0){
	printf("%llu\n",kai);
	}
	else
	{
		printf("%llu",kai);
		for(i=0;i<x;i++)
		{
			printf("%d",0);
		}
		printf("\n");
	}
  return 0;
}
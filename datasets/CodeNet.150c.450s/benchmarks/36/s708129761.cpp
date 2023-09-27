#include<stdio.h>

int main(void)
{
	int d,kai[100]={0},i,j=0,k;

	while(scanf("%d",&d) != EOF)
	{
		for(i=0;i<600;i+=d)
		{
		  kai[j]+=i*i*d;
		}
	j+=1;
	}
    for(i=0;i<j;i++)
	{
		printf("%d\n",kai[i]);
	}
  return 0;
}
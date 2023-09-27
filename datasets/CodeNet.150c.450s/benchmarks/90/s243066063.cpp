#include<stdio.h>

int main(void)
{
	int i=0,count[101]={0},max=0;
	while(scanf("%d",&i)!=EOF)
	{
		count[i]++;
		if(count[i]>max)
		{
			max=count[i];
		}
	}
	for(i=1;i<=100;i++)
	{
		if(max==count[i])
			printf("%d\n",i);
	}
	return 0;
}
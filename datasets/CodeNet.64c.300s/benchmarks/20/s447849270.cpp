#include<cstdio>

int d;
int n;
int count=0;

int main()
{
	while(scanf("%d",&d)!=EOF)
	{
		count=0;
		n=600/d;
		for(int i=0;i<n;i++)
		{
			count+=d*(i*d)*(i*d);
		}	
		printf("%d\n",count);
	}
	return 0;
}
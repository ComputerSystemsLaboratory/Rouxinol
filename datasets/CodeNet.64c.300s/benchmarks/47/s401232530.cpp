#include<cstdio>
#define MAX(x,y) ((x>y)? x:y)

int date[100]={0};

int main()
{
	int n;
	while(scanf("%d",&n)!=EOF)
	{
		if(n==-1)break;
		date[n-1]++;
	}
	int max=0;
	for(int i=0;i<100;i++)
	{
		max=MAX(max,date[i]);
	}
	for(int i=0;i<100;i++)
	{
		if(max==date[i])printf("%d\n",i+1);
	}
	return 0;
}
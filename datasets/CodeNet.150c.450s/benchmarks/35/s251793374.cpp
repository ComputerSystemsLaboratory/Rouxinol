#include<cstdio>
#define MAX(x,y) ((x>y)? x:y)

int n;
int a[5005];
long long int def;
long long int answer=-1000000000;

int main()
{
	while(true)
	{
		answer=-1000000000;
		scanf("%d",&n);
		for(int i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		if(n==0)break;
		for(int i=0;i<n;i++)
		{
			def=0;
			for(int j=i;j<n;j++)
			{
				def+=a[j];
				answer=MAX(answer,def);
			}
		}
		printf("%lld\n",answer);
	}
	return 0;
}
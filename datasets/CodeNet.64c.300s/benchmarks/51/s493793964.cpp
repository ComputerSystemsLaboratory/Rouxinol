#include<cstdio>

int n;
long long answer=1;

int main()
{
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		answer*=i+1;
	}
	printf("%lld\n",answer);
	return 0;
}
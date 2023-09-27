#include<stdio.h>
int main()
{
	long long n,a[100],x[100][21]={0},i,j;
	scanf("%lld",&n);
	for(i=0;i<n;++i)scanf("%lld",&a[i]);
	x[0][a[0]]=1;
	for(i=1;i<n-1;++i)
	{
		for(j=0;j<21;++j)if(x[i-1][j])
		{
			if(j-a[i]>=0) x[i][j-a[i]]+=x[i-1][j];
			if(j+a[i]<=20)x[i][j+a[i]]+=x[i-1][j];
		}
	}
	printf("%lld\n",x[n-2][a[n-1]]);
	return 0;
}
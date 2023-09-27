#include<iostream>
#include<cstdio>
using namespace std;

int n,k;
long long T[100000];

int P(long long p)
{
	int i=0,j;
	long long s;
	for(j=0;j<=k-1;j++)
	{
		s=0;
		while(s+T[i]<=p)
		{
			s+=T[i];
			i++;
			if(i==n) return n;
		}
	}
	return i;
}


int main()
{
	int i;
	int max_T=0;
	long long left=0;
	long long right;
	long long mid;
	int v;
	
	scanf("%d%d",&n,&k);
	for(i=0;i<=n-1;i++)
	  {
	    scanf("%d",&T[i]);
	    if(max_T<T[i]) max_T=T[i];
	  }
	right=max_T*n;
	while(right-left>1)
	{
		mid=(right+left)/2;
		v=P(mid);
		if(v>=n) right=mid;
		else left=mid;
	}
	printf("%d\n",right);
	return 0;
}
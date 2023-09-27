#include<iostream>
#include<cstdio>
using namespace std;

int P(long long p,long long T[], int n, int k)
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
	int n,k;
	long long T[100000];
	long long left=0;
	long long right=100000*10000;
	long long mid;
	int v;
	
	cin >> n;
	cin >> k;
	for(i=0;i<=n-1;i++) cin >> T[i];
	while(right-left>1)
	{
		mid=(right+left)/2;
		v=P(mid,T,n,k);
		if(v>=n) right=mid;
		else left=mid;
	}
	cout << right << endl;
	return 0;
}
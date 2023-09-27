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
	long long left=0;
	long long right;
	long long mid;
	int v;
	
	cin >> n;
	cin >> k;
	right=10000*n;
	for(i=0;i<=n-1;i++) cin >> T[i];
	while(right-left>1)
	{
		mid=(right+left)/2;
		v=P(mid);
		if(v>=n) right=mid;
		else left=mid;
	}
	cout << right << endl;
	return 0;
}
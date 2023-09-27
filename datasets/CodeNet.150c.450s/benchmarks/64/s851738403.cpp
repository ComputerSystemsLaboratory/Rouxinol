#include<iostream>
#include<cstdio>
using namespace std;

int solve(int i, int m, int n, int A[])
{
	int d[21][2001];
	
	if(m==0) return 2;
	if(i>=n) return 1;
	if(d[i][m]!=0) return d[i][m];
	if(solve(i+1,m,n,A)==2 || solve(i+1,m-A[i],n,A)==2) return d[i][m]=2;
	else return d[i][m]=1;
}

int main()
{
	int i,n,A[20],q,m;
	
	scanf("%d",&n);
	for(i=0;i<=n-1;i++) scanf("%d",&A[i]);
	scanf("%d",&q);
	for(i=0;i<=q-1;i++)
	{
		scanf("%d",&m);
		if(solve(0,m,n,A)==2) printf("yes\n");
		else printf("no\n");
	}
	return 0;
}
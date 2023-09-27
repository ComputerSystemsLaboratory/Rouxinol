#include<iostream>
#include<cstdio>
using namespace std;

int solve(int i, int m, int n, int A[])
{
	if(m==0) return 1;
	if(i>=n) return 0;
	if(solve(i+1,m,n,A)==1 || solve(i+1,m-A[i],n,A)==1) return 1;
	else return 0;
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
		if(solve(0,m,n,A)==1) printf("yes\n");
		else printf("no\n");
	}
	return 0;
}
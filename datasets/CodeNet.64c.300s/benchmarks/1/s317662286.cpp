#include<bits/stdc++.h>

using namespace std;

const int MAXN=100100;

int split(int* A,int s,int t)
{
	int x=A[t];
	int i=s-1;
	for(int j=s;j<t;j++)
		if(A[j]<=x)
			swap(A[j],A[++i]);
	swap(A[++i],A[t]);
	return i;
}

int main()
{
	int n;
	static int A[MAXN];
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		scanf("%d",&A[i]);
	int w=split(A,0,n-1);
	for(int i=0;i<n;i++)
		if(i==w) printf("[%d]%c",A[i],i+1==n?'\n':' ');
		else printf("%d%c",A[i],i+1==n?'\n':' '); 
	return 0;
}
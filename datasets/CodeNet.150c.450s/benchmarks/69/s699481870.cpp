#include<bits/stdc++.h>
using namespace std;

int a[10],l,r;

bool dfs(int n)
{
	if(n>=10)return true;
	int x;
	if(a[n]>l)
	{
		x=l;
		l=a[n];
		if(dfs(n+1))return true;
		l=x;
	}
	if(a[n]>r)
	{
		x=r;
		r=a[n];
		if(dfs(n+1))return true;
		r=x;
	}
	return false;
}

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		l=0;r=0;
		for(int i=0;i<10;i++)scanf("%d",a+i);
		if(dfs(0))printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}
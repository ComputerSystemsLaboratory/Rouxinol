#include<iostream>
#include<cstring>
#include<cstdio>
#include<cmath>
#include<vector>
#include<map>
#include<algorithm>
#include<queue>
using namespace std;
int n,m,ans,f[10005];
int coun(int x,int y,int z)
{
	if (x==y && y==z) return 1;
	if (x==y || y==z) return 3;
	return 6;
}
int main()
{
	//freopen("a.in","r",stdin);
	//freopen("a.out","w",stdout);
	scanf("%d",&n);
	m=sqrt(n);
	for (int i=1;i<=m;i++)
		for (int j=i;j<=m;j++)
			for (int k=j;k<=m;k++)
			{
				int p=i*i+j*j+k*k+i*j+i*k+j*k;
				if (p>n) continue;
				f[p]+=coun(i,j,k);
			}
	for (int i=1;i<=n;i++) printf("%d\n",f[i]);
	return 0;
}
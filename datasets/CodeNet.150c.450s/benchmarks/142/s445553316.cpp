#include<stdio.h>
#include<iostream>
using namespace std;
const int N=2e5+10;
int a[N];
int main()
{
	int n,m,i,j;
	scanf("%d%d",&n,&m);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(j=m+1;j<=n;j++)
	{
		if(a[j]>a[j-m])
		printf("Yes\n");
		else 
		printf("No\n");
	}
	return 0;
}

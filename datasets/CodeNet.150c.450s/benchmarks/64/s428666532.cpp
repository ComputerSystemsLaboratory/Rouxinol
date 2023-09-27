#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <string.h>
#include <string>
#include <vector>
#include <limits.h>
#include <stack>
#include <queue>
#include <cstdlib>
#define maxn 10000000
#define pi acos(-1)
#define ll long long
using namespace std;

int n;
int a[27];
int solve(int i,int m)
{
	if(m==0)return 1;
	if(i>=n)return 0;
	int res=solve(i+1, m)||solve(i+1, m-a[i]);
	return res;
}
int main()
{
	int q,m,i;
	cin>>n;
	for(i=0;i<n;i++)cin>>a[i];
	cin>>q;
	while(q--)
	{
		cin>>m;
		if(solve(0, m))cout<<"yes"<<endl;
		else cout<<"no"<<endl;
	}
	return 0;
}

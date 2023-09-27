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
#include<cstdlib>
#define maxn 10000000
#define pi acos(-1)
using namespace std;
int a[10007];
int b[507];
int n,q,ans;
int linearSearch(int x)
{
	int i=0;
	a[n+1]=x;
	while(a[i]!=x)i++;
	if(i>=n+1)return false;
	return 1;
}
int main(){
	ans=0;
	cin>>n;
	for(int i=1;i<=n;i++)cin>>a[i];
	cin>>q;
	for(int i=1;i<=q;i++)cin>>b[i];
	for(int i=1;i<=q;i++)
	{
		ans+=linearSearch(b[i]);
	}
	cout<<ans<<endl;
	return 0;
}

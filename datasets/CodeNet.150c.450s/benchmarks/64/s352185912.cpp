#include <algorithm>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <cstring>
#include <queue>
#include <stack>
#include <iostream>
#include <set>
#include <map>
typedef long long ll;
using namespace std;
int n,q,x;
int a[30];
int f(int i,int x)
{
	if(x==0)
	return 1;
	if(i>n)
	return 0;
	int res=f(i+1,x)||f(i+1,x-a[i]);
	return res;
}
int main()
{
  cin>>n;
  for(int i=1;i<=n;i++)
  {
  	cin>>a[i];
  }
  cin>>q;
  for(int i=1;i<=q;i++)
  {
  	cin>>x;
  	if(f(1,x))
  	cout<<"yes"<<"\n";
  	else
  	cout<<"no"<<"\n";
  }
	return 0;
}

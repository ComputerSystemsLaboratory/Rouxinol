#include<cstdio>
#include<iostream>
using namespace std;
#define rep(x,y) for(x=0;x<(y);++x)
void in();
void solve();
int bod[14];
int main()
{
	int t;
	cin>>t;
	int ti;
	rep(ti,t)
	{
		in();
		solve();
	} 
	return 0;
}
void in()
{
	int i;
	rep(i,10)
	{
		cin>>bod[i];
	}
}
void solve()
{
	int l=0,r=0,u;
	int le[11],ri[11];
	for(u=0;u<10;++u)
	{
		if(0==l)
		{
			le[0]=bod[u];
			++l;
		}
		else if(bod[u]>le[l-1])
		{
			le[l]=bod[u];
			++l;
		}
		else if(0==r||bod[u]>ri[r-1])
		{
			ri[r]=bod[u];
			++r;
		}
		else
		{
			cout<<"NO\n";
			return;
		}
	}
	cout<<"YES\n";
}
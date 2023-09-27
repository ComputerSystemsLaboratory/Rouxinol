#include<cstdio>
#include<iostream>
using namespace std;
#define rep(x,y) for(x=0;x<(y);++x)
void in();
void solve();
void dfs(int l,int h,char f);
const int MAX_N=110;
char orch[MAX_N][MAX_N];
int L,H;
int x[]={1,0,-1,0};
int y[]={0,1,0,-1};
int main()
{
	in();
	while(L&&H)
	{
		solve();
		in();
	}
	return 0;
}
void in()
{
	cin>>H>>L;
	if(H&&L)
	{
		int i,j;
		rep(i,H)
		{
			rep(j,L)
			{
				cin>>orch[i][j];
			}
		} 
	}
}
void solve()
{
	int l,h;
	int ans=0;
	rep(h,H)
	{
		rep(l,L)
		{
			if(1!=orch[h][l])
			{
				dfs(h,l,orch[h][l]);
				++ans;
			}
		}
	}
	cout<<ans<<endl;
}
void dfs(int h,int l,char f)
{
	orch[h][l]=1;
	int i;
	int ch,cl;
	rep(i,4)
	{
		cl=l+x[i];
		ch=h+y[i];
		if(cl>=0&&cl<L&&ch>=0&&ch<H&&f==orch[ch][cl])
		{
			dfs(ch,cl,f);
		}
	}
}
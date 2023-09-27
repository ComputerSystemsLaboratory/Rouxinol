#include <iostream>
#include <fstream>
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <queue>
#include <stack>
#include <list>
#include <utility>
#include <cmath>
#include <sstream>
#define F first
#define S second
#define FOR(i,n) for(int i=0;i<(int)n;i++)
#define rep(i,n) for(int i=0;i<(int)n;i++)
#define FORI(i,k,n) for(int i=k;i<(int)n;i++)
#define repp(i,k,n) for(int i=k;i<(int)n;i++)
using namespace std;
typedef pair<double, double> pdd;
typedef pair<int,int> pii;
const double EPS = 10e-6;
int c[2000][2000]={};
string x,y;
int dp(int o,int p)
{
	if(o==x.size()||p==y.size())return 0;
	if(c[o][p]!=-1)return c[o][p];
	int ans =0;
	if(x[o]==y[p])
	{
		ans=max(dp(o+1,p+1)+1,max(dp(o+1,p),dp(o,p+1)));
	}
	else ans=max(dp(o+1,p),dp(o,p+1));

	return c[o][p]=ans;
}

int main ()
{
	int n;
	cin>>n;
	rep(i,n)
	{
		
		cin>>x>>y;
		memset(c, -1, sizeof(c));
		cout<<dp(0,0)<<endl;;
	}



}
#include <cstdio>
#include <utility>
#include <cmath>
#include <algorithm>
#include <iostream>
#include <sstream>
#include <iomanip>
#include <vector>
#include <string>
#define REP(i,n) for(int i=0;i<n;i++)
typedef long long ll;
using namespace std;
typedef vector<ll> vl;
typedef pair<ll,ll> pll;
typedef vector<pll> vpll;
typedef vector<string> vs;


int a[50][50]={};
int w,h;

void island(int x,int y)
{
	a[x][y]=0;
	for(int i=-1;i<2;i++)
	{
		for(int j=-1;j<2;j++)
		{
			if( y+j<0||y+j>h-1||x+i>w-1||x+i<0)
			{
				continue;
			}
			if(a[x+i][y+j]==1)
			{
				island(x+i,y+j);
			}
		}
	}
}

int main() 
{
	while(cin>>w>>h,!(w==0&&h==0))
	{
		REP(i,h){REP(j,w){cin>>a[j][i];}}
		int ans(0);
		REP(i,h){REP(j,w){if(a[j][i]==1){island(j,i);ans++;}}}
		cout << ans << endl;
	}
	return 0;
}
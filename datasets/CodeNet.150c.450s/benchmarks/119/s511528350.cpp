#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <cmath>
#include <complex>
#include <string>
#include <sstream>
#include <algorithm>
#include <numeric>
#include <vector>
#include <queue>
#include <stack>
#include <functional>
#include <iostream>
#include <map>
#include <set>
using namespace std;
typedef pair<int,int> P;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
#define pu push
#define pb push_back
#define mp make_pair
#define eps 1e-9
#define INF 2000000000
#define sz(x) ((int)(x).size())
#define fi first
#define sec second
#define SORT(x) sort((x).begin(),(x).end())
#define all(x) (x).begin(),(x).end()
#define EQ(a,b) (abs((a)-(b))<eps)
int w,h;
int f[55][55];
int dx[8]={0,0,1,1,1,-1,-1,-1};
int dy[8]={1,-1,1,0,-1,1,-1,0};
void dfs(int x,int y)
{
	f[x][y]=0;
	for(int i=0;i<8;i++)
	{
		int nx=x+dx[i],ny=y+dy[i];
		if(f[nx][ny]==1)dfs(nx,ny);
	}
}
void print()
{
	for(int i=1;i<=h;i++)
	{
		for(int j=1;j<=w;j++)
		{
			cout << f[i][j] << ' ';
		}
		cout << endl;
	}
}
int main()
{
	while(1)
	{
		int ans=0;
		memset(f,0,sizeof(f));
		cin >> w >> h;
		if(w==0&&h==0)break;
		for(int i=1;i<=h;i++)
		{
			for(int j=1;j<=w;j++)
			{
				cin >> f[i][j];
			}
		}
		for(int i=1;i<=h;i++)
		{
			for(int j=1;j<=w;j++)
			{
				if(f[i][j]==1)
				{
					ans++;
					dfs(i,j);
					//print();
				}
			}
		}
		cout << ans << endl;
	}
	return 0;
}
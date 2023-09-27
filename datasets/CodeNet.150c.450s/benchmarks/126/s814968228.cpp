#include<iostream>
#include<cstdio>
#include<vector>
#include<string>
#include<functional>
#include<queue>
#include<map>
#include<limits>
#include<cmath>
#include<algorithm>
#include<bitset>
#include<utility>
#include<complex>
#include<cstdlib>
#include<set>
#include<cctype>

#define DBG cerr << '!' << endl;
#define REP(i,n) for(int (i) = (0);(i) < (n);++i)
#define rep(i,s,g) for(int (i) = (s);(i) < (g);++i)
#define rrep(i,s,g) for(int (i) = (s);i >= (g);--(i))
#define PB push_back
#define MP make_pair
#define FI first
#define SE second
#define SHOW1d(v,n) {for(int i = 0;i < (n);i++)cerr << v[i] << ' ';cerr << endl << endl;}
#define SHOW2d(v,i,j) {for(int a = 0;a < i;a++){for(int b = 0;b < j;b++)cerr << v[a][b] << ' ';cerr << endl;}cerr << endl;}
#define ALL(v) v.begin(),v.end()

using namespace std;

typedef long long ll;
typedef vector<int> iv;
typedef vector<iv> iiv;
typedef vector<string> sv;

bool cant[20][20];
int mp[20][20];
int a,b,ans;

void dfs(int x,int y)
{
	if(cant[x][y])return;
	
	if(x == a-1 && y == b-1)
	{
		ans++;
		return;
	}
	
	if(x < a-1)
	{
		dfs(x+1,y);
	}
	if(y < b-1)
	{
		dfs(x,y+1);
	}

}

int main()
{
	
	while(cin >> a >> b,a)
	{
		REP(i,20)REP(j,20)cant[i][j] = false;
		ans = 0;
		int n;
		cin >> n;
		
		REP(i,n)
		{
			int x,y;
			cin >> x >> y;
			cant[x-1][y-1] = true;
		}
		
		dfs(0,0);
		
		cout << ans << endl;
	}
		
	
	
	return 0;
}
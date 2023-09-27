#include<iostream>
#include<climits>
#include<algorithm>
#include<vector>
#include<map>
#include<queue>
#include<functional>
#include<stack>
#include<list>
#include<string>
using namespace std;
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define REP(i,n) for(int i=0;i<(n);i++)
#define INF INT_MAX/3
#define ALL(a) (a).begin(),(a).end()
#define PII pair<int,int>
#define PCC pair<char,char>
#define PCI pair<char,int>
#define PIC pair<int,char>
#define MP make_pair
#define DEBUG(x) cout<<#x<<": "<<x<<endl;
char MAP[20][20];
int ans;
int dx[4] = { 1, 0, -1, 0 };
int dy[4] = { 0, 1, 0, -1 };
void dfs(int x, int y,int w,int h) 
{
	if (x < 0 || x>=w || y < 0 || y>=h)return;
	else if (MAP[y][x] == '#')return;
	else
	{
		MAP[y][x] = '#';
		::ans++;
		for (int r = 0; r < 4; r++)
		{
			int nx = x + dx[r];
			int ny = y + dy[r];
			dfs(nx, ny,w,h);
		}
	}
}
int main()
{
	while (1)
	{
		int w, h;
		::ans = 0;
		cin >> w >> h;
		if (w == 0)break;
		PII self;
		REP(y, h)
		{
			REP(x, w)
			{
				cin >> MAP[y][x];
				if (MAP[y][x] == '@')self = MP(y, x);
			}
		}
		dfs(self.second, self.first,w,h);
		cout << ::ans << endl;
	}
	return 0;
}
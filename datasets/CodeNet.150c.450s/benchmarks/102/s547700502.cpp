#include <bits/stdc++.h>
using namespace std;
#define FOR(i,k,n) for(int i = (k); i < (n); i++)
#define REP(i,n) FOR(i,0,n)
#define ALL(a) a.begin(), a.end()
#define MS(m,v) memset(m,v,sizeof(m))
#define D10 fixed<<setprecision(10)
typedef long long ll;
typedef long double ld;
typedef vector<int> vi;
typedef vector<string> vs;
typedef pair<int, int> pii;
const int MOD = 1000000007;
const int INF = MOD + 1;
const ld EPS = 1e-12;
template<class T> T &chmin(T &a, const T &b) { return a = min(a, b); }
template<class T> T &chmax(T &a, const T &b) { return a = max(a, b); }
int dx[] = { -1, 0, 0, 1 }; int dy[] = { 0, -1, 1, 0 };
//[int dx[] = { -1, -1, -1, 0, 0, 1, 1, 1 }; int dy[] = { 0, -1, 1, -1, 1, 0, -1, 1 };
bool valid(int x, int y, int h, int w) { return (x >= 0 && y >= 0 && x < h&&y < w); }
int place(int x, int y, int w) { return w*x + y; }

/*--------------------template--------------------*/

int main()
{
	int w, h;
	while (cin >> w >> h, w)
	{
		vs fld(h);
		REP(i, h) cin >> fld[i];
		int x, y;
		REP(i, h)REP(j, w)
		{
			if (fld[i][j] == '@')
			{
				x = i, y = j;
				fld[i][j] = '.';
			}
		}
		queue<pii> que;
		que.push(pii(x, y));
		int cnt = 0;
		while (que.size())
		{
			int tx = que.front().first, ty = que.front().second;
			que.pop();
			if (fld[tx][ty] == '.')
			{
				fld[tx][ty] = '$';
				cnt++;
			}
			REP(i, 4)
			{
				int nx = tx + dx[i], ny = ty + dy[i];
				if (valid(nx, ny, h, w) && fld[nx][ny] == '.')
				{
					que.push(pii(nx, ny));
				}
			}
		}
		cout << cnt << endl;
	}

	return 0;
}
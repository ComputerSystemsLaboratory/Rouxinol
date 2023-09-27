#include <bits/stdc++.h>

using namespace std;

#define FOR(i,k,n) for(int i = (k); i < (n); i++)
#define REP(i,n) FOR(i,0,n)
#define INF 114514810
#define ll long long
#define ALL(a) (a).begin(),(a).end()
#define SORT(v) sort(ALL(v))
//#define scanf scanf_s
typedef pair<int, int> P;

int w, h;
char fld[30][30];

int di[] = { -1, 0, 0, 1 }; int dj[] = { 0, -1, 1, 0 };
int main()
{
	while (cin >> w >> h, w)
	{
		queue<P> que;
		REP(i, h)REP(j, w)
		{
			cin >> fld[i][j];
			if (fld[i][j] == '@') que.push(P(i, j));
		}
		int cnt = 1;
		while (que.size())
		{
			int x = que.front().first; int y = que.front().second;
			que.pop();
			REP(k, 4)
			{
				int nx = x + di[k]; int ny = y + dj[k];
				if (nx >= 0 && nx < h&&ny >= 0 && ny < w&&fld[nx][ny] == '.')
				{
					que.push(P(nx, ny));
					cnt++;
					fld[nx][ny] = '@';
				}
			}
		}
		cout << cnt << endl;
	}
	return 0;
}
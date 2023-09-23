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

int n, m;
bool fld[25][25];

int main()
{
	while (1)
	{
		memset(fld, false, sizeof(fld));
		cin >> n;
		if (n == 0) break;
		int x, y;
		REP(i, n)
		{
			cin >> x >> y;
			fld[x][y] = true;
		}
		cin >> m;
		char c; int d;
		x = 10; y = 10;
		int cnt = 0;
		REP(i, m)
		{
			cin >> c >> d;
			if (c == 'N')
			{
				REP(j, d)
				{
					y++;
					if (fld[x][y] == true)
					{
						fld[x][y] = false;
						cnt++;
					}
				}
			}
			if (c == 'S')
			{
				REP(j, d)
				{
					y--;
					if (fld[x][y] == true)
					{
						fld[x][y] = false;
						cnt++;
					}
				}
			}
			if (c == 'E')
			{
				REP(j, d)
				{
					x++;
					if (fld[x][y] == true)
					{
						fld[x][y] = false;
						cnt++;
					}
				}
			}
			if (c == 'W')
			{
				REP(j, d)
				{
					x--;
					if (fld[x][y] == true)
					{
						fld[x][y] = false;
						cnt++;
					}
				}
			}
		}
		if (n - cnt) cout << "No" << endl;
		else cout << "Yes" << endl;

	}
	return 0;
}
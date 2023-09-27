#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i>=b;i--)

int main()
{
	cin.tie(0);
	ios::sync_with_stdio(false);

	int H;
	int T[10][5];
	while (cin >> H)
	{
		if (H == 0) return 0;

		rep(y, 0, H) rep(x, 0, 5) cin >> T[y][x];

		int ans = 0;
		bool f = true;
		while (f)
		{
			f = false;

			rep(y, 0, H)
			{
				rep(k, 0, 3)
				{
					if (T[y][k] < 0) continue;
					int c = T[y][k];
					int kk = k + 1;
					while (T[y][kk] == c)
					{
						kk++;
						if (kk == 5) break;
					}
					int len = kk - k;
					if (3 <= len)
					{
						ans += len * c;
						//cout << " " << ans << endl;
						rep(ii, k, kk) T[y][ii] = -1;
						f = true;
					}
				}
			}

			rep(x, 0, 5)
			{
				vector<int> t;
				rrep(y, H-1, 0) if (0 <= T[y][x]) t.push_back(T[y][x]);
				rep(y, 0, H) T[y][x] = -1;
				rep(i, 0, t.size()) T[H - 1 - i][x] = t[i];
			}
		}

		cout << ans << endl;
	}
}
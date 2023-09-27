#include <cstdio>
#include <algorithm>

using namespace std;

#define rep(i,x) for(int i=0;i<(x);++i)

int mp[10][10000];
bool f[10];

signed main()
{
	int R, C;
	while (scanf("%d%d", &R, &C), R || C) {
		rep(i, R) rep(j, C) {
			scanf("\n%d", &mp[i][j]);
		}

		int ma = 0;

		rep(i, 1 << R) {
			fill_n(f, R, 0);
			rep(j, R) {
				if (i >> j & 1) f[j] = 1;
			}

			int sum = 0;

			rep(k, C) {
				int cnt = 0;
				rep(l, R) {
					if (mp[l][k] == f[l]) cnt++;
				}

				sum += max(cnt, R - cnt);
			}

			ma = max(ma, sum);
		}

		printf("%d\n", ma);
	}
}
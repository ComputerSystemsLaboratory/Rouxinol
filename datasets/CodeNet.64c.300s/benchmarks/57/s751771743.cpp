#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n) FOR(i,0,n)

int main() {
	while (true) {
		bool osenbei[10][10000];
		int cnt[10000] = {};
		int r, c;
		cin >> r >> c;
		if (r == 0 && c == 0) break;

		REP(i, r) {
			REP(j, c) {
				int in;
				scanf("%d", &in);
				osenbei[i][j] = in == 1 ? true : false;
				if (!osenbei[i][j]) cnt[j]++;
			}
		}

		int ncnt[10000], ans = 0, now;
		REP(i, 1 << r) {
			REP(j, c) ncnt[j] = cnt[j];

			REP(j, r) if (i & (1 << j)) {
				REP(k, c) {
					if (!osenbei[j][k]) ncnt[k]--;
					else ncnt[k]++;
				}
			}

			now = 0;
			REP(j, c) {
				if (ncnt[j] > r - ncnt[j]) now += ncnt[j];
				else now += r - ncnt[j];
			}
			ans = max(ans, now);
		}

		cout << ans << endl;
	}

	return 0;
}
#include<iostream>
#include<algorithm>
using namespace std;
#define FOR(i, a, n) for(int i=a; i<n; i++)
#define RFOR(i, a, n) for(int i=n-1; i>=a; i--)
#define REP(i, n) FOR(i, 0, n)
#define RREP(i, n) RFOR(i, 0, n)
#define INF -100000

int main()
{
	int H;
	while (cin >> H, H) {
		int table[11][5];
		RFOR(i, H, 11) REP(j, 5) table[i][j] = -1;
		RFOR(i, 0, H) REP(j, 5) cin >> table[i][j];

		int ans = 0;
		bool changed = true;
		while (changed) {
			changed = false;

			REP(i, H) {
				int prev = 0;
				int chain = 1, ch = 1;
				int num = 0, jj = -1;
				REP(j, 5) {
					if (table[i][j] == -1 || table[i][j]==INF) {
						prev = 0;
						chain = 1;
						continue;
					}

					if (prev == table[i][j]) {
						chain++;
						if (chain >= 3) {
							num = table[i][j];
							jj = j;
							ch = chain;
						}
					}
					else chain = 1;

					prev = table[i][j];
				}

				chain = max(chain, ch);
				if (chain >= 3) {
					changed = true;

					ans += (num * chain);
					REP(cnt, chain) table[i][jj - cnt] = INF;
				}

			}

			REP(i, H) {
				REP(j, 5) {
					if (table[i][j] == -1) continue;
					else if (table[i][j] == INF) {
						int cnt = 1;
						while (i+cnt<11 && table[i + cnt][j] == INF) {
							cnt++;
						}
						if (i + cnt > 10) continue;
						table[i][j] = table[i + cnt][j];
						table[i + cnt][j] = INF;
					}
				}
			}
		}

		cout << ans << endl;
	}
	return 0;
}
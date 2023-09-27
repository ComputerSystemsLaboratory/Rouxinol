#include <bits/stdc++.h>

#define FOR(i, a, b) for(long long int i=(a);i<=(b);i++)
#define RFOR(i, a, b) for(long long int i=(a);i>=(b);i--)
#define MOD 1000000007
#define INF 1000000000 //2000000000
#define LLINF 1000000000000000000 //9000000000000000000
#define PI 3.14159265358979

using namespace std;
typedef long long int ll;
typedef pair< long long int, long long  int> P;



int main(void) {
	
	while (1) {
		int N;
		int sx, lx, sy, ly;
		int n, d;
		int dp[450][450] = {};
		bool flag = true;

		cin >> N;
		if (N == 0) {
			break;
		}
		FOR(i, 0, 449) {
			FOR(t, 0, 449) {
				dp[i][t] = -1;
			}
		}

		dp[225][225] = 0;
		FOR(i, 1, N-1) {
			cin >> n >> d;
			FOR(t, 0, 449) {
				FOR(u, 0, 449) {
					if (dp[t][u] == n) {
						switch (d) {
						case 0:
							dp[t - 1][u] = i;
							break;
						case 1:
							dp[t][u + 1] = i;
							break;
						case 2:
							dp[t + 1][u] = i;
							break;
						case 3:
							dp[t][u - 1] = i;
							break;
						}
						goto end;
					}
				}
			}
		end:;
		}
		FOR(i, 0, 449) {
			FOR (t, 0, 449) {
				if (dp[i][t] != -1) {
					sx = i;
					flag = false;
					break;
				}
			}
			if (!flag) {
				break;
			}
		}
		flag = true;
		FOR(t, 0, 449) {
			FOR(i, 0, 449) {
				if (dp[i][t] != -1) {
					sy = t;
					flag = false;
					break;
				}
			}
			if (!flag) {
				break;
			}
		}
		flag = true;
		RFOR(t, 449, 0) {
			RFOR(i, 449, 0) {
				if (dp[i][t] != -1) {
					ly = t;
					flag = false;
					break;
				}
			}
			if (!flag) {
				break;
			}
		}
		flag = true;
		RFOR(i, 449, 0) {
			RFOR(t, 449, 0) {
				if (dp[i][t] != -1) {
					lx = i;
					flag = false;
					break;
				}
			}
			if (!flag) {
				break;
			}
		}
		//cout << sx << " " << lx << " " << sy << " " << ly << endl;
		cout << lx - sx + 1 << " " << ly - sy + 1 << endl;
	}

}

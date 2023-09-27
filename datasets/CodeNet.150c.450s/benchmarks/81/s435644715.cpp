#include <iostream>
#include <math.h>
#include <climits>
#include <string>
#include <utility>
#include <algorithm>
#include <vector>
#include <queue>

using namespace std;

const int INF = 1000000;

#define REP(i, n) for (int i = 0; i < (n); i++)
#define RREP(i, n) for (int i = (n) - 1; i >= 0; i--)
#define FOR(i, a, b) for (int i = (a); i < (b); i++)

typedef long long ll;
typedef pair<int, int> P;

const int N = 10;

int dx[] = { 0, 1, 0, -1 };
int dy[] = { 1, 0, -1, 0 };

int dx8[] = { -1, -1, -1, 0, 0, 1, 1, 1 };
int dy8[] = { -1, 0, 1, -1, 1, -1, 0, 1 };

int main()
{
	int n;
	while (true) {
		cin >> n;
		if (!n) break;
		int dp[N][N];
		REP(i,N){
			REP(j, N) {
				dp[i][j] = INF;
			}
		}
		int a, b, c;
		while (n--) {
			cin >> a >> b >> c;
			dp[a][b] = c;
			dp[b][a] = c;
		}
		REP(k, N) {
			REP(i, N) {
				REP(j, N) {
					if (dp[i][j] > dp[i][k] + dp[k][j])
						dp[i][j] = dp[i][k] + dp[k][j];
				}
			}
		}
		int time[N];
		REP(i, N) {
			time[i] = 0;
			REP(j, N) {
				if (i != j && dp[i][j] != INF) {
					time[i] += dp[i][j];
				}
			}
		}
		int mini = 0;
		REP(i, N) {
			if (time[i] < time[mini] && time[i] != 0)
				mini = i;
		}
		cout << mini << " " << time[mini] << endl;
	}
	

    return 0;
}
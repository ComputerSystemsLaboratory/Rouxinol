#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include <algorithm>
#include <stdint.h>
#include <queue>
#include <bitset>
#include <iomanip>
#include <set>
#include <map>

using namespace std;

#define PI (3.14159265358979323846)
#define INF (2147483647)
#define INF_LL (9223372036854775807)
#define DIV_NUM (1000000007)

// ワーシャルフロイド法　O(V^3)
// 全点対最短路問題を解くdp
#define MAX_V (100)
int dp[MAX_V][MAX_V];

int main() {

	int V, E; // V:頂点数、E:辺数
	cin >> V >> E;

	for (int i = 0; i < V; i++) {
		for (int j = 0; j < V; j++) {
			if (i != j) dp[i][j] = INF;
		}
	}

	for (int i = 0; i < E; i++) {
		int s, t, cost;
		cin >> s >> t >> cost;
		dp[s][t] = cost; // 有向グラフ
	}

	for (int k = 0; k < V; k++) {
		for (int i = 0; i < V; i++) {
			for (int j = 0; j < V; j++) {
				// i,jの最短距離は、　min( i,jを直接行く, kを経由していく)
				if (dp[i][k] < INF && dp[k][j] < INF) {
					dp[i][j] = min(dp[i][j], dp[i][k] + dp[k][j]);
				}
			}
		}
	}

	// dp[i][i]が負の値となる場合、ネガティブサイクルが存在する
	for (int i = 0; i < V; i++) {
		if (dp[i][i] < 0) {
			cout << "NEGATIVE CYCLE" << endl;
			return 0;
		}
	}

	for (int i = 0; i < V; i++) {
		for (int j = 0; j < V; j++) {
			if (dp[i][j] < INF) cout << dp[i][j];
			else cout << "INF";
			if (j != V - 1) cout << " ";
		}
		cout << endl;
	}

	return 0;

}


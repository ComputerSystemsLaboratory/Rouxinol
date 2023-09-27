#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>
using namespace std;

typedef long long ll;
typedef pair<int, int> P;
const ll INF = (ll)1e17;

int n, m;
int c[20], dp[50001]; //dp[i]:i円を払うのに必要な最小の枚数

int main(void) {
	cin >> n >> m;
	for (int i = 0; i < m; i++) cin >> c[i];
	fill(dp, dp + 50001, n); //1円でn枚払うとする
	dp[n] = 0;
	for (int i = n; i > 0; i--) {  //n円から
		for (int j = 0; j < m; j++) {
			if (i >= c[j]) { //払えるなら
				dp[i - c[j]] = min(dp[i] + 1, dp[i - c[j]]); //i円をc[j]で払う
			}
		}
	}
	cout << dp[0] << endl; //ピッタリ払える
	return 0;
}

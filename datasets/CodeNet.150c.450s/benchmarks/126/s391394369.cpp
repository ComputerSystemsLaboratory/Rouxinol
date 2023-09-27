#include <iostream>
#include <string>
#include <algorithm>
#include <iomanip>
#include <vector>
#include <map>
#include <cmath>
#include <queue>
#include <utility>
#include <functional>
#include <deque>
#include <cctype>
#include <stack>
#include <bitset>
#include <set>

using ll = long long;
using namespace std;
typedef unsigned long long ull;
typedef pair<ll, ll> P;

const ll MOD = 1000000007;
const ll INF = 1 << 30;
const ll INF2 = 9000000000000000000LL;
const double INF3 = 900000000000000;
const int dx[4] = { 1,0,-1,0 }, dy[4] = { 0,1,0,-1 };
const int tx[8] = { -1,0,1,-1,1,-1,0,1 }, ty[8] = { -1,-1,-1,0,0,1,1,1 };
#define ALL(x) (x).begin(),(x).end()



int main() {
	while (true) {
		int a, b;
		cin >> a >> b;
		if (a == 0 && b == 0)return 0;
		int n, dp[1000][1000] = {0};
		cin >> n;
		for (int i = 1;i <= a;i++)dp[i][1] = 1;
		for (int i = 1;i <= b;i++)dp[1][i] = 1;
		for (int i = 0;i < n;i++) {
			int x, y;
			cin >> x >> y;
			dp[x][y] = -1;
			if (x == 1) {
				for (int j = y;j <= b;j++)dp[1][j] = -1;
			}
			if (y == 1) {
				for (int j = x;j <= a;j++)dp[j][1] = -1;
			}
		}
		for (int i = 2;i <= a;i++) {
			for (int j = 2;j <= b;j++) {
				if (dp[i][j] == -1)continue;
				else if (dp[i - 1][j] == -1 && dp[i][j - 1] == -1)dp[i][j] = -1;
				else if (dp[i - 1][j] == -1)dp[i][j] = dp[i][j - 1];
				else if (dp[i][j - 1] == -1)dp[i][j] = dp[i - 1][j];
				else dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
			}
		}
		cout << dp[a][b] << endl;
	}
}

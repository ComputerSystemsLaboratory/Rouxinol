#include <iostream>
#include <algorithm>
#include <vector>
#include <iomanip>
using namespace std;

typedef long long ll;
typedef pair<int, int> P;
const int INF = (int)1e9 + 1;

int a, b, n;
int dp[20][20];
bool kouji[20][20];

int main(void) {
	while (1) {
		for (int i = 0; i < 20; i++) {
			for (int j = 0; j < 20; j++) {
				dp[i][j] = 0;
				kouji[i][j] = false;
			}
		}

		cin >> a >> b;
		if (a == 0 && b == 0) return 0;
		cin >> n;

		for (int i = 0; i < n; i++) {
			int x, y;
			cin >> x >> y;
			x--; y--;
			kouji[x][y] = true;
		}

		dp[0][0] = 1;
		for (int i = 0; i < a; i++) {
			for (int j = 0; j < b; j++) {
				if (kouji[i][j]) continue;

				if (0 <= i - 1 && i - 1 < a) {
					dp[i][j] += dp[i - 1][j];
				}

				if (0 <= j - 1 && j - 1 < b) {
					dp[i][j] += dp[i][j - 1];
				}
			}
		}

		cout << dp[a - 1][b - 1] << endl;
	}
}

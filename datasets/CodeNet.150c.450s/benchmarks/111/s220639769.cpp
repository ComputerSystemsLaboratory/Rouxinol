# include <iostream>
# include <algorithm>
# include <vector>
# include <string>
# include <set>
# include <map>
# include <cmath>
# include <iomanip>
# include <functional>
# include <utility>
# include <stack>
# include <queue>
# include <list>
constexpr int MOD = 1000000000 + 7;
constexpr int INF = 2000000000;
using namespace std;

int n;
long long dp[100][21] = {0};
int numbers[100];

int main() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> numbers[i];
	}
	dp[0][numbers[0]] = 1;
	for (int i = 1; i < n - 1; i++) {
		for (int j = 0; j <= 20; j++) {
			if (j + numbers[i] <= 20)dp[i][j] += dp[i - 1][j + numbers[i]];
			if (j - numbers[i] >= 0 )dp[i][j] += dp[i - 1][j - numbers[i]];
		}
	}
	cout << dp[n - 2][numbers[n - 1]] << endl;
}
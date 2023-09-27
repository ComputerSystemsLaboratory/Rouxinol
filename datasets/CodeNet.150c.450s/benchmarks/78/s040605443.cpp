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
# include <bitset>
# include <complex>
# include <numeric>
using namespace std;
using LL = long long;
using ULL = unsigned long long;
constexpr long long MOD = 10007;
constexpr int INF = 2000000000;
constexpr int HINF = INF / 2;
constexpr double DINF = 100000000000000000.0;
constexpr long long LINF = 9223372036854775807;
constexpr long long HLINF = 4500000000000000000;
const double PI = acos(-1);

int dp[1001000],dp2[1001000];
vector<int> pollock, pollock2;
int main() {
	for (int i = 1;; i++) {
		LL num = i*(i + 1)*(i + 2)/6;

		if (num > 1000000)break;

		if (num % 2 == 1)pollock2.emplace_back(num);
		pollock.emplace_back(num);
	}
	//cout << 1 << endl;
	for (int i = 0; i < 1000000; i++) {
		dp[i] = dp2[i] = i;
	}
	//cout << 2 << endl;
	for (int i = 1; i < pollock.size(); i++) {
		for (int j = pollock[i]; j <= 1000000; j++) {
			dp[j] = min(dp[j], dp[j - pollock[i]] + 1);
		}
	}
	//cout << 3 << endl;
	for (int i = 1; i < pollock2.size(); i++) {
		for (int j = pollock2[i]; j <= 1000000; j++) {
			dp2[j] = min(dp2[j], dp2[j - pollock2[i]] + 1);
		}
	}
	//cout << 4 << endl;
	int n;
	while (cin >> n&&n) {
		cout << dp[n] << " " << dp2[n] << endl;
	}
}
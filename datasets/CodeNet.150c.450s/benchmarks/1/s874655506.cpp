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
constexpr long long MOD = 1000000000 + 7;
constexpr int INF = 2000000000;
constexpr int HINF = INF / 2;
constexpr double DINF = 100000000000000000.0;
constexpr long long LINF = 9000000000000000000;
const double PI = acos(-1);

int a[100100];
int dp[100100];
int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	fill(dp, dp + n, INF);
	for (int i = 0; i < n; i++) {
		*lower_bound(dp, dp + n, a[i]) = a[i];
	}
	cout << lower_bound(dp, dp + n, INF) - dp << endl;
}
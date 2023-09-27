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

int dp[1010][1010];
int main() {
	string s, ss;
	cin >> s >> ss;
	s = " " + s;
	ss = " " + ss;
	for (int i = 0; i <= s.size(); i++)dp[i][0] = i;
	for (int i = 0; i <= ss.size(); i++)dp[0][i] = i;
	for (int i = 1; i < s.size(); i++) {
		for (int j = 1; j < ss.size(); j++) {
			if (s[i] == ss[j]) {
				dp[i][j] = dp[i - 1][j - 1];
			}
			else {
				dp[i][j] = (min({ dp[i - 1][j],dp[i][j - 1],dp[i - 1][j - 1] })+1);
			}
		}
	}
	cout << dp[s.size() - 1][ss.size() - 1] << endl;
}
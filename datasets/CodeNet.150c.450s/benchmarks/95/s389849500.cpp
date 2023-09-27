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
using namespace std;
using LL = long long;
constexpr long long MOD = 1000000000 + 7;
constexpr long long INF = 1000000000;
const double PI = acos(-1);

int main() {
	int n;
	string s[1000];
	while (cin >> n&&n) {
		int ans = 0;
		string s,ss;
		for (int i = 0; i < n; i++) {
			cin >> s;
			if (s == "lu"&&ss == "ru")ans++;
			if (s == "ru"&&ss == "lu")ans++;
			if (s == "ld"&&ss == "rd")ans++;
			if (s == "rd"&&ss == "ld")ans++;
			ss = s;
		}
		cout << ans << endl;
	}
}
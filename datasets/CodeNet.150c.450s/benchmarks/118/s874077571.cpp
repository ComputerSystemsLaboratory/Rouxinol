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
constexpr int MOD = 1000000000 + 7;
//?¶????????????????????????????????????§??????????????????????¢????????????????
constexpr int INF = 2000000000;
const double PI = acos(-1);

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int y, m, d;
		cin >> y >> m >> d;
		int ans = 196471;
		int count = 0;
		for (int j = 1; j < y;j++) {
			if (j % 3 == 0)count += 200;
			else count += 195;
		}
		for (int j = 1; j < m; j++) {
			if (y % 3 == 0)count += 20;
			else {
				if (j % 2 == 0)count += 19;
				else count += 20;
			}
		}
		count += d;
		cout << ans - count << endl;
	}
}
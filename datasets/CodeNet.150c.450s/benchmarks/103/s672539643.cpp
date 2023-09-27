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
constexpr int MOD = 1000000007;
constexpr int INF = 2000000000;
using namespace std;

int n, s;
int ans = 0;

void dfs(int pos, int sum,int count) {
	if (count == n&&sum == s) {
		ans++;
		return;
	}
	if (pos == 10 || count == n) {
		return;
	}

	dfs(pos + 1, sum + pos,count+1);
	dfs(pos + 1, sum,count);
}

int main() {
	while (cin >> n >> s&&(n != 0 || s != 0)) {
		ans = 0;
		dfs(0, 0, 0);
		cout << ans << endl;
	}
}
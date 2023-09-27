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
# include <ctime>
constexpr int MOD = 1000000007;
constexpr int INF = 2000000000;
using namespace std;

int ans[101][101] = {0};
int main() {
	int n;
	cin >> n;
	int a;
	int b;
	int c;
	for (int i = 1; i <= n; i++) {
		cin >> a >> b;
		for (int j = 0; j < b; j++) {
			cin >> c;
			ans[i][c] = 1;
		}
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			cout << ans[i][j];
			if (j != n)cout << " ";
			else cout << endl;
		}
	}
}
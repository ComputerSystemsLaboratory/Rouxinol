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

int main() {
	int n, m;
	cin >> n >> m;
	int C[21];
	int T[50001];
	for (int i = 0; i < m; i++) {
		cin >> C[i];
	}
	for (int i = 0; i <= 50000; i++)T[i] = INF;
	T[0] = 0;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j + C[i] <= n; j++) {
			T[j + C[i]] = min(T[j + C[i]], T[j] + 1);
		}
	}
	cout << T[n] << endl;
}
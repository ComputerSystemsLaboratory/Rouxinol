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
	int n, m;
	while (cin >> n >> m&&n&&m) {
		int sumt = 0, sumh = 0;
		vector<int> t, h;
		int a;
		for (int i = 0; i < n; i++) {
			cin >> a;
			t.emplace_back(a);
			sumt += a;
		}
		for (int i = 0; i < m; i++) {
			cin >> a;
			h.emplace_back(a);
			sumh += a;
		}
		int anst = 1000, ansh = 1000;
		for (int i = 0; i < t.size(); i++) {
			for (int j = 0; j < h.size(); j++) {
				if (sumt - t[i] + h[j] == sumh - h[j] + t[i]) {
					if (anst + ansh > t[i] + h[j])anst = t[i], ansh = h[j];
				}
			}
		}
		if (anst == 1000)cout << -1 << endl;
		else cout << anst << " " << ansh << endl;
	}
}
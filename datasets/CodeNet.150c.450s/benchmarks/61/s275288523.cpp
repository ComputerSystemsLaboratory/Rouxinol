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
	int n, a, b, c, x;
	int y[101];
	while (cin >> n >> a >> b >> c >> x&&n) {
		for (int i = 0; i < n; i++) {
			cin >> y[i];
		}
		int cont = 0, icont = 0;
		if (x == y[0])icont++;
		while (cont <= 10000 && icont<n) {
			x = (a*x + b) % c;
			if (x == y[icont]) {
				icont++;
			}
			cont++;
		}
		if (cont > 10000) {
			cout << -1 << endl;
		}
		else cout << cont << endl;
	}
}
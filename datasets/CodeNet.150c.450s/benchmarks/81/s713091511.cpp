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
using namespace std;
using LL = long long;
using ULL = unsigned long long;
constexpr long long MOD = 1000000000 + 7;
constexpr long long INF = 1000000000;
const double PI = acos(-1);
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)

const int MAX_V = 10;
LL d[MAX_V][MAX_V];//d[i][j]???e={u,v}????????????(?????¨???????????¨??????INF,i==j?????¨??????0)
int v;



int main() {
	while (cin >> v&&v) {
		REP(i, MAX_V)REP(j, MAX_V) {
			if (i == j)d[i][j] = 0;
			else d[i][j] = INF;
		}
		int a, b, c;
		REP(i,v) {
			cin >> a >> b >> c;
			d[a][b] = c;
			d[b][a] = c;
		}
		/*REP(i, MAX_V) {
			REP(j, MAX_V) {
				cout << d[i][j] << " ";
			}
			cout << endl;
		}*/
		for (int k = 0; k<10; ++k) {
			for (int i = 0; i<10; ++i) {
				for (int j = 0; j<10; ++j) {
					d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
				}
			}
		}
		LL ans = INF;
		int ans2;
		REP(i, MAX_V) {
			LL num = 0;
			REP(j, MAX_V) {
				if (d[i][j] == INF)continue;
				num += d[i][j];
			}
			if (num != 0 && ans > num) {
				ans = num;
				ans2 = i;
			}
		}
		cout << ans2 << " " << ans << endl;
	}
}
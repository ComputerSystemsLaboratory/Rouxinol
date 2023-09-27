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
	while (cin >> n&&n) {
		bool treasure[21][21] = {};
		int x, y;
		for (int i = 0; i < n; i++) {
			cin >> x >> y;
			treasure[y][x] = true;
		}
		int m;
		cin >> m;
		char c;
		int a;
		int ans = 0;
		int posx = 10, posy = 10;
		for (int i = 0; i < m; i++) {
			cin >> c >> a;
			if (c == 'S') {
				for (int count = 1; count <= a; count++) {
					if (treasure[posy - count][posx])ans++, treasure[posy - count][posx] = false;
				}
				posy = posy - a;
			}
			if (c == 'N') {
				for (int count = 1; count <= a; count++) {
					if (treasure[posy + count][posx])ans++, treasure[posy + count][posx] = false;
				}
				posy = posy + a;
			}
			if (c == 'E') {
				for (int count = 1; count <= a; count++) {
					if (treasure[posy][posx + count])ans++, treasure[posy][posx + count] = false;
				}
				posx = posx + a;
			}
			if (c == 'W') {
				for (int count = 1; count <= a; count++) {
					if (treasure[posy][posx - count])ans++, treasure[posy][posx - count] = false;
				}
				posx = posx - a;
			}
		}
		cout << (ans == n ? "Yes" : "No") << endl;
	}
}
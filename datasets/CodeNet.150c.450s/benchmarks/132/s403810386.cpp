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
constexpr int INF = 2000000000;
const double PI = acos(-1);

int main() {
	int n, p;
	while (cin >> n >> p&&n&&p) {
		int wan = p;
		int maxl = 0;
		int count[50] = {};
		while (maxl != p) {
			for (int i = 0; i < n; i++) {
				maxl = 0;
				if (wan != 0) {
					wan--;
					count[i]++;
				}
				else{
					wan = count[i];
					count[i] = 0;
				}
				for (int j = 0; j < n; j++) {
					maxl = max(maxl,count[j]);
				}
				if (maxl == p)break;
			}
		}
		for (int i = 0; i < n; i++) {
			if (count[i] == p)cout << i << endl;
		}
	}
	
}
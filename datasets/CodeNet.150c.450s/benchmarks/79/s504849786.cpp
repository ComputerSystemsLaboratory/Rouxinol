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
	int n, r, p, c;
	while (cin >> n >> r&&n&&r) {
		vector<int> vec;
		for (int i = n; i >= 1; i--) {
			vec.emplace_back(i);
		}
		for (int i = 0; i < r; i++) {
			cin >> p >> c;
			for (int j = 0; j < c; j++) {
				vec.insert(vec.begin(),vec[p + c - 2]);
				vec.erase(vec.begin() + p + c - 1);
			}
		}
		cout << vec[0] << endl;
	}
}
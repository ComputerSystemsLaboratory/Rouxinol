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
	int e;
	while (cin >> e&&e) {
		int minl = INF;
		for (int i = 0; i*i*i <= e; i++) {
			for (int j = 0; j*j <= e - i*i*i; j++) {
				minl = min(minl, i + j + e - i*i*i - j*j);
			}
		}
		cout << minl << endl;
	}
}
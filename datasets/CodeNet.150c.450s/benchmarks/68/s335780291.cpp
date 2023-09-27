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
	int n;
	while (cin >> n&& n) {
		vector<int> v;
		
		int a;
		for (int i = 0; i < n; i++) {
			cin >> a;
			v.emplace_back(a);
		}

		sort(v.begin(), v.end());

		int minl = INF;
		for (int i = 0; i < n-1; i++) {
			if (v[i + 1] - v[i] < minl){
				minl = v[i + 1] - v[i];
			}
		}
		cout << minl << endl;
	}
}
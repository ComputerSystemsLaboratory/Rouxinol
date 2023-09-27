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
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int a = -1, b = -1;
		int num;
		bool ans = true;
		for (int j = 0; j < 10; j++) {
			if (a > b)swap(a, b);
			cin >> num;
			if (num > b)b = num;
			else if (num > a)a = num;
			else ans = false;
		}
		cout << (ans ? "YES" : "NO") << endl;
	}
}
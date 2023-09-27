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

bool dprime[1000000] = { false };
void dPrime() {
	dprime[1] = true;
	for (int i = 2; i*i<1000000; i++) {
		if (!dprime[i]) {
			for (int j = 2 * i; j<1000000; j += i) {
				dprime[j] = true;
			}
		}
	}

	return;
}

int main() {
	dPrime();
	int n, a, d;
	while (cin >> a >> d >> n&&a&&d&&n) {
		int count = 0;
		for (int i = a;; i += d) {
			if (!dprime[i]) count++;
			if (count == n) {
				cout << i << endl;
				break;
			}
		}
	}
	return 0;
}
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
	int N, M, K;
	while (cin >> N >> M >> K&&N) {
		int ans = 0;
		for (int i = 1; i < K; i++) {
			for (int j = 1; j < K; j++) {
				if (i*(100 + N) / 100 + j*(100 + N) / 100 > K)break;
				if (i*(100 + N) / 100 + j*(100 + N) / 100 == K) {
					ans = max(ans, i*(100 + M) / 100 + j*(100 + M) / 100);
				}
			}
		}
		cout << ans << endl;
	}
}
#include <iostream>
#include <algorithm>

using namespace std;

#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n) FOR(i,0,n)

int main() {
	while (1) {
		int a[100000] = {0};
		int n, k, sum = 0, ans;

		cin >> n >> k;
		if (n == 0 && k == 0) break;

		REP(i, n) {
			cin >> a[i];
			sum += a[i];
			if (i >= k) sum -= a[i-k];
			else ans = sum;
			ans = max(ans, sum);
		}

		cout << ans << endl;
	}
	return 0;
}
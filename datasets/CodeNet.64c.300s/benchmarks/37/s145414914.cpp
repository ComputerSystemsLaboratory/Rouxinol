#include "bits/stdc++.h"
using namespace std;
int main() {
	cin.tie(0); ios::sync_with_stdio(false);
	int N;
	while (cin >> N, N) {
		int l = 1, r = 1;
		int sum = 1;
		int ans = 0;
		while (true) {
			//cout << l << " " << r << " " << sum << endl;
			if (sum < N) {
				r++; if (r > N)break;
				sum += r;
				continue;
			}
			if (sum == N) {
				if (r - l > 0) ans++;
				r++;  if (r > N) break;
				sum += r;
			}
			if (sum > N) {
				sum -= l; l++;
			}
		}
		cout << ans << endl;
	}
}
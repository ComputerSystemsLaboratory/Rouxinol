#include "bits/stdc++.h"
using namespace std;
typedef long long LL;
const LL MOD = 1000000007LL;
typedef pair<LL, int> P;
vector<P> prime_factorize(LL n) {
	vector<P> ret;
	for (LL i = 2; i*i <= n; i++) {
		int cnt = 0;
		while (n%i == 0) {
			n /= i;
			cnt++;
		}
		ret.emplace_back(i, cnt);
	}
	if (n > 1) ret.emplace_back(n, 1);
	return ret;
}
int main() {
	int n;
	cin >> n;
	vector<P> v = prime_factorize(n);
	cout << n << ":";
	for (P p : v) {
		for (int i = 0; i < p.second; i++) cout << " " << p.first;
	}
	cout << endl;
}

#include "bits/stdc++.h"
using namespace std;
typedef long long LL;
const LL MOD = 1000000007LL;
LL mod_pow(LL a, LL n) {
	if (n == 0) return 1;
	if (n % 2 == 0) {
		LL b = mod_pow(a, n / 2);
		return (b*b) % MOD;
	}
	return (a*mod_pow(a, n - 1)) % MOD;
}
int main() {
	LL m, n;
	cin >> m >> n;
	cout << mod_pow(m, n) << endl;
}

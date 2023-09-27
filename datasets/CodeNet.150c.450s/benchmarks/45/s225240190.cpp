#include <bits/stdc++.h>
using namespace std;

using Int = long long;
//(x^k) mod m
Int powMod(Int x, Int k, Int m) {
	if (k == 0)     return 1;
	if (k % 2 == 0) return powMod(x*x % m, k / 2, m);
	else            return x*powMod(x, k - 1, m) % m;

}
int main(void) {
	long long M, N;
	cin >> M >> N;
	cout << powMod(M, N, 1'000'000'007) << endl;
	return 0;
}

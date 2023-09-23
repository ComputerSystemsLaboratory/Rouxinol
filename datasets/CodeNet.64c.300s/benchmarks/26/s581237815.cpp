#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
#define int long long
#define MOD 1000000007
int modpow(int a, int b) {
	if (b == 0)return 1;
	if (b == 1)return a;
	if (b % 2)return modpow(a, b - 1) * a % MOD;
	return modpow(a, b / 2) * modpow(a, b / 2) % MOD;
}
signed main() {
	int a, b;
	cin >> a >> b;
	cout << modpow(a, b) << endl;
	return 0;
}

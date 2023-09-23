#include<bits/stdc++.h>
#define rep(i,n)for(int i=0;i<n;i++)
#define MOD 1000000007
using namespace std;
typedef long long ll;

ll ppow(ll n, ll a) {
	ll res = 1;
	while (a) {
		if (a & 1)res = (res*n) % MOD;
		n = (n*n) % MOD;
		a >>= 1;
	}
	return res;
}
int main() {
	int m, n; cin >> m >> n;
	cout << ppow(m, n) << endl;
}
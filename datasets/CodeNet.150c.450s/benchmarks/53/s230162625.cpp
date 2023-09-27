#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i<(n); i++)
#define FOR(i,a,n) for(int i=(a); i<(n); i++)
#define all(v) v.begin(), v.end()
#define fi first
#define se second
using namespace std;
using ll = long long;
using P = pair<int ,int>;
const int INF = 1e9;
const int MOD = 1e9+7;

map<int, int> prime_factors(int n) {
	map<int, int> res;
	if(n == 1) { // n=1 の素因数分解は n^1
		res[n] = 1;
		return res;
	}
	for(int i = 2, _n = n; i*i <= _n; ++i) {
		while(n % i == 0) {
			++res[i]; // 素数i^{res[i]}
			n /= i;
			}
		}
	if(n != 1) res[n] = 1;
	return res;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n; cin >> n;
	map<int, int> pfs = prime_factors(n);
    cout << n << ":";
	for(const auto& p: pfs) {
        rep(i, p.second) {
            cout << " " << p.first;
        }
    }
    cout << endl;
}

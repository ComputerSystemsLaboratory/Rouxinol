#include <bits/stdc++.h>
using namespace std;
struct cww{cww(){ios::sync_with_stdio(false);cin.tie(0);}}star;
#define P(x) cout << (x) << "\n"
#define p(x) cout << (x)
#define all(c) (c).begin(), (c).end()
#define rall(c) (c).rbegin(), (c).rend()
#define vv(type, c, m, n, i) vector<vector<type>> c(m, vector<type>(n, i));
#define rep(i,a,n) for(int i=(a), i##_len=(n); i<i##_len; ++i)
#define rrep(i,a,n) for(int i=(a), i##_len=(n); i>i##_len; --i)
#define len(x) ((int)(x).size())
#define mp make_pair
#define eb emplace_back
#define fi first
#define se second
#define chmax(a,b) if(a<b)a=b;
#define chmin(a,b) if(b<a)a=b;
typedef long long ll;
typedef long double ld;
typedef vector<int> vi;
typedef vector<double> vd;
typedef vector<long long> vll;
typedef vector<string> vs;
typedef vector<bool> vb;
typedef pair<int, int> pii;
constexpr int mod = 1000000007;
ll power(ll x, ll n, ll M) {
	ll res = 1;
	if(n > 0) {
		res = power(x, n / 2, M);
		if(n % 2 == 0) res = (res * res) % M;
		else res = (((res * res) % M) * x) % M;
	}
	return res;
}
int main() {
	int m, n; cin >> m >> n;
	P(power(m, n, mod));
	return 0;
}
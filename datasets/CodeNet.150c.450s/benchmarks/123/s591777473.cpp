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
int isPrime(int x) {
	if(x == 2) return 1;
	else if(x < 2 || x % 2 == 0) return 0;
	for(int i = 3; i * i <= x; i += 2) {
		if(x % i == 0) return 0;
	}
	return 1;
}
int main() {
	int n; cin >> n;
	int x, cnt = 0;
	rep(i, 0, n) {
		cin >> x;
		if(isPrime(x)) ++cnt;
	}
	P(cnt);
	return 0;
}
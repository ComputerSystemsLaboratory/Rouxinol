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
template<class T> void chmax(T &a, const T &b){if(a<b) a=b;}
template<class T> void chmin(T &a, const T &b){if(b<a) a=b;}
typedef long long ll;
typedef long double ld;
typedef vector<int> vi;
typedef vector<double> vd;
typedef vector<long long> vll;
typedef vector<string> vs;
typedef vector<bool> vb;
int main() {
	int n; cin >> n;
    vi dp(n + 1, INT_MAX);
    int a, length = 1;
    rep(i, 0, n) {
        cin >> a;
        if(dp[length - 1] < a) dp[length++] = a;
        else *lower_bound(dp.begin(), dp.begin() + length, a) = a;
    }
    P(length);
	return 0;
}
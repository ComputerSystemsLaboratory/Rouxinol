#include <bits/stdc++.h>
using namespace std;
struct cww{cww(){ios::sync_with_stdio(false);cin.tie(0);}}star;
#define P(x) cout << (x) << endl
#define p(x) cout << (x)
#define all(c) (c).begin(), (c).end()
#define rall(c) (c).rbegin(), (c).rend()
#define vv(type, c, m, n, i) vector<vector<type>> c(m, vector<type>(n, i));
#define rep(i,a,n) for(int i=(a), i##_len=(n); i<i##_len; ++i)
#define rrep(i,a,n) for(int i=(a); i>n; --i)
#define len(x) ((int)(x).size())
#define mp make_pair
#define eb emplace_back
typedef long long ll;
typedef vector<int> vi;
typedef vector<double> vd;
typedef vector<long long> vll;
typedef vector<string> vs;
typedef vector<bool> vb;
inline bool isprime(int x) {
	if (x == 2 || x == 3) return true;
	if (x < 2 || x % 2 == 0 || x % 3 == 0) return false;
	int s = sqrt(x) + 1;
    for(int i = 5; i <= s; i += 2)
    	if(x % i == 0)
    		return false;
    return true;
}
int main() {
	int n; cin >> n;
	int tmp, cnt = 0;
	rep(i, 0, n) {
		cin >> tmp;
		if(isprime(tmp)) ++cnt;
	}
	P(cnt);
	return 0;
}
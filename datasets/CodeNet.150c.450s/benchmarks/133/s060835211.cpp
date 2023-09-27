#include<iostream>
#include<algorithm>
#include<math.h>
#include<queue>
#include<vector>
#include<climits>
#include<map>
#include<string>
#include<functional>
#include<iomanip>
#include<deque>
#include<random>
#include<set>
#include<bitset>
#include<cassert>

using namespace std;
typedef long long ll;
typedef double lldo;
#define mp make_pair
#define pub push_back
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define sz(x) int(x.size())
ll gcd(ll a, ll b) { if (a % b == 0) { return b; } else  return gcd(b, a % b); }
ll lcm(ll a, ll b) { if (a == 0) { return b; }return a / gcd(a, b) * b; }
template<class T>ll LBI(vector<T>& ar, T in) { return lower_bound(ar.begin(), ar.end(), in) - ar.begin(); }
template<class T>ll UBI(vector<T>& ar, T in) { return upper_bound(ar.begin(), ar.end(), in) - ar.begin(); }

ll d, c[30] = {}, s[370][30] = {}, last[30] = {}, ans[370] = {}, t[370] = {};

int main() {
	cin >> d;
	rep(i, 26)cin >> c[i];
	rep(i, d) {
		rep(j, 26)cin >> s[i][j];
	}
	rep(i, d) {
		cin >> t[i];
		t[i]--;
	}
	rep(i, 26)last[i] = -1;
	rep(i, d) {
		rep(j, 26) {
			if (j == t[i]) {
				ans[i] += s[i][j];
				last[j] = i;
			}
			else {
				ans[i] -= c[j] * (i - last[j]);
			}
		}
		if (i)ans[i] += ans[i - 1];
	}
	rep(i, d)cout << ans[i] << endl;
	return 0;
}
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <functional>
#include <numeric>
#include <stack>
#include <queue>
#include <map>
#include <set>
#include <utility>
#include <sstream>
#include <complex>
#include <fstream>
#include <bitset>
#include <time.h>
#include <tuple>
#include <iomanip>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<ll, ll> P;
typedef vector<ll> V;
typedef complex<double> Point;

#define PI acos(-1.0)
#define EPS 1e-10
const ll INF = 1e12;
const ll MOD = 1e9 + 7;

#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define rep(i,N) for(int i=0;i<(N);i++)
#define ALL(s) (s).begin(),(s).end()
#define EQ(a,b) (abs((a)-(b))<EPS)
#define EQV(a,b) ( EQ((a).real(), (b).real()) && EQ((a).imag(), (b).imag()) )
#define fi first
#define se second
#define N_SIZE (1LL << 20)
#define NIL -1

ll sq(ll num) { return num*num; }
ll mod_pow(ll x, ll n) {
	if (n == 0)return 1;
	if (n == 1)return x%MOD;
	ll res = sq(mod_pow(x, n / 2));
	res %= MOD;
	if (n % 2 == 1) {
		res *= x;
		res %= MOD;
	}
	return res;
}
ll mod_add(ll a, ll b) { return (a + b) % MOD; }
ll mod_sub(ll a, ll b) { return (a - b + MOD) % MOD; }
ll mod_mul(ll a, ll b) { return a*b % MOD; }

ll a, l;

string changes(ll num) {
	stringstream ss;
	ss << num;
	return ss.str();
}

ll changei(string num) {
	ll res;
	stringstream ss;
	ss << num;
	ss >> res;
	return res;
}

int main() {
	while (cin >> a >> l&&a + l) {
		string s = "";
		rep(i, l)s += "0";
		rep(i, l) {
			s[i] += a % 10;
			a /= 10;
		}
		reverse(ALL(s));
		//cout << s << endl;
		ll ans = -1;
		ll cnt = 0;
		vector<ll> vl;
		vl.push_back(changei(s));
		while (ans == -1) {
			cnt++;
			string ss, tt;
			sort(ALL(s));
			ss = s;
			reverse(ALL(s));
			tt = s;
			ll n1, n2;
			n1 = changei(ss);
			n2 = changei(tt);
			//cout << "!!" << cnt << " " << ss << " " << tt << endl;
			ll num = n2 - n1;
			rep(i, vl.size()) {
				if (num == vl[i]) {
					s = changes(num);
					ans = i;
					break;
				}
			}
			if (ans != -1)break;
			vl.push_back(num);
			s = changes(num);
			reverse(ALL(s));
			while (s.size() < l)s += "0";
			reverse(ALL(s));
		}
		cout << ans << " " << s << " " << cnt - ans << endl;
	}
}

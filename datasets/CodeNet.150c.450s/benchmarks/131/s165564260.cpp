#include <iostream>
#include <algorithm>
#include <cstdio>
#include <string>
#include <cstring>
#include <cctype>
#include <cstdlib>
#include <cmath>
#include <vector>
#include <set>
#include <queue>
#include <stack>
#include <map>
using namespace std;

#define REP(i, s, e) for (int i = (s); i < (e); i++)
#define REPI(i, s, e) for (int i = (s); i <= (e); i++)
#define rep(i, n) REP(i, 0, n)
#define repi(i, n) REPI(i, 0, n)
#define ALL(v) (v).begin(), (v).end()

#define dump(x) (cout << #x << " = " << x << endl)
#define dump2(x, y) (cout << "(" << #x << ", " << #y << ") = (" << x << ", " << y << ")" << endl)
#define dump3(x, y, z) (cout << "(" << #x << ", " << #y << ", " << #z << ") = (" << x << ", " << y << ", "<< z << ")" << endl)

typedef long long ll;
typedef pair<int, int> pii;

vector<ll> n2v(ll n)
{
	vector<ll> vs;
	while (n > 0) {
		vs.push_back(n%10);
		n /= 10;
	}
	reverse(ALL(vs));
	return vs;
}

ll v2n(vector<ll> &vs)
{
	ll n = 0;
	rep(i, vs.size())
		n = 10*n + vs[i];
	return n;
}

int main(void)
{
	int n, l;
	while (cin >> n >> l, n|l) {
		vector<ll> ns = n2v(n);
		if (l-ns.size() > 0) {
			reverse(ALL(ns));
			while(ns.size() < l) ns.push_back(0);
			reverse(ALL(ns));
		}

		vector<ll> done;

		ll a = v2n(ns);
		for (;;) {
			done.push_back(a);
			while(ns.size() < l) ns.push_back(0);

			sort(ALL(ns));
			ll mi = v2n(ns);
			reverse(ALL(ns));
			ll ma = v2n(ns);

			a = ma - mi;
			if (find(ALL(done), a) != done.end()) {
				int i, j;
				rep(k, done.size())
					if (done[k] == a) {
						j = k;
						break;
					}
				i = done.size();
				printf("%lld %lld %lld\n", j, a, i-j);
				break;
			}
			ns = n2v(a);
		}
	}
	return 0;
}
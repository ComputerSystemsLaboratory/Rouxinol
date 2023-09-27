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

using namespace std;

typedef long long ll;
typedef pair<ll, ll> P;
typedef vector<ll> V;
typedef complex<double> Point;

#define PI acos(-1.0)
#define EPS 1e-10
const ll INF = (1LL << 31) - 1;
const ll MOD = 1e9 + 7;

#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define REP(i,N) for(int i=0;i<(N);i++)
#define ALL(s) (s).begin(),(s).end()
#define EQ(a,b) (abs((a)-(b))<EPS)
#define EQV(a,b) ( EQ((a).real(), (b).real()) && EQ((a).imag(), (b).imag()) )
#define fi first
#define se second
#define N_SIZE (1LL << 20)
#define NIL -1
#define MAX_N 100100 * 3
ll n, m;

int main() {
	while (cin >> n >> m&&n + m) {
		ll cnt[100] = {};
		REP(i, n) {
			ll d, p;
			cin >> d >> p;
			cnt[p] += d;
		}
		ll ans = 0;
		for (int i = 100 - 1; i >= 0; i--) {
			if (m - cnt[i] >= 0)m -= cnt[i];
			else {
				ans += i*(cnt[i] - m);
				m = 0;
			}
		}
		cout << ans << endl;
	}
}
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

int n, m;
ll h[100100];
ll w[100100];
ll cnt[2000000][2];

int main() {
	while (cin >> n >> m&&n + m) {
		REP(i, 2000000)REP(j, 2)cnt[i][j] = 0;
		REP(i, n) {
			cin >> h[i];
			if (i != 0)h[i] += h[i - 1];
		}
		REP(i, m) {
			cin >> w[i];
			if (i != 0)w[i] += w[i - 1];
		}
		REP(i, n) {
			cnt[h[i]][0]++;
			FOR(j, i + 1, n) {
				cnt[h[j] - h[i]][0]++;
			}
		}
		REP(i, m) {
			cnt[w[i]][1]++;
			FOR(j, i + 1, m) {
				cnt[w[j] - w[i]][1]++;
			}
		}
		ll ans = 0;
		REP(i, 2000000) {
			//cout << cnt[i][0] << " " << cnt[i][1] << endl;
			ans += cnt[i][0] * cnt[i][1];
		}
		cout << ans << endl;
	}

}
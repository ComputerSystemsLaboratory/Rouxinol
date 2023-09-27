#include <iostream>
#include <cstdio>
#include <cmath>
#include <string>
#include <vector>
#include <utility>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <deque>
#include <algorithm>
using namespace std;
typedef long double ld;
typedef long long ll;
typedef vector<int> vint;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef pair<double, double> pdd;
#define rep(i,n)	for(int i=0;i<n;i++)
#define srep(i,a,n)	for(int i=a;i<n;i++)
#define REP(i,n)	for(int i=0;i<=n;i++)
#define rrep(i,n)	for(int i=n-1;i>=0;i--)
#define mp(a,b)	make_pair(a,b)
#define fst	first
#define scn second

const ll inf = (ll)1e9 + 7;
const ll mod = (ll)1e9 + 7;
const ld eps = 1e-9;

int main() {
	while (true) {
		int n, m;	cin >> n >> m;
		if (n == 0)	break;
		vint h(n), w(m);
		rep(i, n)	cin >> h[i];
		rep(i, m)	cin >> w[i];
		vint hsum(n + 1, 0), wsum(m + 1, 0);
		rep(i, n)	hsum[i + 1] = hsum[i] + h[i];
		rep(i, m)	wsum[i + 1] = wsum[i] + w[i];
		n++;	m++;
		map<int, int> ls;
		rep(i, n)	rep(j, i) {
			ls[hsum[i] - hsum[j]]++;
		}
		int ret = 0;
		rep(i, m)	rep(j, i) {
			ret += ls[wsum[i] - wsum[j]];
		}
		cout << ret << endl;
	}
	return 0;
}
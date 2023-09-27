#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

#define rep2(i, b, n) for(int i=b; i < n; ++i)
#define rep(i, n) rep2(i, 0, n)
#define sz(x) x.size()
#define pb(x) push_back(x)
#define mk(x, y) make_pair(x, y)
#define P first
#define D second

using namespace std;

typedef pair<int, int> pii;

pii p[10000];

int main( void )
{
	int n, m;
	while(cin >> n >> m, n | m) {
		int sump = 0;
		rep(i, n) {
			cin >> p[i].D >> p[i].P;
			sump += (p[i].D * p[i].P);
		}
		sort(p, p+n, greater<pii>());
		rep(i, n) {
			if(p[i].P == 0) continue;
			int mm = min(p[i].D, m);
			sump -= (mm * p[i].P);
			m -= mm;
			if(m == 0) break;
		}
		cout << sump << endl;
	}
	return 0;
}
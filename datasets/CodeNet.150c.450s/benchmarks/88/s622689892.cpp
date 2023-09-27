#include <iostream>
#include <algorithm>
#include <map>
#define FOR(i,bg,ed) for(ll i=(bg);i<(ed);i++)
#define REP(i,n) FOR(i,0,n)
#define MOD 1000000007
//#define int long long
using namespace std;
typedef long long ll;
const int INF = 1e9;
 
pair<pair<int, int>, pair<int, int> > a[303030];
 
signed main()
{
	int idx = 0;
	for (int h=1; h<=150; h++) {
		for (int w=h+1; w<=150; w++) {
			a[idx++] = make_pair(make_pair(h * h + w * w, h), make_pair(h, w));
		}
	}

	sort(a, a + idx);

	int h, w;
	while (true) {
		cin >> h >> w;
		if (h == 0 && w == 0) break;
		pair<pair<int, int>, pair<int, int> > *it = lower_bound(a, a + idx, make_pair(make_pair(h * h + w * w, h), make_pair(-1, -1)));
		it++;
		cout << it->second.first << " " << it->second.second << endl;
	}
}
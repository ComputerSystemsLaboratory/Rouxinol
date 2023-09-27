#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
#include <cstring>
#include <cmath>
#include <queue>
#include <map>
#include <set>
using namespace std;

#define rep(i,n) for(int i=0; i<n; i++)
#define FOR(i,s,n) for(int i=s; i<n; i++)
#define ALL(x) x.begin(), x.end()
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
typedef vector<int> vi;

int main() {
	int n;
	ll m;
	while(cin >> n >> m, n) {
		vector<pii> v;
		rep(i, n) {
			int d, p;
			cin >> d >> p;
			v.push_back( pii(p, d) );
		}
		sort( v.begin(), v.end() );
		int k = n-1;
		while(k>=0 && m>0) {
			int diff = min(1LL*v[k].second, m);
			v[k].second -= diff;
			m -= diff;
			k--;
		}
		ll sum = 0;
		rep(i, n) {
			sum += v[i].first * v[i].second;
		}
		cout << sum << endl;
	}
	return 0;
}
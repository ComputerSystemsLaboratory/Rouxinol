#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include <algorithm>
#include <cctype>
#include <cmath>
#include <iomanip>

#define REP(i,n) for(int i=0;i<n;++i)
#define RREP(i,n) for(int i=n-1;i>=0;--i)
#define FOR(i,m,n) for(int i=m;i<n;++i)
#define RFOR(i,m,n) for(int i=m-1;i>=n;--i)
#define ALL(v) v.begin(),v.end()
#define PB(a) push_back(a)
#define INF 1000000001
#define MOD 1000000007

using namespace std;


int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int x, y, s,cmax;
	while (1) {
		cin >> x >> y >> s;
		if (!x) break;
		cmax = -INF;
		FOR(i,1, s) {
			FOR(j,1, s) {
				if (i*(100 + x) / 100 + j*(100 + x) / 100 == s) {
					cmax = max(cmax, i*(100 + y) / 100 + j*(100 + y) / 100);
				}
			}
		}
		cout << cmax << endl;
	}
	return 0;
}
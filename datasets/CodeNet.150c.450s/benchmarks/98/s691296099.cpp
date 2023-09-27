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
	while (1) {
		int n, m, tsum = 0, hsum = 0;
		cin >> n >> m;
		if (!n) break;
		vector<int> t(n), h(m);
		REP(i, n) {
			cin >> t[i];
			tsum += t[i];
		}
		REP(i, m) {
			cin >> h[i];
			hsum += h[i];
		}
		int diff = tsum - hsum;
		if (diff % 2 != 0) {
			cout << -1 << endl;
			continue;
		}
		sort(ALL(h));
		sort(ALL(t));
		REP(i, n) {
			REP(j, m) {
				if (t[i] == h[j]+diff/2) {
					cout << t[i] << " " << h[j] << endl;
					goto nyan;
				}
			}
		}
		cout << -1 << endl;
	nyan:;
	}
	return 0;
}
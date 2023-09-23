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
	int n;
	cin >> n;
	REP(i, n) {
		int y, m, d, cnt = 0;
		cin >> y >> m >> d;
		bool b = y % 3 == 0;
		cnt += (1000 - y) * 195 + 5 * (333 - (y-1) / 3);
		cnt -= d - 1;
		if (b) {
			cnt -= (m-1) * 20;
		}
		else {
			if (m % 2 == 0) {
				cnt -= (m - 2) * 39 / 2 + 20;
			}
			else {
				cnt -= (m - 1) * 39 / 2;
			}
		}
		cout << cnt << endl;
		cnt = 0;
	}

	return 0;
}
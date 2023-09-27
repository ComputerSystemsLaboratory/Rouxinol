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
	long long  n, a, b, c, x;
	
	while (1) {
		cin >> n >> a >> b >> c >> x;
		if (!n) break;
		vector<int> y(n);
		REP(i, n) {
			cin >> y[i];
		}
		int j = 0;
		REP(i, 10001) {
			if (y[j] ==x) {
				if (j == n - 1) {
					cout << i << endl;
					break;
				}
				else {
					++j;
				}
			}
			if (i == 10000) cout << -1 << endl;
			x = (a*x + b) % c;
		}
	}
	return 0;

}
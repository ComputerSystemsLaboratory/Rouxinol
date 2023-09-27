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
		int n, m, p, sum = 0;
		cin >> n >> m >> p;
		if (!n) break;
		vector<int> v(n);
		REP(i, n) {
			cin >> v[i];
			sum += v[i];
		}
		int geld = sum*(100-p);
		sum *= 100;
		if (v[m - 1] == 0) cout << 0 << endl;
		else cout << double(geld / v[m - 1]) << endl;
	}
	return 0;
}
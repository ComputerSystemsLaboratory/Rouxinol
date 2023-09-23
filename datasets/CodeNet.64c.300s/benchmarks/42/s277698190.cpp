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
		int cx = 10,cy = 10;
		int v[21][21];
		REP(i, 21) {
			REP(j, 21) {
				v[i][j] = 0;
			}
		}
		int n, m,cnt=0;
		cin >> n;
		if (!n) break;
		REP(i, n) {
			int x, y;
			cin >> x >> y;
			v[x][y] = 1;
		}
		cin >> m;
		REP(i, m) {
			char d;
			int L;
			cin >> d >> L;
			int dx, dy;
			if (d == 'N') {
				dx = 0;dy = 1;
			}
			else if (d == 'E') {
				dx = 1;dy = 0;
			}
			else if(d=='W'){
				dx = -1;dy = 0;
			}
			else {
				dx = 0;dy = -1;
			}
			FOR(j,1, L+1) {
				if (v[cx + j*dx][cy + j*dy] == 1) {
					cnt++;
					v[cx + j*dx][cy + j*dy] = 0;
				}
			}
			cx += L*dx;cy += L*dy;
		}
		if (cnt == n) cout << "Yes" << endl;
		else cout << "No" << endl;
	}
	return 0;
}
#include <iostream>
#include <vector>
#include <string>
#include <cstring>
#include <algorithm>
#include <sstream>
#include <map>
#include <set>

#define REP(i,k,n) for(int i=k;i<n;i++)
#define rep(i,n) for(int i=0;i<n;i++)
#define INF 1<<30
#define pb push_back
#define mp make_pair

using namespace std;
typedef long long ll;
typedef pair<int,int> P;

int main() {
	int h, w;
	while(cin >> h >> w) {
		if(h == 0 && w == 0) break;

		vector< vector< int > > v(h, vector<int>(w));
		rep(i, h) {
			rep(j, w) cin >> v[i][j];
		}

		int ans = 0;
		rep(i, 1 << h) {
			vector< vector<int> > t(v.begin(), v.end());
			rep(j, h) {
				if(i & (1 << j)) {
					rep(k, w) t[j][k] = !t[j][k];
				}
			}

			int res = 0;
			rep(j, w) {
				int cnt = 0;
				rep(k, h) cnt += t[k][j];
				res += max(cnt, h - cnt);
			}

			ans = max(ans, res);
		}

		cout << ans << endl;
	}
	return 0;
}
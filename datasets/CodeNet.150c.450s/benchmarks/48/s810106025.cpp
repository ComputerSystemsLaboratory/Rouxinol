#include <bits/stdc++.h>

#define mp make_pair
#define pb push_back
#define REP(i,a,n) for(int i = a;i < (n);i++)
#define rep(i,n) for(int i = 0;i < (n);i++)
#define all(s) s.begin(), s.end()
#define rall(s) s.rbegin(), s.rend()
#define range(x,min,max) ((min) <= (x) && (x) <= (max))
#define xyrange(x, minX, maxX, y, minY, maxY) (range(x, minX, maxX) && range(y, minY, maxY))

using namespace std;

typedef long long LL;
typedef vector<int> VI;
typedef vector<vector<int> > VVI;
typedef vector<string> VS;
typedef vector<bool> VB;
typedef pair<int,int> PII;
typedef vector<PII> VPII;

int e;

const int DX[]={1,0,-1,0},DY[]={0,-1,0,1};
const int INF = INT_MAX / 2;

int main(){
	cin.tie(0);
   	ios::sync_with_stdio(false);
	while (1) {
		cin >> e;
		if (e == 0) break;
		LL ans = INF;
		int dx, dy, dz;
		for (LL z = 0;z < 100 + 1;z++) {
			for (LL y = 0;y < 1000 + 1;y++) {
				if (e - z * z * z - y * y < 0) continue;
				LL x = e - z * z * z - y * y;
				ans = min(ans, x + y + z);
			}
		}
		cout << ans << endl;
	}
	return 0;
}
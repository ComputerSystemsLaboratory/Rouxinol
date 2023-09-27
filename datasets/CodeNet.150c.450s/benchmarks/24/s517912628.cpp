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


const int DX[]={1,0,-1,0},DY[]={0,-1,0,1};
const int INF = INT_MAX / 2;

int n, m;
VPII dss;

#define s first
#define d second

int main(){
	cin.tie(0);
   	ios::sync_with_stdio(false);
	while (1) {
		dss.clear();
		cin >> n >> m;
		if (n == 0 && m == 0) break;
		dss.resize(n);
		rep (i, n) {
			cin >> dss[i].d >> dss[i].s;
		}
		sort(rall(dss));
		for (PII &p : dss) {
			if (m < 0) break;
			int dist = p.d;
			p.d = max(dist - m, 0);
			m -= dist;
		}
		int ans = 0;
		for (PII p : dss) {
			ans += p.d * p.s;
		}
		cout << ans << endl;
	}
	return 0;
}
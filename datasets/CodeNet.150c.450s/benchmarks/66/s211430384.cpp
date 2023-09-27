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

int main(){
	cin.tie(0);
   	ios::sync_with_stdio(false);
	cin >> n;
	map<string, bool> ids;
	rep (i, n) {
		string u;
		cin >> u;
		ids[u] = true;
	}
	cin >> m;
	VS ans;
	VS ts;
	bool flag = false;
	rep (i, m) {
		string s;
		string t;
		cin >> t;
		if (!ids.count(t)) {
			s = "Unknown " + t;
		} else if (flag) {
			s = "Closed by " + t;
			flag = false;
		} else {
			s = "Opened by " + t;
			flag = true;
		}
		ans.pb(s);
	}
	for (string a : ans) {
		cout << a << endl;
	}
	return 0;
}
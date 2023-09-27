#include <bits/stdc++.h>

#define mp make_pair
#define pb push_back
#define REP(i,a,n) for(int i = a;i < (n);i++)
#define rep(i,n) for(int i = 0;i < (n);i++)
#define all(s) s.begin(), s.end()
#define rall(s) s.rbegin(), s.rend()
#define range(x,min,max) ((min) <= (x) && (x) <= (max))

using namespace std;

typedef long long LL;
typedef vector<int> VI;
typedef vector<vector<int> > VVI;
typedef vector<string> VS;
typedef vector<bool> VB;
typedef pair<int,int> PII;

const int DX[]={1,0,-1,0},DY[]={0,-1,0,1};

int n, a, b, c, x;
VI ys;

int main(){
	cin.tie(0);
	ios::sync_with_stdio(false);
	while (1) {
		ys.clear();
		cin >> n >> a >> b >> c >> x;
		if (n == 0 && a == 0 && b == 0 && c == 0 && x == 0) break;
		ys.resize(n);
		rep (i, n) cin >> ys[i];
		int idx = 0;
		int ans = -1;
		rep (i, 10001) {
			if (x == ys[idx]) {
				idx++;
			}
			x = (a * x + b) % c;
			if (idx == n) {
				ans = i;
				break;
			}
		}
		cout << ans << endl;
	}
	return 0;
}
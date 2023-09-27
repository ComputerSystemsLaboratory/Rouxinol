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

int main(){
	cin.tie(0);
   	ios::sync_with_stdio(false);
	int n, m, p;
	while(1) {
		cin >> n >> m >> p;
		if (n == 0 && m == 0 && p == 0) break;
		int x;
		int cnt = 0;
		rep (i, n) {
			int temp;
			cin >> temp;
			if (m == i + 1) x = temp;
			cnt += temp;
		}
		int sum = 100 * cnt;
		int ans = x == 0? 0 : (sum - (sum * (p / 100.0))) / x;
		cout << ans << endl;
	}
	return 0;
}
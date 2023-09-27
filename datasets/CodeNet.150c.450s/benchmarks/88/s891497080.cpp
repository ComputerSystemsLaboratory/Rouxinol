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
	int h, w;
	while (1) {
		cin >> h >> w;
		if (h == 0 && w == 0) break;
		PII ans = PII(150, 150);
		int wh_len = h * h + w * w;
		int min_h = h;
		REP (i, 1, 151) {
			REP (j, 1, 151) {
				if (i >= j) continue;
				int len = i * i + j * j;
				if (len >= wh_len) {
					if (len == wh_len && h >= i) continue;
					int ans_len = ans.first * ans.first + ans.second * ans.second;
					ans = (len < ans_len)? mp(i, j) : ans;
				}
			}
		}
		cout << ans.first << " " << ans.second << endl;
	}
	return 0;
}
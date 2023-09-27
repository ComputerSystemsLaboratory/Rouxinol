#include "bits/stdc++.h"
using namespace std;

//#define int long long
#define DBG 0
#define dump(o) if(DBG){cerr<<#o<<" "<<o<<endl;}
#define dumpc(o) if(DBG){cerr<<#o; for(auto &e:(o))cerr<<" "<<e;cerr<<endl;}
#define rep(i,a,b) for(int i=(a);i<(b);i++)
#define rrep(i,a,b) for(int i=(b)-1;i>=(a);i--)
#define each(it,c) for(auto it=(c).begin();it!=(c).end();it++)
#define all(c) c.begin(),c.end()
const int INF = sizeof(int) == sizeof(long long) ? 0x3f3f3f3f3f3f3f3fLL : 0x3f3f3f3f;
const int MOD = (int)(1e9 + 7);

char A[22][22] = {};
int f[22][22] = {};
int W, H;

bool isinrange(int i, int j) {
	return 0 <= i&&i < H && 0 <= j&&j < W;
}

int di[] = { 1,0,-1,0 };
int dj[] = { 0,1,0,-1 };
void dfs(int i, int j) {
	if (isinrange(i, j) == false)return;
	if (A[i][j] == '#')return;
	if (f[i][j])return;
	f[i][j] = true;
	rep(k, 0, 4) {
		int ii = i + di[k];
		int jj = j + dj[k];
		dfs(ii, jj);
	}
}

signed main() {
	for (; cin >> W >> H&&W&&H;) {
		memset(f, 0, sizeof(f));
		memset(A, 0, sizeof(A));
		int ai, aj;
		rep(i, 0, H) rep(j, 0, W) {
			cin >> A[i][j];
			if (A[i][j] == '@') {
				ai = i, aj = j;
			}
		}
		dfs(ai, aj);
		int ans = 0;
		rep(i, 0, H)rep(j, 0, W) {
			if (f[i][j]) {
				ans++;
				dump(i);
				dump(j);
			}
		}
		cout << ans << endl;
		rep(i, 0, H)dumpc(f[i]);
	}
	return 0;
}
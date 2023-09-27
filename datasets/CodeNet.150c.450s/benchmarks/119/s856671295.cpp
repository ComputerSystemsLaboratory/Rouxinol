#include<iostream>
#include<algorithm>
#include<vector>
#include<math.h>
#include<string>
#include<limits.h>
#define ll long long
#define rep(i,n) for(int i=0;i<n;i++)
#define nrep(i,a,b) for(int i=a;i<b;i++)
#define mrep(i,a) for(int i=a;i<=0;i++)
#define INF LLONG_MAX
using namespace std;

ll w, h, ans;
vector<pair<ll, ll> > idou(8);

void dfs(vector<vector<ll> > &map, ll tate, ll yoko) {
	map[tate][yoko] = ans;
	rep(i, 8) {
		ll t = tate + idou[i].first;
		ll y = yoko + idou[i].second;
		if (0 <= t && t < h && 0 <= y && y < w && !map[t][y]) dfs(map, t, y);
	}
}

int main() {
	//???
	idou[0].first = -1;
	idou[0].second = 0;
	//??????
	idou[1].first = -1;
	idou[1].second = 1;
	//???
	idou[2].first = 0;
	idou[2].second = 1;
	//??????
	idou[3].first = 1;
	idou[3].second = 1;
	//???
	idou[4].first = 1;
	idou[4].second = 0;
	//??????
	idou[5].first = 1;
	idou[5].second = -1;
	//???
	idou[6].first = 0;
	idou[6].second = -1;
	//??????
	idou[7].first = -1;
	idou[7].second = -1;

	while (1) {
		cin >> w >> h;
		if (!w && !h) break;
		ans = 0;
		vector<vector<ll> > map(h, vector<ll>(w, -1));
		rep(i, h) rep(j, w) {
			ll temp; cin >> temp;
			if (temp) map[i][j] = 0;
		}rep(i, h) rep(j, w) {
			if (!map[i][j]) {
				ans++;
				dfs(map, i, j);
			}
		}cout << ans << endl;
	}
	return 0;
}
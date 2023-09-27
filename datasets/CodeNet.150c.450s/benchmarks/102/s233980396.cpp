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

// .:true #:false
vector<pair<ll,ll> > idou(4);
ll w, h, ans;

void dfs(vector<vector<bool> > &map,ll tate, ll yoko) {
	ans++;
	map[tate][yoko] = false;
	ll t, y;
	rep(i, 4) {
		t = tate+idou[i].first;
		y = yoko+idou[i].second;
		if (0 <= t && t < h && 0 <= y && y < w && map[t][y]) {
			dfs(map,t, y);
		}
	}
}

int main() {

	//???
	idou[0].first = -1;
	idou[0].second = 0;
	//???
	idou[1].first = 0;
	idou[1].second = 1;
	//???
	idou[2].first = 1;
	idou[2].second = 0;
	//???
	idou[3].first = 0;
	idou[3].second = -1;

	while (1) {
		ans = 0;
		cin >> w >> h;
		if (!w && !h) break;
		vector<vector<bool> > map(h, vector<bool>(w));
		ll s_t, s_y;
		rep(i, h) {
			string s; cin >> s;
			rep(j, w) {
				if (s[j] == '@') {
					s_t = i;
					s_y = j;
					map[i][j] = true;
				}
				else map[i][j] = (s[j] == '.');
			}
		}dfs(map,s_t, s_y);
		cout << ans << endl;
	}
	return 0;
}
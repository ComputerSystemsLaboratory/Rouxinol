#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<stdio.h>
#include<time.h>
#include<math.h>
#include<algorithm>
#include<string>
#include<vector>
#include<list>
#include<queue>
#include<stack>
#include<deque>
#include<set>
#include<map>
#define REP(i, N) for(ll i = 0; i < N; ++i)
#define FOR(i, a, b) for(ll i = a; i < b; ++i)
#define ALL(a) (a).begin(),(a).end()
#define pb push_back
#define INF 1000000000
#define MOD 1000000007
using namespace std;
typedef long long ll;
typedef pair<ll, ll> P;
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
int qx[8] = {1, 1, 0, -1, -1, -1, 0, 1};
int qy[8] = {0, 1, 1, 1, 0, -1, -1, -1};

vector<vector<bool>> d;
vector<string> m;
int w, h;

void cal(ll x, ll y) {
	REP(i, 4) {
		ll nx = x + dx[i];
		ll ny = y + dy[i];
		if(nx >= 0 && nx < h && ny >= 0 && ny < w && m[nx][ny] == '.' && !d[nx][ny]) {
			d[nx][ny] = true;
			cal(nx, ny);
		}
	}
}

int main(void) {
	while(true) {
		cin>>w>>h;
		if(w == 0 && h == 0) break;
		m.resize(h);
		d.resize(h);
		REP(i, h) {
			d[i].resize(w);
			REP(j, w) {
				d[i][j] = false;
			}
		}
		REP(i, h) cin>>m[i];
		REP(i, h) {
			REP(j, w) {
				if(m[i][j] == '@') {
					d[i][j] = true;
					cal(i, j);
					break;
				}
			}
		}
		ll ans = 0;
		REP(i, h) {
			REP(j, w) {
				if(d[i][j]) ++ ans;
			}
		}
		cout<<ans<<endl;
	}
}
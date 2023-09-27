#include<iostream>
#include<iomanip>
#include<cstdlib>
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

int main(void) {
	ll h, w, n;
	cin>>h>>w>>n;
	vector<string> a(h);
	vector<vector<ll> > dist(h, vector<ll>(w, INF));
	ll time = 0;
	P sp;
	REP(i, h) cin>>a[i];
	bool det = false;
	REP(i, h) {
		REP(j, w) {
			if(a[i][j] == 'S') {
				sp.first = i;
				sp.second = j;
				det = true;
				break;
			}
		}
		if(det) break;
	}
	REP(i, n) {
		queue<P> c;
		c.push(sp);
		dist[sp.first][sp.second] = 0;
		while(true) {
			P cp = c.front();
			c.pop();
			if(a[cp.first][cp.second] - '1' == i) {
				time += dist[cp.first][cp.second];
				sp = cp;
				break;
			}
			REP(j, 4) {
				ll nx = cp.first + dx[j];
				ll ny = cp.second + dy[j];
				if(nx >= 0 && nx < h && ny >= 0 && ny < w && dist[nx][ny] == INF && (a[nx][ny] == 'S' || a[nx][ny] == '.' || (a[nx][ny] >= '1' && a[nx][ny] <= '9'))) {
					c.push(P(nx, ny));
					dist[nx][ny] = dist[cp.first][cp.second] + 1;
				}
			}
		}
		REP(j, h) {
			REP(k, w) {
				dist[j][k] = INF;
			}
		}
	}
	cout<<time<<endl;
}
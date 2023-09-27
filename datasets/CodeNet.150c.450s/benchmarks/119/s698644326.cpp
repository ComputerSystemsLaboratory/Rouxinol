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

vector<vector<int> > m;
int w, h;

void cal(ll x, ll y) {
	REP(i, 8) {
		ll nx = x + qx[i];
		ll ny = y + qy[i];
		if(nx >= 0 && nx < h && ny >= 0 && ny < w && m[nx][ny] == 1) {
			m[nx][ny] = 0;
			cal(nx, ny);
		}
	}
}

int main(void) {
	while(true) {
		cin>>w>>h;
		if(w == 0 && h == 0) break;
		m.resize(h);
		REP(i, h) {
			m[i].resize(w);
		}
		REP(i, h) {
			REP(j, w) {
				cin>>m[i][j];
			}
		}
		ll ans = 0;
		REP(i, h) {
			REP(j, w) {
				if(m[i][j] == 1) {
					++ans;
					cal(i, j);
				}
			}
		}
		cout<<ans<<endl;
	}
}
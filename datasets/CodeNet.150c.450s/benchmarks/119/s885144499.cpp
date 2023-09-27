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

vector<vector<int> > mp;
int w, h;


void hoge(int wo, int ho) {
	mp[wo][ho] = 0;
	REP(i, 8) {
		int nw = wo + qx[i];
		int nh = ho + qy[i];
		if(nw >= 0 && nw < w && nh >= 0 && nh < h && mp[nw][nh] == 1) hoge(nw, nh);
	}
}
int main(void) {
	while(true) {
	ll count = 0;
	cin>>w>>h;
		if(w == 0 && h == 0) return 0;
		swap(w, h);
	mp.resize(w);
	REP(i, w) mp[i].resize(h);
	REP(i, w) {
		REP(j, h) {
			cin>> mp[i][j];
		}
	}
	REP(i, w) {
		REP(j, h) {
			if(mp[i][j] == 1) {
				count++;
				hoge(i, j);
			}
		}
	}
	cout<<count<<endl;
}
}
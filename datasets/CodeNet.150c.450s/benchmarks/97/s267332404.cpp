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

int main(void) {
	while(true) {
		int N;
		cin>>N;
		if(N == 0) break;
		vector<P> d(N);
		d[0] = P(0, 0);
		REP(i, N - 1) {
			ll n, s;
			cin>>n>>s;
			switch(s) {
				case 0: {
					d[i + 1].first = d[n].first - 1;
					d[i + 1].second = d[n].second;
					break;
				}
				case 1: {
					d[i + 1].first = d[n].first;
					d[i + 1].second = d[n].second - 1;
					break;
				}
				case 2: {
					d[i + 1].first = d[n].first + 1;
					d[i + 1].second = d[n].second;
					break;
				}
				case 3: {
					d[i + 1].first = d[n].first;
					d[i + 1].second = d[n].second + 1;
					break;
				}
			}
		}
		ll maxx = -INF, minx = INF, maxy = -INF, miny = INF;
		REP(i, N) {
			maxx = max(d[i].first, maxx);
			minx = min(d[i].first, minx);
			maxy = max(d[i].second, maxy);
			miny = min(d[i].second, miny);
		}
		cout<<maxx - minx + 1<<" "<<maxy - miny + 1<<endl;
	}
}
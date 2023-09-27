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
	vector<pair<ll, ll> > h;
	FOR(i, 1, 151) {
		FOR(j, i + 1, 151) {
			h.pb(P(i * i + j * j, i));
		}
	}
	sort(ALL(h));
	while(true) {
		ll g, w;
		cin>>g>>w;
		if(g == 0 && w == 0) break;
		vector<P>::iterator ite;
		ite = lower_bound(ALL(h), P(g * g + w * w, g));
		++ite;
		cout<<ite->second<<" "<<(int)(sqrt(ite->first - (ite->second * ite->second)) + 0.0000000001)<<endl;
	}
}
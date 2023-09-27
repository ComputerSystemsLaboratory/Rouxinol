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
		ll m, nn, nx;
		cin>>m>>nn>>nx;
		if(m==0 && nn==0 && nx==0) break;
		vector<ll> p(m);
		REP(i, m) cin>>p[i];
		ll gap = -1;
		ll res = -1;
		for(ll i = nx - 1; i >= nn - 1; --i) {
			if(p[i] == p[nx]) continue;
			if(p[i] - p[i + 1] > gap) {
				gap = p[i] - p[i + 1];
				res = i + 1;
			}
		}
		cout<<res<<endl;
	}
}
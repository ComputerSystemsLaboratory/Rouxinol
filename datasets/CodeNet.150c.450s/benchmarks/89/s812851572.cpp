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
	vector<bool> p(1000001, true);
	p[0] = p[1] = false;
	FOR(i, 2, 1000001) {
		if(p[i]) {
			for(ll j = 2; i * j <= 1000000; ++j) {
				p[i * j] = false;
			}
		}
	}
	while(true) {
		ll a, d, n;
		cin>>a>>d>>n;
		if(a == 0 && d == 0 && n == 0) break;
		ll cnt = 0;
		while(true) {
			if(p[a]) {
				++cnt;
				if(cnt == n) {
					cout<<a<<endl;
					break;
				}
			}
			a += d;
		}
	}
}
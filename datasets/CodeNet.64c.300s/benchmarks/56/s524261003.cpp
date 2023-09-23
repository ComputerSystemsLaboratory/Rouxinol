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
	int n;
	cin>>n;
	REP(i, n){
		int y, m, d;
		cin>>y>>m>>d;
		ll ans = 0;
		ans += 195 * (y - 1) + (y - 1) / 3 * 5;
		if(m % 2 == 1) {
			ans += (m - 1) / 2 * 39;
			if(y % 3 == 0) {
				ans += (m - 1) / 2;
			}
		} else {
			ans += m / 2 * 20 + (m / 2 - 1) * 19;
			if(y % 3 == 0) {
				ans += m / 2 - 1;
			}
		}
		ans += d;
		cout<<196471 - ans<<endl;
	}
}
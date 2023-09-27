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
#include<set>
#include<map>
#define REP(i, N) for(ll i = 0; i < N; ++i)
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
		int x, y, s;
		cin>>x>>y>>s;
		ll ans = 0;
		if(x==0&&y==0&&s==0) return 0;
		else {
			vector<int> dp(s);
			for(int i = 1; i < s; ++i) {
				if(i * (100 + x) / 100 < s) {
					dp[i * (100 + x) / 100] = i;
				}
			}
			for(int i = 1; i < s; ++i) {
				ans = max(ans, (ll)dp[i] * (100 + y) / 100 + dp[s - i] * (100 + y) / 100);
			}
		}
		cout<<ans<<endl;
	}
}
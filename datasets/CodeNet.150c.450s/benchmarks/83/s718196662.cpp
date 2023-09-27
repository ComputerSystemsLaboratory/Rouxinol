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
	int N, W;
	cin>>N>>W;
	vector<int> v(N);
	vector<int> w(N);
	REP(i, N) {
		cin>>v[i]>>w[i];
	}
	vector<vector<int> > dp(N + 1, vector<int>(W + 1));
	REP(i, N + 1) {
		REP(j, W + 1) {
			if(i == 0 || j == 0) dp[i][j] = 0;
			else if(j < w[i - 1]) dp[i][j] = dp[i - 1][j];
			else {
				dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - w[i - 1]] + v[i - 1]);
			}
		}
	}
	cout<<dp[N][W]<<endl;
}
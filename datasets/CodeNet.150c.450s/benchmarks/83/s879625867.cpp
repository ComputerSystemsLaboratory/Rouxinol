#include<cstdio>
#include<iostream>
#include<cmath>
#include<ctype.h>
#include<vector>
#include<cstdlib>
#include<cstdlib>
#include<string>
#include<algorithm>
#include<stack>
#include<queue>
#include<map>
#include<set>
#include<time.h>

#define ll long long
#define LL long long
#define ULL unsigned long long 
#define ull unsigned long long 
#define FOR(i,a,b) for(int i=a;i<b;i++)
#define RFOR(i,a,b) for(int i=(b)-1;i>=(a);i--)
#define REP(i,n) for(int i=0;i<n;i++)
#define RREP(i,n) for(int i=(n)-1;i>=0;i--)
const ll INF = -10000000000;
using namespace std;
ll dp[10001][101] = {};
int N, W;
int v[1000], w[1000];

int main()
{
	cin >> N >> W;
	REP(i, N) cin >> v[i] >> w[i];

	for (int i = 0; i <= W; i++) { //??\??????????????§??????
		for (int j = 0; j < N; j++) { //j????????\????????????
			if (i == 0) dp[i][j] = 0;
			else if (i >= w[j]) dp[i][j] = max(dp[i][j-1],dp[i-w[j]][j-1]+v[j]);
			else dp[i][j] = dp[i][j - 1];
		}
	}
	/*
	REP(i, W+1) {
		REP(j, N) {
			cout << dp[i][j] << " ";
		}
		cout << endl;
	}
	*/
	cout << dp[W][N - 1] << endl;

	return 0;
}
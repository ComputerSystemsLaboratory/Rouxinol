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
ll dp[50000][20] = {};

int main()
{
	int n, m;
	int c[20];
	
	cin >> n >> m;
	REP(i, m) cin >> c[i];

	for (int i = 1; i <= n; i++) {
		for (int j = 0; j < m; j++) {
			if (j == 0) {
				dp[i][0] = i;
			}
			else if (c[j] <= i) {
				dp[i][j] = min(dp[i][j - 1], dp[i-c[j]][j] + 1);
			}
			else {
				dp[i][j] = dp[i][j - 1];
			}
			
		}
	}
	
	/*
	for (int i = 1; i <= n;i++) {
		for (int j = 0; j < m;j++) {
			cout << dp[i][j] << " ";
		}
		cout << endl;
	}
	*/
	cout << dp[n][m - 1] << endl;
	return 0;
}
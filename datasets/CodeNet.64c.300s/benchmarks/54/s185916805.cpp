#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <ctime>
#include <cstring>
#include <climits>
#include <algorithm>
#include <map>
#include <set>
#include <stack>
#include <vector>
#include <queue>
#include <string>
using namespace std;

#define rep(i,n) for(int i=0; i<n; i++)
#define repa(i,s,e) for(int i=s; i<=e; i++)
#define repd(i,s,e) for(int i=s; i>=e; i--)

typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef pair<int, int> pii;

int n, m;
const int MAX_N = 101;
const int MAX_I = 21;
ll dp[MAX_N][MAX_I];

int main() {
	cin >> n;
	memset(&dp[0][0], 0, sizeof(ll) * MAX_N * MAX_I);
	cin >> m;
	dp[1][m] = 1;
	for(int i=2; i<n; i++) {
		cin >> m;
		for(int j=0; j<MAX_I; j++) {				
			if(j+m < MAX_I) dp[i][j+m] += dp[i-1][j];
			if(j-m >= 0)	dp[i][j-m] += dp[i-1][j];
		}
	}

	cin >> m;
	printf("%lld\n", dp[n-1][m]);
}
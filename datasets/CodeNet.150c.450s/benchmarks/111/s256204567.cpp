#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n) FOR(i,0,n)

typedef long long LL;

int n, a[100];
LL memo[100][21];

LL dfs(int i, int sum) {
	LL res;
	if (i == n - 1) return sum == a[n - 1];
	if (! (sum >= 0 && sum <= 20)) return 0;
	if (memo[i][sum] > -1) return memo[i][sum];
	
	res = dfs(i + 1, sum + a[i]) + dfs(i + 1, sum - a[i]);
	return memo[i][sum] = res;
}

int main(void) {
	cin >> n;
	REP(i, n) scanf("%d", &a[i]);
	memset(memo, -1, sizeof(memo));
	cout << dfs(1,a[0]) << endl;
	return 0;
}
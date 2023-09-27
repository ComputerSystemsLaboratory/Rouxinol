#include <iostream>
#include <cstdio>
#include <vector>
#include <cmath>
#include <cstring>
#include <numeric>
#include <algorithm>
#include <functional>
#include <array>
#include <map>
#include <queue>
#include <limits.h>
#include <set>
#include <stack>
#define rep(i,s,n) for(int i = (s); (n) > i; i++)
#define REP(i,n) rep(i,0,n)
#define MOD 1000000007
using namespace std;
typedef pair<int, int> pii;
typedef long long ll;

int main() {
	int n;
	scanf("%d", &n);
	n--;
	int answer;
	vector<int> num(n);
	REP(i, n) {
		scanf("%d", &num[i]);
	}
	scanf("%d", &answer);
	ll dp[102][21] = {};
	dp[1][num[0]] = 1;
	REP(i,n) {
		REP(j, 21) {
			if (dp[i][j]) {
				if((j+num[i])<=20)
					dp[i + 1][j + num[i]] += dp[i][j];
				if ((j - num[i]) >= 0)
					dp[i + 1][j - num[i]] += dp[i][j];
			}
		}
	}
	printf("%lld\n", dp[n][answer]);
	return 0;
}
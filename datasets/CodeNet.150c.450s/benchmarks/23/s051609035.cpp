#include<iostream>
#include<string>
#include<string.h>
#include<algorithm>
#include<stdio.h>
#include<cmath>
#include<vector>
#include<utility>
#include<stack>
#include<queue>
#include<list>
#include<bitset>
#include<functional>

#define FOR(i, a, b) for(long long int i=(a);i<=(b);i++)
#define RFOR(i, a, b) for(long long int i=(a);i>=(b);i--)
#define MOD 1000000007
#define INF 1000000000 //2000000000
#define LLINF 1000000000000000000 //9000000000000000000
#define PI 3.14159265358979

using namespace std;
typedef long long int ll;
typedef pair<long long int, long long int> P;

int main(void) {
	ll dp[45];
	int n;

	dp[0] = dp[1] = 1;

	cin >> n;

	FOR(i, 2, n) {
		dp[i] = dp[i - 1] + dp[i - 2];
	}
	cout << dp[n] << endl;
	
	return 0;
}

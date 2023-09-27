//#include <bits/stdc++.h>
#include<iostream>
#include<stdio.h>
#include<bitset>
#include<algorithm>
#include<vector>
#include<list>
#include<queue>
#include<stack>
#include<string>
#include<string.h>
#include<cmath>
#include<utility>
#include<functional>
#include<map>
#include<set>


#define FOR(i, a, b) for(long long int i=(a);i<=(b);i++)
#define RFOR(i, a, b) for(long long int i=(a);i>=(b);i--)
#define MOD 1000000007
#define INF 1000000000 //2000000000
#define LLINF 1000000000000000000 //9000000000000000000
#define PI 3.14159265358979

using namespace std;
typedef long long int ll;
typedef pair< long long int, long long  int> P;


int main(void) {

	while (1) {
		int n;
		int maxi = -1;
		int dp[86402] = {};
		int h, m, s;
		char c, d;

		cin >> n;
		if (n == 0) {
			break;
		}
		FOR(i, 1, n) {
			scanf("%2d%c%2d%c%2d", &h, &c, &m, &d, &s);
			dp[h * 3600 + m * 60 + s]++;
			scanf("%2d%c%2d%c%2d", &h, &c, &m, &d, &s);
			dp[h * 3600 + m * 60 + s ]--;
		}
		FOR(i, 1, 86401) {
			dp[i] += dp[i - 1];
		}
		FOR(i, 1, 86401) {
			if (dp[i] > maxi) {
				maxi = dp[i];
			}
		}
		cout << maxi << endl;
	}

	return 0;
}

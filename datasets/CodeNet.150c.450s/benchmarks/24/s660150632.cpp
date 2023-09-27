#include <bits/stdc++.h>

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
		long long int n, m;
		long long int dp[11] = {};
		long long int d, p;
		long long int total = 0;

		cin >> n >> m;
		if (n == 0) {
			break;
		}
		FOR(i, 0, n-1) {
			cin >> d >> p;
			dp[p] += d;
		}
		RFOR(i, 10, 0) {
			if (m >= dp[i]) {
				m -= dp[i];
				dp[i] = 0;
			}
			else {
				dp[i] -= m;
				m = 0;
				break;
			}
		}
		FOR(i, 0, 10) {
			total += dp[i] * i;
		}
		cout << total << endl;
	}
	
}

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
		int a, l;
		bool flag = true;
		
		int dp[21] = {};

		cin >> a >> l;
		if (l == 0) {
			break;
		}
		dp[0] = a;
		FOR(i, 1, 20) {
			int now = 0;
			int large = 0, small = 0;
			int tmp;
			int count[10] = {};
			int point[10] = {};
			tmp = dp[i - 1];
			while (tmp != 0) {
				count[tmp % 10]++;
				point[tmp % 10]++;
				tmp /= 10;
				now++;
			}
			count[0] += l - now;
			point[0] += l - now;
			FOR(t, 0, 9) {
				while (count[t] != 0) {
					small *= 10;
					small += t;
					count[t]--;
				}
			}
			RFOR(t, 9, 0) {
				while (point[t] != 0) {
					large *= 10;
					large += t;
					point[t]--;
				}
			}
			dp[i] = large - small;
		}
		FOR(i, 1, 20) {
			FOR(t, 0, i - 1) {
				if (dp[i] == dp[t]) {
					cout << t << " " << dp[i] << " " << i-t << endl;
					flag = false;
					break;
				}
			}
			if (!flag) {
				break;
			}
		}
	}
	
}

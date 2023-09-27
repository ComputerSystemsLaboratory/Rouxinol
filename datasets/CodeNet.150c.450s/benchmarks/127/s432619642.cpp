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
	
	int m;
	
	string s;
	
	
	cin >> m;
	FOR(i, 1, m) {
		cin >> s;
		int pos = 0;
		int count = 0;
		string p, q;
		vector<string>dp(1000,"-");
		FOR(t, 1, s.size() - 1) {
			p = s.substr(0, t);
			q = s.substr(t);
			dp[pos] = p + q;
			pos++;
			dp[pos] = q + p;
			pos++;
			reverse(p.begin(), p.end());
			dp[pos] = p + q;
			pos++;
			dp[pos] = q + p;
			pos++;
			reverse(q.begin(), q.end());
			dp[pos] = p + q;
			pos++;
			dp[pos] = q + p;
			pos++;
			reverse(p.begin(), p.end());
			dp[pos] = p + q;
			pos++;
			dp[pos] = q + p;
			pos++;
		}
		/*FOR(u, 0, 999) {
			cout << dp[u] << endl;
		}*/
		sort(dp.begin(), dp.end());
		FOR(u, 0, 999) {
			FOR(r, u + 1, 999) {
				if (dp[u] == dp[r]) {
					dp[r] = "-";
				}
			}
		}
		FOR(u, 0, 999) {
			if (dp[u] != "-") {
				count++;
			}
		}
		cout << count << endl;
	}

}

#include <iostream>
#include <algorithm>

using namespace std;
typedef long long ll;

#define REP(i,n) for(ll i=0;i<(ll)n; ++i)

ll table[1000000];
ll pollock[1000001];
ll dp[1000001];
int main() {
	//freopen("Text.txt", "r", stdin);
	
	ll size = 0;
	{
		ll i = 0;
		table[0] = 0;
		while (1000001 > table[i]) {
			i++;
			table[i] = i*(i + 1)*(i + 2) / 6;
		}
		size = i;
	}

	{
		pollock[0] = 0;
		ll current_i = 0;
		REP(i, 1000001) {
			if (i == 0) continue;
			if (table[current_i + 1] == i) {
				pollock[i] = 1; current_i++;
				continue;
			}

			ll minimum = 1000001;
			for (ll j = 1; j <= current_i; j += 1) {
				minimum = min(pollock[i - table[j]] + 1, minimum);
			}
			pollock[i] = minimum;
		}
	}

	{
		dp[0] = 0;
		ll current_i = -3;
		REP(i, 1000001) {
			if (i == 0) continue;
			if (table[current_i + 4] == i) {
				current_i += 4; dp[i] = 1;
				continue;
			}

			ll minimum = 1000001;
			for(ll j=1; j<=current_i; j+=4) {
				minimum = min(dp[i - table[j]]+1, minimum);
			}
			dp[i] = minimum;
		}
	}

	while (true) {
		int n;
		cin >> n;
		if (n==0) break;
		
		cout << pollock[n] << " " << dp[n] << endl;
	}

}
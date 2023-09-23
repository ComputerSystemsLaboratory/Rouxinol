#include <iostream>

using namespace std;

typedef long long ll;

int main() {
	ll dp[34] = {1};
	for (int i = 0; i < 31; i++) {
		for (int j = 1; j < 4; j++) {
			dp[i+j] += dp[i];
		}
	}
	ll n;
	while (cin >> n) {
		if (!n) { break; }
		if (!(dp[n] % 3650)) {
			cout << int(dp[n] / 3650); 
		} else {
			cout << int(dp[n] / 3650 + 1);
		}
		cout << endl;
	} 
	return 0;
} 


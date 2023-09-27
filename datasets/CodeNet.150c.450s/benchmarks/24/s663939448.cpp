#include <iostream>

using namespace std;

int main(){
	long long n, m;
	while (1){
		cin >> n >> m;
		if (n == 0 && m == 0) break;
		long long dp[11] = { 0 };
		long long d, p;
		for (int i = 0; i < n; i++){
			cin >> d >> p;
			dp[p] += d;
		}
		long long sum = 0;
		for (int i = 10; i >= 0; i--){
			if (i != 0 && m != 0){
				int x = m - dp[i];
				if (x < 0){
					x *= -1;
					dp[i] = x;
					m = 0;
				}
				else{
					m -= dp[i];
					dp[i] = 0;
				}
			}
			sum += dp[i] * i;
		}
		cout << sum << endl;
	}
	return 0;
}
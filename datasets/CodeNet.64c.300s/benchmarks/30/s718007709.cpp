#include<iostream>
#include<algorithm>
using namespace std;
#define INF ( 1 << 30 )
int main() {
	int dp[1000], tmp[] = { 500,100,50,10,5,1 }, n;
	fill_n(dp, 1000, INF);
	dp[0] = 0;
	for (int i = 0; i < 1000; i++) {
		for (int j = 0; j < 6; j++) {
			if (i - tmp[j] >= 0) dp[i] = min(dp[i], dp[i - tmp[j]] + 1);
		}
	}
	while (cin >> n, n) cout << dp[1000 - n] << endl;
}
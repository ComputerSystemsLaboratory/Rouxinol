#include <bits/stdc++.h>

using namespace std;

#define N 1000000

int main() {
	int dp[N] = {0}, dp_odd[N] = {0};

	for(int i = 1; i < N; i++)
		dp[i] = dp_odd[i] = N;

	for(int i = 1; i < N; i++) {
		int t = i*(i+1)*(i+2)/6;
		if(t > N) break;
		for(int j = t; j < N; j++) dp[j] = min(dp[j], dp[j-t]+1);
		if(t%2 == 1) for(int j = t; j < N; j++) dp_odd[j] = min(dp_odd[j], dp_odd[j-t]+1);
	}

	int n;
	while(cin >> n && n) {
		cout << dp[n] << " " << dp_odd[n] << endl;
	}


	return 0;
}
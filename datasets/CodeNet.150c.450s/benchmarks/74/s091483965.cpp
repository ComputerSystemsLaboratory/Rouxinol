#include <iostream>
using namespace std;
int main(){
	int n, m;
	cin >> n >> m;
	int c[m], dp[n+1];
	for (int i = 0; i < m; ++i){
		cin >> c[i];
	}
	for (int i = 0; i < n + 1; ++i){
		dp[i] = n + 1;
	}
	dp[0] = 0;
	while(dp[n] == n + 1){
		for (int i = 0; i < m; ++i){
			for (int j = 0; j < n; ++j){
				if (dp[j] < n + 1 && j + c[i] < n + 1){
					dp[j+c[i]] = min(dp[j+c[i]], dp[j] + 1);
				}
			}
		}
	}
	cout << dp[n] << endl;
	return 0;
}
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
typedef long long ll;

ll a[110];
// dp[i][j]???i???????????§??§j??¨????????????????????°
ll dp[110][21];

int main(){
	cin.tie(0);
	ios::sync_with_stdio(false);

	int n;
	cin >> n;

	for(int i = 0; i < n; ++i){
		cin >> a[i];
	}

	dp[0][a[0]] = 1;
	for(int i = 1; i < n - 1; ++i){
		for(int j = 0; j <= 20; ++j){
			ll p = j + a[i];
			if(p >= 0 && p <= 20){
				dp[i][p] += dp[i - 1][j];
			}

			ll m = j - a[i];
			if(m >= 0 && m <= 20){
				dp[i][m] += dp[i - 1][j];
			}
		}
	}

	cout << dp[n - 2][a[n - 1]] << endl;
	/*
	for(int i = 0; i < n - 1; ++i){
		for(int j = 0; j <= 20; ++j){
			cout << dp[i][j] << " ";
		}
		cout << endl;
	}
*/
	return 0;
}
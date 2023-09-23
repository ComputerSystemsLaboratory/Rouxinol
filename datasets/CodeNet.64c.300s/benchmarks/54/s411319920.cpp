#include<iostream>
#include<vector>
#include<list>
#include<string>
#include<algorithm>
#include<map>
using namespace std;
long long dp[100][21];
int main() {
	int n;
	cin >> n;
	long long a[100];
	for (int i = 0; i< n; i++) {
		cin >> a[i];
	}
	n--;
	for (int i = 0; i < n; i++)fill(dp[i], dp[i] + 21, 0);
	dp[0][a[0]]++;
	for (int i = 1; i < n; i++) {
		for (int j = 0; j <= 20; j++) {
			if (j <= 20-a[i]) {
				dp[i][j] += dp[i - 1][j + a[i]];
			}
			if (j >= a[i]) {
				dp[i][j] += dp[i - 1][j - a[i]];
			}
		}
	}
	cout << dp[n - 1][a[n]] << endl;
	cin >> n;
}
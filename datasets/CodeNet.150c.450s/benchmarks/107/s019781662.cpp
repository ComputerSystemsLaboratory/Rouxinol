#include<bits/stdc++.h>
using namespace std;
int n, c, dp[1001][1001];
size_t a, b;
string s, t;
int main() {
	cin >> s >> t;
	a = s.length(), b = t.length();
	for (int i = 1; i <= a; ++i) dp[i][0] = i;
	for (int i = 1; i <= b; ++i) dp[0][i] = i;
	for (int i = 0; i < a; ++i) {
		for (int j = 0; j < b; ++j) {
			if (s[i]==t[j]) c = 0; else c = 1;
			dp[i+1][j+1] = min(dp[i][j+1]+1, min(dp[i+1][j]+1, dp[i][j]+c));
		}
	}
	cout << dp[a][b] << "\n";
}
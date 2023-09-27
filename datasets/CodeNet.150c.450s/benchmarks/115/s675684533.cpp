#include <string>
#include <iostream>
#include <algorithm>
using namespace std;
int q, dp[1007][1007]; string s, t;
int main() {
	cin >> q;
	while(q--) {
		cin >> s >> t;
		for(int i = 0; i < s.size(); i++) {
			for(int j = 0; j < t.size(); j++) {
				dp[i + 1][j + 1] = (s[i] == t[j] ? dp[i][j] + 1 : max(dp[i][j + 1], dp[i + 1][j]));
			}
		}
		cout << dp[s.size()][t.size()] << endl;
	}
}
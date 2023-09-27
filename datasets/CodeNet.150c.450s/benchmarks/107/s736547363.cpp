#include <bits/stdc++.h>

using namespace std;

template<class T>
int Levenshtein(const T& a, const T& b) {
    vector<vector<int>> dp(a.size() + 1, vector<int>(b.size() + 1, INT_MAX));
    for (int i = 0; i <= a.size(); i++) dp[i][0] = i;
    for (int i = 0; i <= b.size(); i++) dp[0][i] = i;
    for (int i = 0; i < a.size(); i++) {
        for (int j = 0; j < b.size(); j++) {
			dp[i+1][j+1] = min({dp[i+1][j] + 1, dp[i][j+1] + 1, dp[i][j] + (a[i] != b[j])});
        }
    }
    return dp[a.size()][b.size()];
}

int main() {
    string a, b;
	cin >> a >> b;
	cout << Levenshtein(a, b) << endl;
}

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
#define IOI 101
#define IOIOIOIOI 101010101
int dp[10 * IOI][10 * IOI];
string s, t;
int main() {
    for (int i = 0; i < 10 * IOI; i++) {
        for (int j = 0; j < 10 * IOI; j++) {
            dp[i][j] = IOIOIOIOI;
        }
    }
    cin >> s; cin >> t;
    for (int i = 0; i <= s.size(); i++)dp[i][0] = i;
    for (int i = 0; i <= t.size(); i++)dp[0][i] = i;
    for (int i = 0; i < s.size(); i++) {
        for (int j = 0; j < t.size(); j++) {
            dp[i + 1][j + 1] = min(dp[i][j], min(dp[i + 1][j], dp[i][j + 1])) + 1;
            if (s[i] == t[j]) dp[i + 1][j + 1] = min(dp[i + 1][j + 1], dp[i][j]);
        }
    }
    cout << dp[s.size()][t.size()] << endl;
    return 0;
}

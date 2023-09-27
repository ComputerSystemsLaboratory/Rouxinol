#include <sstream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <iostream>
#include <utility>
#include <set>
#include <cctype>
#include <queue>
#include <stack>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <climits>
using namespace std;
#define INF 100000000

typedef long long ll;
const int dx[] = {1, 0, -1, 0};
const int dy[] = {0, 1, 0, -1};
const int MAXN = 1010;

int dp[MAXN][MAXN];

int main(void) {
    string s1, s2;
    cin >> s1;
    cin >> s2;
    for (int i = 0; i <= s1.size(); i++) {
        dp[i][0] = i;
    }
    for (int i = 0; i <= s2.size(); i++) {
        dp[0][i] = i;
    }
    for (int i = 1; i <= s1.size(); i++) {
        for (int j = 1; j <= s2.size(); j++) {
            int cost;
            if (s1[i-1] == s2[j-1]) cost = 0;
            else cost = 1;
            dp[i][j] = dp[i-1][j-1] + cost;
            dp[i][j] = min(dp[i][j], dp[i][j-1] + 1);
            dp[i][j] = min(dp[i][j], dp[i-1][j] + 1);
//            cout << dp[i][j] << "  ";
        }
//        cout << endl;
    }
    cout << dp[s1.size()][s2.size()] << endl;
    return 0;
}
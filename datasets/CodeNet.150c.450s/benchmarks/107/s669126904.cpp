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
using namespace std;
#define MAX 1010
string s1, s2;
int dp[MAX][MAX];
int main(void) {
    cin >> s1;
    cin >> s2;
    int size1 = s1.size(), size2 = s2.size();
    for (int i = 0; i <= size1; i++) dp[i][0] = i;
    for (int i = 0; i <= size2; i++) dp[0][i] = i;
    for (int i = 1; i <= size1; i++) {
        for (int j = 1; j <= size2; j++) {
            int cost;
            if (s1.substr(i-1, 1) == s2.substr(j-1, 1)) cost = 0;
            else cost = 1;
            dp[i][j] = min(min(dp[i-1][j-1] + cost, dp[i-1][j] + 1), dp[i][j-1] + 1);
        }
    }
    cout << dp[size1][size2] << endl;
    return 0;
}
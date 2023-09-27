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
#define MAXN 1000000

typedef long long ll;
const int dx[] = {1, 0, -1, 0};
const int dy[] = {0, 1, 0, -1};

int dp[MAXN+1];
int dp2[MAXN+1];

int main(void) {
    for (int j = 0; j <= MAXN; j++) {
        dp[j] = INF;
        dp2[j] = INF;
    }
    dp[0] = 0; dp[1] = 1;
    dp2[0] = 0; dp2[1] = 1;
    // DP
    for (int i = 1; i < 200; i++) {
        int plus = i * (i+1) * (i+2) / 6;
        for (int j = 1; j <= MAXN; j++) {
            if (j - plus >= 0) dp[j] = min(dp[j], dp[j-plus] + 1);
            else dp[j] = dp[j];
        }
        if (plus % 2 == 1) {
            for (int j = 1; j <= MAXN; j++) {
                if (j - plus >= 0) dp2[j] = min(dp2[j], dp2[j-plus] + 1);
                else dp2[j] = dp2[j];
            }
        } else {
            for (int j = 1; j <= MAXN; j++) {
                dp2[j] = dp2[j];
            }
        }
    }
//    for (int i = 1; i < 5; i++) {
//        for (int j = 1; j <= 10; j++) {
//            cout << dp2[i][j] << " ";
//        }
//        cout << endl;
//    }
    int n;
    while (1) {
        cin >> n;
        if (n == 0) break;
        cout << dp[n] << " " << dp2[n] << endl;
    }
    return 0;
}
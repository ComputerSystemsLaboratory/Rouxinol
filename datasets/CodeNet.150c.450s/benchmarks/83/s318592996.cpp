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

int N, W;
const int MAXN = 110;
const int MAXW = 10010;
int v[MAXN], w[MAXN];
int dp[MAXN][MAXW];

int main(void) {
    cin >> N >> W;
    for (int i = 1; i <= N; i++) {
        cin >> v[i]>> w[i];
    }
    for (int i = 1; i <= N; i++) {
        for (int j = 0; j <= W; j++) {
            if (j - w[i] >= 0) {
                dp[i][j] = max(dp[i-1][j], dp[i-1][j-w[i]] + v[i]);
            } else {
                dp[i][j] = dp[i-1][j];
            }
//            cout << dp[i][j] << "  ";
        }
//        cout << endl;
    }
    int ret = 0;
    for (int i = 0; i <= W; i++) {
        ret = max(ret, dp[N][i]);
    }
    cout << ret << endl;
    return 0;
}
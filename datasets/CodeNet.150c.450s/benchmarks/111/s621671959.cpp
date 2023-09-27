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
#define MAXN 128
typedef long long ll;

ll dp[MAXN][21];
int N, a[MAXN];

int main(void) {
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> a[i];
    }
    dp[0][a[0]] = 1;
    for (int i = 0; i < N-1; i++) {
        for (int j = 0; j <= 20; j++) {
            if (j - a[i+1] >= 0) {
                dp[i+1][j] += dp[i][j-a[i+1]];
            }
            if (j + a[i+1] <= 20) {
                dp[i+1][j] += dp[i][j+a[i+1]];
            }
        }
    }
    if (0 <= a[N-1] && a[N-1] <= 20) cout << dp[N-2][a[N-1]] << endl;
    else cout << 0 << endl;
    return 0;
}
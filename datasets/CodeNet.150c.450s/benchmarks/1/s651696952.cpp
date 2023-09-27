#include <iostream>
#include <string>
#include <vector>
#include <cstring>
#include <climits>
#include <algorithm>
#include <map>

using namespace std;

const int INF = 1e9 + 1;
int n, a[100000], dp[100000];

int main() {
    cin >> n;
    for (int i=0; i<n; ++i) cin >> a[i];
    
    for (int i=0; i<n; ++i) dp[i] = INF;
    
    int res = 1;
    for (int i=0; i<n; ++i) {
        int k = lower_bound(dp, dp+n, a[i]) - dp;
        dp[k] = a[i];
        res = max(res, k+1);
    }

    cout << res << endl;
    
    return 0;
}
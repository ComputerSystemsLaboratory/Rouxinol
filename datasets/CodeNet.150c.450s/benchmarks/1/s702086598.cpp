#include <iostream>
#include <algorithm>
using namespace std;

const int INF = 1e9+1;
int n, a, dp[100001];

int main() {    
    ios::sync_with_stdio(false);
    cin >> n;

    fill(dp, dp+n, INF);

    int l = 1;
    for (int i=0; i<n; ++i) {
        cin >> a;
        int k = lower_bound(dp, dp+l, a) - dp;
        dp[k] = a;
        l = max(l, k+1);
    }

    cout << l << endl;
    return 0;
}
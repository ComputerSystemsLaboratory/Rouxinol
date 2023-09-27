#include <iostream>
#include <algorithm>

using namespace std;

const int INF = 1e9 + 1;
int n, a, dp[100001];

int main() {    
    cin >> n;
    for (int i=0; i<n; ++i) dp[i] = INF;

    for (int i=0; i<n; ++i) {
        cin >> a;
        *lower_bound(dp, dp+n, a) = a;
    }

    cout << lower_bound(dp, dp+n, INF) - dp << endl;
    
    return 0;
}
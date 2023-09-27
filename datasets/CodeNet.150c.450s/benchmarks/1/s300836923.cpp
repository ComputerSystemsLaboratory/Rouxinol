#include <algorithm>
#include <cstring>
#include <iostream>
using namespace std;
const int Max_N = 100005;
const int INF = 0x7fffffff;
int n;
int a[Max_N];
int dp[Max_N];

int main() {
    cin >> n;
    for (int i = 0; i < n; ++i)
        cin >> a[i];
    fill(dp, dp + n, INF);
    for (int i = 0; i < n; ++i)
        *lower_bound(dp, dp + n, a[i]) = a[i];
    cout << (find(dp, dp + n, INF) - dp) << endl;
    return 0;
}

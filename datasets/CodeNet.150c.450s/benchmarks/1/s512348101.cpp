#include <bits/stdc++.h>

using namespace std;

int main() {

    int n, len = 0;

    cin >> n;

    int num[n], dp[n];

    for(int i = 0; i < n; ++i) {
        cin >> num[i];
    }

    dp[0] = num[0];
    for(int i = 1; i < n; ++i) {
        if(dp[len] < num[i]) {
            dp[++len] = num[i];
        } else {
            *lower_bound(dp, dp + len, num[i]) = num[i];
        }
    }

    cout << len + 1 << endl;

}
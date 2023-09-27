#include <bits/stdc++.h>

using namespace std;

#define MAX_N 101
#define MAX_M 21
typedef long long ll;

int main()
{
    int N;
    cin >> N; N--;
    vector<int> a(N);
    for (int i = 0; i < N; i++) {
        cin >> a[i];
    }

    int x;
    cin >> x;
    
    ll dp[MAX_N][MAX_M] = {{}};
    dp[0][a[0]] = 1;

    for (int i = 1; i < N; i++) {
        for (int j = 0; j <= 20; j++) {
            if (j - a[i] >= 0) {
                dp[i][j-a[i]] += dp[i-1][j];
            }
            if (j + a[i] <= 20) {
                dp[i][j+a[i]] += dp[i-1][j];
            }
        }
    }
    cout << dp[N-1][x] << endl;
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

long long n;
long long r[110], c[110];
vector<vector<long long>> dp(110, vector<long long>(110, -1));
long long rec(long long l, long long m){
    if(dp[l][m] != -1) return dp[l][m];
    if(l + 1 == m) return dp[l][m] = r[l] * c[l] * c[m];
    else if(l == m) return dp[l][m] = 0;
    else{
        long long ans = 1e9;
        for (long long i = l; i < m; i++)
        {
            long long len = rec(l, i) + r[l] * c[i] * c[m] + rec(i + 1, m);
            ans = min(ans , len);
        }
        return dp[l][m] = ans;
    }
}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> r[i] >> c[i];
    }

    int ans = rec(0, n-1);
    cout << ans << endl;
}

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> c(m);
    for(int i=0; i<m; i++) cin >> c[i];
    
    int dp[n+1];
    for(int i=0; i<=n; i++) dp[i]=INT_MAX;
    dp[0]=0;
    dp[1]=1;
    
    for(int i=2; i<=n; i++){
        for(int j=0; j<m; j++){
            if((i-c[j])>=0) dp[i] = min(dp[i], dp[i-c[j]]+1);
        }
    }
    
    cout << dp[n] << endl;
    
}


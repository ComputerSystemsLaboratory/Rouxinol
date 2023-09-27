typedef long long ll;
typedef long double ld;
#include <bits/stdc++.h>
using namespace std;

void solve(){
    ll n;
    std::cin >> n;
    vector<ll> a(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }

    string s;
    std::cin >> s;
    
    vector<vector<ll>> dp(n+1);
    dp[n] = {0};

    for (int i = n-1; i >= 0; i--) {
        ll v = a[i];
        for (auto e : dp[i+1]) {
            v = min(v,v^e);
        }
        if(v==0){
            dp[i] = dp[i+1];
        }else{
            if(s[i]=='0'){
                dp[i+1].push_back(v);
                sort(dp[i+1].rbegin(),dp[i+1].rend());
                for (auto e : dp[i+1]) {
                    dp[i].push_back(e);
                }
            }else{
                std::cout << 1 << std::endl;
                return;
            }    
        }
    }
    std::cout << 0 << std::endl;
}

int main() {
    int t;
    std::cin >> t;
    for (int iii = 0; iii < t; iii++) {
        solve();
    }
}

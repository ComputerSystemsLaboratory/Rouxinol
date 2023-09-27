#include <bits/stdc++.h>
#include <unistd.h>
using namespace std;
typedef long long ll;
const ll MOD = 1e9 + 7/*998244353*/;
const ll INF = 1LL << 60;
ll mod_pow(ll, ll, ll); ll mod_fact(ll, ll); ll mod_inv(ll, ll); ll gcd(ll, ll); ll lcm(ll, ll);
//
int main(){
    string s;
    string t;
    cin >> s >> t;
    vector<vector<ll>> dp(s.size() + 1, vector<ll>(t.size() + 1));
    for(int i = 0; i <= s.size(); i++) dp[i][0] = i;
    for(int i = 0; i <= t.size(); i++) dp[0][i] = i;
    for(int i = 1; i <= s.size(); i++){
        for(int j = 1; j <= t.size(); j++){
            if(s[i - 1] == t[j - 1]) dp[i][j] = dp[i - 1][j - 1];
            else{
                dp[i][j] = dp[i - 1][j - 1] + 1;
                dp[i][j] = min(dp[i][j], min(dp[i - 1][j], dp[i][j - 1]) + 1);
            }
        }
    }
    /*for(int i = 0; i <= s.size(); i++){
        cout << "\n";
        for(int j = 0; j <= t.size(); j++){
            cout << dp[i][j] << " ";
        }
    }*/
    cout << dp[s.size()][t.size()] << "\n";
}

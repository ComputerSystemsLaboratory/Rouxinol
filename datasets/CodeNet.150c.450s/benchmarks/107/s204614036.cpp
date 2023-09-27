#include <bits/stdc++.h>
using namespace std;
int const MOD = 1000000007;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

int dp[1001][1001];

int main(){
    cin.tie(0); ios::sync_with_stdio(false);

    string s1,s2; cin>>s1>>s2;
    fill(dp[0],dp[1001],MOD);
    for (int i = 0; i < s1.size(); i++)dp[i][0]=i;
    for (int i = 0; i < s2.size(); i++)dp[0][i]=i;
    for (int i = 0; i < s1.size(); i++){
        for (int j = 0; j < s2.size(); j++){
            chmin(dp[i+1][j+1],min(dp[i][j]+(s1[i]!=s2[j]?1:0),min(dp[i+1][j]+1,dp[i][j+1]+1)));
        }
    }
    cout<<dp[s1.size()][s2.size()]<<'\n';
}

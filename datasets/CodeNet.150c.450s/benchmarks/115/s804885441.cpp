#include <bits/stdc++.h>
using namespace std;

constexpr int max_len = 1024;

int lcs(const string &s,const string &t){
    const int m=s.size(),n=t.size();
    vector<vector<int>> dp(m+1,vector<int>(n+1,0));

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(s[i]==t[j])  dp[i+1][j+1] = dp[i][j] + 1;
            else            dp[i+1][j+1] = max(dp[i+1][j],dp[i][j+1]);
        }
    }

    return dp[m][n];
}

int main(){
    int n;cin>>n;
    for(int i=0;i<n;i++){
        string s,t;
        cin >> s >> t;
        cout << lcs(s,t) << endl;
    }
}
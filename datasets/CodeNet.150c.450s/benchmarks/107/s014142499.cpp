
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(string& s1, string& s2){

    vector<vector<ll> >  dp(s1.length()+1, vector<ll>(s2.length()+1,INT_MAX));

    dp[0][0] = 0;
    for (ll i = 0; i < s1.length(); i++)
    {
        dp[i+1][0] = i+1;
    }
    for (ll i = 0; i < s2.length(); i++)
    {
        dp[0][i+1] = i+1;
    }

    for (ll i = 1; i < s1.length()+1; i++)
    {
        for (ll j = 1; j < s2.length()+1; j++)
        {
            dp[i][j] = min(dp[i][j-1] + 1, dp[i-1][j] + 1 );
            dp[i][j] = min(dp[i][j], dp[i-1][j-1] + (s1[i-1] == s2[j-1] ? 0:1));
        }
    }

/*
    for (ll i = 0; i < dp.size(); i++)
    {
        for (ll j = 0; j < dp[i].size(); j++)
        {
            cout << dp[i][j] << " ";
        }
        cout << endl;
        
    }
   */ 

    cout << dp[s1.length()][s2.length()] << endl;

}

int main(){
    string s1,s2;
    cin >> s1 >> s2;
    solve(s1,s2);

    return 0;
}

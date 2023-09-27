#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<climits>
#include<iostream>
#include<string>
#include<stack>
#include<queue>
#include<vector>
#include<map>
#include<set>
#include<algorithm>
#include<numeric>

#define rep(n) for(int i=0;i<n;i++)
#define repp(j, n) for(int j=0;j<n;j++)
#define reppp(i, m, n) for(int i=m;i<=n;i++)
#define all(c) c.begin(), c.end()
#define rall(c) c.rbegin(), c.rend()
#define MOD 1000000007
#define EPS 1e-9
#define ll long long
#define Pll pair<ll, ll>
#define Pii pair<int, int>
 
using namespace std;
struct edge{int from, to; ll cost;};

int edit_distance(string s, string t){
    int n = (int)s.length(), m = (int)t.length();
    vector< vector<int> > dp(n+1, vector<int>(m+1, 1000000));
    dp[0][0] = 0;
    rep(n) dp[i+1][0] = i+1;
    rep(m) dp[0][i+1] = i+1;
    rep(n){
        repp(j, m){
            // replace
            if(s[i] == t[j]){
                dp[i+1][j+1] = min(dp[i+1][j+1], dp[i][j]);
            }else{
                dp[i+1][j+1] = min(dp[i+1][j+1], dp[i][j] + 1);
            }
            // insert
            dp[i+1][j+1] = min(dp[i+1][j+1], dp[i+1][j] + 1);
            // delete
            dp[i+1][j+1] = min(dp[i+1][j+1], dp[i][j+1] + 1);
        }   
    }
    return dp[n][m];
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0);

    string s,t;
    cin >> s >> t;
    cout << edit_distance(s, t) << endl;
}
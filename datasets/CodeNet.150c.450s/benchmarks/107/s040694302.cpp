#include <bits/stdc++.h>
using namespace std;
 

#define int long long
 
#define rep(i,n) for(int i=0, i##_len=(n); i<i##_len; ++i)

#define YES puts("YES")
#define Yes puts("Yes")
#define NO  puts("NO")
#define No  puts("No")
#define ALL(v) (v).begin(), (v).end()
int gcd(int a, int b) { return b ? gcd(b, a % b) : a; }
template<class T> bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T> bool chmin(T &a, const T &b) { if (a>b) { a=b; return 1; } return 0; }

//*
#define mod 1000000007 /*/
#define mod 998244353 //*/

typedef pair<int, int> P;
#define INF (1LL<<60)



void solve(){
    string S, T;
    cin >> S >> T;
    int s = S.length();
    int t = T.length();
        
    vector<vector<int>> dp(s+1, vector<int>(t+1, INF));
    
    dp[0][0] = 0;
    for(int i=1; i<=s; i++) dp[i][0] = i;
    for(int i=1; i<=t; i++) dp[0][i] = i;
    
    for(int i=0; i<s; i++){
        for(int j=0; j<t; j++){
            if(S[i]==T[j])
                dp[i+1][j+1] = min({dp[i][j], dp[i][j+1] + 1, dp[i+1][j] + 1});
            else
                dp[i+1][j+1] = min({dp[i][j] + 1, dp[i][j+1] + 1, dp[i+1][j] + 1});
        }
    }
    cout << dp[s][t] << endl;
        
}


signed main(){
    cout << fixed << setprecision(18);
    cerr << fixed << setprecision(18);
    solve();
}


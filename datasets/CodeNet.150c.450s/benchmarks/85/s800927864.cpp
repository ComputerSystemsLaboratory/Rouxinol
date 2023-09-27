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
    int N;
    cin >> N;
    vector<int> p(N+1,0);
    for(int i=0; i<N; i++)
        cin >> p[i] >> p[i+1];
    
    vector<vector<int>> dp(N+1, vector<int>(N+1,0));
    
    for(int w=2; w<=N; w++){
        for(int i=1; i<=N-w+1; i++){
            int j=i+w-1;
            dp[i][j] = INF;
            for(int k=i; k<=j-1; k++){
                dp[i][j] = min(dp[i][j], dp[i][k] + dp[k+1][j] + p[i-1]*p[k]*p[j]);
            }
        }
    }
    cout << dp[1][N] << endl;
}


signed main(){
    cout << fixed << setprecision(18);
    cerr << fixed << setprecision(18);
    solve();
}


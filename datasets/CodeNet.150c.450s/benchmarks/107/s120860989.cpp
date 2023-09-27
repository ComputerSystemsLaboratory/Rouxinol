#include <bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < (n); ++i)
#define rrep(i,n) for(int i = 1; i <= (n); ++i)
#define drep(i,n) for(int i = (n)-1; i >= 0; --i)
#define srep(i,s,t) for (int i = s; i < t; ++i)
#define rng(a) a.begin(),a.end()
using namespace std;
typedef long long int ll;
typedef pair<int,int> P;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<ll> vl;
typedef vector<P> vp;
#define dame { puts("-1"); return 0;}
#define yn {puts("Yes");}else{puts("No");}
#define MAX_N 200005

int dp[1100][1100];

int main() {
    string s, t;
    cin >> s >> t;
    int n = s.size();
    int m = t.size();

    rep(i,n+1){
        rep(j,m+1){
            if(i == 0){
                dp[i][j] = j;
            }else if(j == 0){
                dp[i][j] = i;
            }else{
                if(s[i-1] == t[j-1]){
                    dp[i][j] = dp[i-1][j-1];
                }else{
                    dp[i][j] = min(dp[i-1][j-1], min(dp[i-1][j], dp[i][j-1])) + 1;
                }
            }
        }
    }
    /*
    rep(i,n+1){
        rep(j,m+1){
            cout << dp[i][j];
        }
        cout << endl;
    }
    */
    cout << dp[n][m] << endl;
    return 0;
}
 
 


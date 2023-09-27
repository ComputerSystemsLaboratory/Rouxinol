#include<bits/stdc++.h>
#define range(i,a,b) for(int i = (a); i < (b); i++)
#define rep(i,b) for(int i = 0; i < (b); i++)
#define all(a) (a).begin(), (a).end()
#define show(x)  cerr << #x << " = " << (x) << endl;
#define debug(x) cerr << #x << " = " << (x) << " (L" << __LINE__ << ")" << " " << __FILE__ << endl;
const int INF = 2000000000;
using namespace std;

int main(){
    int n, m, c[21];
    cin >> n >> m;
    rep(i,m){ cin >> c[i]; }
    sort(c, c + m, greater<int>());

    int dp[50005];
    rep(i,50005) dp[i] = INF;
    dp[0] = 0;
    rep(i,m){
        rep(j,n + 1){
            if(j + c[i] <= n){
                dp[j + c[i]] = min(dp[j + c[i]], dp[j] + 1);
            }
        }
    }
    cout << dp[n] << endl;
}
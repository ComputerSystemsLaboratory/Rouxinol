#include<bits/stdc++.h>
#define range(i,a,b) for(int i = (a); i < (b); i++)
#define rep(i,b) for(int i = 0; i < (b); i++)
#define all(a) (a).begin(), (a).end()
#define show(x)  cerr << #x << " = " << (x) << endl;
const int INF = 1e8;
using namespace std;

int main(){
    int n;
    cin >> n;
    n--;

    long long a[105], ans;
    rep(i,n) cin >> a[i];
    cin >> ans;

    long long dp[25][105] = {{0}}; //テヲツ閉ーテ・ツ?、テ」ツ??ゥツ?堙」ツつ?
    dp[a[0]][0] = 1;
    range(i,1,n){
        rep(j,21){
            //if(dp[j][i - 1] == 0) continue;
            if(j - a[i] >= 0){
                dp[j - a[i]][i] += dp[j][i - 1];
            }
            if(j + a[i] <= 20){
                dp[j + a[i]][i] += dp[j][i - 1];
            }
        }
        //rep(j,21){ cout << dp[j][i]<<' '; } cout << endl;
    }

    cout << dp[ans][n - 1] << endl;
}
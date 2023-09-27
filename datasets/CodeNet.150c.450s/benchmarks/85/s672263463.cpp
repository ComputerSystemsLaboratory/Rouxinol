#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(ll i=0; i<n; i++)
typedef long long ll;
typedef long long unsigned int llu;
ll MOD = 1000000007;
ll INF = 1000000009;

int a[110];
int b[110];
int dp[110][110];
/*
dp[i][j]:行列i~jまでの乗算回数の最小値
dp[i][j]=min(dp[i-1][j]+(a[i-1]*b[i-1]*[b[j]])), dp[i][j+1]+(a[i]*a[j+1]*b[j+1]))
*/

void solve(){

    int n;
    cin >> n;
    rep(i,n){
      cin >> a[i] >> b[i];
    }
    rep(i,110){
      rep(j,110){
          dp[i][j]=0;
      }
    }
    
    for(int i=1; i<n; i++){
        dp[i-1][i]=a[i-1]*b[i-1]*b[i];
    }
    

    for(int i=2; i<n; i++){
        for(int j=0; j<n-i; j++){
            int ans = INF;
            int x = j;
            int y = i+j;
            for(int k=0; k<y-x; k++){
                ans = min(int(ans), int(dp[x][x+k]+dp[x+k+1][y]+a[x]*b[x+k]*b[y]));
            }
            dp[j][i+j]=ans;
        }
    }

    /*
    rep(i,n){
        rep(j,n){
            cout << dp[i][j] << " ";
        }
        cout << endl;
    }
    */

    cout << dp[0][n-1] << endl;

}


int main(){
  cin.tie(0);
  ios::sync_with_stdio(false);
  solve();
  return 0;
}


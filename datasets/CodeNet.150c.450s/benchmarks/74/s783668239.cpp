#include <bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < n; i++)
#define PI       3.1415926535897932384626433832795028841971
#define INF      1000000000.0
#define EPS      1e-10
#define MOD      1000000007
using namespace std;
typedef long long ll;
typedef pair<double,double> P;
typedef pair<double,P> PQ;

int dp[50001];
int n;
int m;


int main(){
    rep(i,50001) dp[i] = MOD;
    cin >> n >> m;
    dp[0] = 0;
    rep(i,m){
        int c;
        cin >> c;
        for(int j = 0; j < n; j++){
            if(j+c > n) break;
            if(dp[j] == -1) continue;
            if(dp[j+c] < dp[j]+1) continue;
            dp[j+c] = dp[j]+1;
        }
    }
    cout << dp[n] << endl;
}
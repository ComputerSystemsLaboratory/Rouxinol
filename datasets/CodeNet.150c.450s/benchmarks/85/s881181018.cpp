#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define inf 1e9+7

int n;
ll dp[102][102];
ll p[102];

void init(){
    for(int i=0;i<=n;i++){
        for(int j=0;j<=n;j++){
            dp[i][j]=inf;
        }
        dp[i][i]=0;
    }
}

void cal(int l, int r){
    if(l>=r)return;
    if(dp[l][r]<inf)return;
    for(int k=l;k<r;k++){
        cal(l,k);
        cal(k+1,r);
        dp[l][r] = min(dp[l][r], dp[l][k]+dp[k+1][r]+p[l]*p[k+1]*p[r+1]);
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    cin >> n;
    init();
    cin >> p[0] >> p[1];
    ll a,b;
    for(int i=1;i<n;i++){
        cin >> a >> b;
        p[i+1]=b;
    }
    cal(0,n-1);
    cout << dp[0][n-1] << endl;
    return 0;
}


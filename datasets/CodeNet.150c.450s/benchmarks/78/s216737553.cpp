#include <iostream>
#include <vector>
typedef long long ll;
using namespace std;
ll MOD = 1e9+7;

ll dp[1000010];
ll dp2[1000010];
int main(void){
    ll n,i,j,k,h;
    std::vector<ll> v(200),v2(200);
    h=0;k=0;
    for(i=1;(i*(i+1)*(i+2)/6)<=1000000;i++){
        v[k++]=(i*(i+1)*(i+2)/6);
        if((i*(i+1)*(i+2)/6)%2)v2[h++]=(i*(i+1)*(i+2)/6);
    }
    ll vs = k;

    fill(dp,dp+(1000000+1),1000000);
        //cout << dp[0][0] << endl;
    dp[0]=0;

    for(i=1;i<=vs;i++){
        for(j=v[i-1];j<=1000000;j++){
            dp[j]=min(dp[j-v[i-1]]+1,dp[j]);
        }
    }

    vs = h;
    fill(dp2,dp2+(1000000+1),1000000);
    dp2[0]=0;
    for(i=1;i<=vs;i++){
        for(j=v2[i-1];j<=1000000;j++){
            dp2[j]=min(dp2[j-v2[i-1]]+1,dp2[j]);
        }
    }
    while(cin >> n && n){
        cout << dp[n] << " " << dp2[n] << endl;
    }
    return 0;
}


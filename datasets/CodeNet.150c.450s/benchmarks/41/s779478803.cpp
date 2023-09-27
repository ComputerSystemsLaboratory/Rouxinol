#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<ll, ll>;
const ll INF = 1001001001001001;
const double EPS = 1e-10;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    int v,e;
    cin>>v>>e;
    ll dp[v][v];
    for(int i=0;i<v;i++)for(int j=0;j<v;j++){
        if(i==j)dp[i][j]=0;
        else dp[i][j]=INF;
    }
    for(int i=0,s,t,d;i<e;i++){
        cin>>s>>t>>d;
        dp[s][t]=min(dp[s][t],(ll)d);
    }
    for(int k=0;k<v;k++){
        for(int i=0;i<v;i++){
            if(dp[i][k]==INF)continue;
            for(int j=0;j<v;j++){
                if(dp[k][j]==INF)continue;
                dp[i][j]=min(dp[i][j],dp[i][k]+dp[k][j]);
            }
        }
    }
    for(int i=0;i<v;i++){
        if(dp[i][i]<0){
            cout<<"NEGATIVE CYCLE"<<endl;
            return 0;
        }
    }
    for(int i=0;i<v;i++){
        for(int j=0;j<v;j++){
            if(j>0)cout<<' ';
            if(dp[i][j]==INF)cout<<"INF";
            else cout<<dp[i][j];
        }
        cout<<endl;
    }
}

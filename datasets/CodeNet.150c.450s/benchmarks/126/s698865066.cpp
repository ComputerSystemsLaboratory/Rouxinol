#include<bits/stdc++.h>

using namespace std;
#define rep(i,n) for(int i=0; i<n;i++)
#define vi vector<int>
int INF=1e8;

int main(){
    int a,b;
    while(cin>>a>>b,a+b){
        vector<vector<int> >dp(1001,vi(1001,0));
        int n; cin>>n;
        rep(i,n){
            pair<int,int> hoge; cin>>hoge.first>>hoge.second;
            dp[hoge.first][hoge.second]=-INF;
        }
        dp[1][1]=1;
        for(int i=1; i<=a;i++){
            for(int j=1;j<=b;j++){
                if(j-1>=0)dp[i][j]+=max(dp[i][j-1],0);
                if(i-1>=0)dp[i][j]+=max(dp[i-1][j],0);
            }
        }
       /* for(int i=0; i<=a;i++){
            for(int j=0;j<=b;j++)
                cout<<dp[i][j]<<" ";
            cout<<endl;
        }*/
        cout<<dp[a][b]<<endl;
    }
}
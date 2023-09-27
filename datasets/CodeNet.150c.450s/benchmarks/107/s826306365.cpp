#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(),(x).end()
const int mod=1000000007,MAX=10001,INF=1<<30;

int main(){

    string S,T;cin>>S>>T;
    int a=S.size(),b=T.size();
    
    int dp[a+1][b+1];
    
    for(int i=0;i<a+1;i++){
        for(int j=0;j<b+1;j++){
            dp[i][j]=INF;
        }
    }
    
    for(int i=0;i<a+1;i++){
        dp[i][0]=i;
    }
    for(int i=0;i<b+1;i++){
        dp[0][i]=i;
    }
    
    for(int i=1;i<=a;i++){
        for(int j=1;j<=b;j++){
            if(S[i-1]==T[j-1]){
                dp[i][j]=min({dp[i][j],dp[i-1][j]+1,dp[i][j-1]+1,dp[i-1][j-1]});
            }else{
                dp[i][j]=min({dp[i][j],dp[i-1][j]+1,dp[i][j-1]+1,dp[i-1][j-1]+1});
            }
        }
    }
    
    cout<<dp[a][b]<<endl;
}




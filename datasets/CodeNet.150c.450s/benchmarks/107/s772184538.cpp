#include<bits/stdc++.h>
using namespace std;
const int INF=1001001001;
string S,T;
int dp[1001][1001];
 
int main(){
    cin>>S>>T;
    for(int i=0;i<=S.size();i++)for(int j=0;j<=T.size();j++)dp[i][j]=INF;
 
    for(int i=0;i<=T.size();i++)dp[0][i]=i;
    for(int i=0;i<=S.size();i++)dp[i][0]=i;
 
    for(int i=0;i<S.size();i++){
        for(int j=0;j<T.size();j++){
            dp[i+1][j+1]=min(dp[i][j],min(dp[i+1][j],dp[i][j+1]))+1;
 
            if(S[i]==T[j])dp[i+1][j+1]=min(dp[i+1][j+1],dp[i][j]);
 
        }
    }
 
 
    cout<<dp[S.size()][T.size()]<<endl;
    return 0;
}

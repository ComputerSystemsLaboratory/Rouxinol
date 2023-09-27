#include <iostream>
using namespace std;
int dp[1001][1001],S,T;
string s,t;
int main() {
    cin>>s>>t;
    S=s.size();
    T=t.size();
    for(int i=0;i<=S;i++)dp[i][0]=i;
    for(int i=0;i<=T;i++)dp[0][i]=i;
    for(int i=1;i<=S;i++){
        for(int j=1;j<=T;j++){
            int m=min(dp[i][j-1]+1,dp[i-1][j]+1);
            if(s[i-1]==t[j-1]){
                dp[i][j]=min(m,dp[i-1][j-1]);
            }
            else dp[i][j]=min(m,dp[i-1][j-1]+1);
        }
    }
    cout<<dp[S][T]<<endl;
}


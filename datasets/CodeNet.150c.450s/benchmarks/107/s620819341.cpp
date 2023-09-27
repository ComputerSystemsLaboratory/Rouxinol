#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> P;

int dp[1145][1145];

int main(){
        string s1,s2;
        cin>>s1>>s2;
        int n=s1.size(),m=s2.size();
        for(int i=0;i<=n;i++){
                for(int j=0;j<=m;j++){
                        dp[i][j]=1e9;
                }
        }
        for(int i=0;i<=n;i++)dp[i][0]=i;
        for(int j=0;j<=m;j++)dp[0][j]=j;
        for(int i=1;i<=n;i++){
                for(int j=1;j<=m;j++){
                        dp[i][j]=min(dp[i][j],dp[i-1][j]+1);
                        dp[i][j]=min(dp[i][j],dp[i][j-1]+1);
                        dp[i][j]=min(dp[i][j],dp[i-1][j-1]+(s1[i-1]!=s2[j-1]));
                }
        }
        cout<<dp[n][m]<<endl;
        return 0;
}


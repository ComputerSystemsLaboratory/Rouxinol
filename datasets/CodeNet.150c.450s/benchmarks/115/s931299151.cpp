#include<bits/stdc++.h>

using namespace std;
int dp[1002][1002];
int main(){
    int T;
    cin>>T;
    while(T--){
        #ifdef LCS
        string s;
        cin>>s;
        int len=s.size();
        int *dp=new int[len+1];
        dp[0]=1;
        int ans=1;
        for(int i=1;i<len;i++){
            char ch=s[i];
            int cnt=0;
            for(int j=0;j<=i-1;j++){
                if(s[j]<ch) cnt=max(cnt,dp[j]);
            }
            dp[i]=cnt+1;
            ans=max(ans,dp[i]);
        }
        cout<<ans<<endl;
        #endif//LCS
        string s1,s2;
        cin>>s1>>s2;
        int len1=s1.size(),len2=s2.size();
        int len=max(len1,len2);
        for(int i=0;i<=len;i++) {
            dp[0][i]=0;
            dp[i][0]=0;
        }
        int ans=0;
        for(int i=0;i<len1;i++){
            for(int j=0;j<len2;j++){
                if(s1[i]==s2[j]) dp[i+1][j+1]=dp[i][j]+1;
                else dp[i+1][j+1]=max(dp[i+1][j],dp[i][j+1]);
            }
        }
        cout<<dp[len1][len2]<<endl;
    }
}
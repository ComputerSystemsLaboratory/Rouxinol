#include<iostream>
#include<string>
#include<cstring>
#include<algorithm>
#define MAX_N 1001

int solve(std::string s,std::string t){
        int dp[MAX_N][MAX_N]={0};
        int n,m;
        n=s.size();
       m=t.size();
        for(int i=0;i<n;i++){
                for(int j=0;j<m;j++){
                        if(s[i]==t[j])
                                dp[i+1][j+1]=dp[i][j]+1;
                        else
                                dp[i+1][j+1]=std::max(dp[i][j+1],dp[i+1][j]);
                }
        }
        return dp[n][m];
}

int main(){
        int q;
        std::cin>>q;
        for(int i=0;i<q;i++){
                std::string s,t;
                std::cin >> s>>t;
                std::cout<<solve(s,t)<<std::endl;
        }
        return 0;
}
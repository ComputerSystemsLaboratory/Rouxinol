#include<iostream>
#include<algorithm>
#define MAX_N 1001
int EditDistance(std::string a,std::string b){
        int dp[MAX_N][MAX_N];
        int i,j,cost;
        int len_a=a.length()+1,len_b=b.length()+1;

        for(i=0;i<len_a;i++)
                dp[i][0]=i;
        for(i=0;i<len_b;i++)
                dp[0][i]=i;
        for(i=1;i<len_a;i++)
                for(j=1;j<len_b;j++){
                        cost=a[i-1]==b[j-1]?0:1;
                        dp[i][j]=std::min(dp[i-1][j-1]+cost,std::min(dp[i-1][j]+1,dp[i][j\
-1]+1));
                }

        return dp[len_a-1][len_b-1];
}

int main(){
        std::string a,b;
        std::cin>> a>>b;
        std::cout<<EditDistance(a,b)<<std::endl;
        return 0;
}
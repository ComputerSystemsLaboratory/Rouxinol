#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <set>
#include <stack>
#include <queue>
#include <math.h>
using namespace std; 

int main(void){
    string s1,s2;
    cin>>s1>>s2;
    int dp[1010][1010];
    for(int i=0;i<=s1.size();i++){
        dp[0][i]=i;
    }
    for(int i=0;i<=s2.size();i++){
        dp[i][0]=i;
    }
    for(int i=1;i<=s2.size();i++){
        for(int j=1;j<=s1.size();j++){
            dp[i][j]=10000;
        }
    }
    for(int i=1;i<=s2.size();i++){
        for(int j=1;j<=s1.size();j++){
            int a=dp[i-1][j]+1,b=dp[i][j-1]+1;
            dp[i][j]=min(a,b);
            if(s2[i-1]==s1[j-1])dp[i][j]=min(dp[i][j],dp[i-1][j-1]);
            else dp[i][j]=min(dp[i][j],dp[i-1][j-1]+1);
        }
    }
    cout<<dp[s2.size()][s1.size()]<<endl;
    return 0;
}
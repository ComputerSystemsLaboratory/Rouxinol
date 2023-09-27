#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
 
int EditDistance(string s1,string s2){
    int n=s1.size();
    int m=s2.size();
    int dp[n+1][m+1];
 
    for(int i=0;i<n+1;i++){
        dp[i][0]=i;
    }
    for (int j=0;j<m+1;j++){
        dp[0][j]=j;
    }
 
    for (int i=1;i<n+1;i++){
        for (int j=1;j<m+1;j++){
            if(s1[i-1]==s2[j-1]){
                dp[i][j]=min( min(dp[i-1][j] +1, dp[i][j-1]+1) , dp[i-1][j-1]);
            }else{
                dp[i][j]=min( min(dp[i-1][j] +1, dp[i][j-1]+1) , dp[i-1][j-1]+1);
            }
        }
    }
    return dp[n][m];
}
 
int main(){
    string s1,s2;
    cin >> s1 >> s2;
 
    cout << EditDistance(s1,s2) << endl;
}

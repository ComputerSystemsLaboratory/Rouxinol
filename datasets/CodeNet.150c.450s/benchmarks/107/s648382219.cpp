#include <bits/stdc++.h>
using namespace std;

int main(){
    string s1, s2; cin >>s1 >> s2;
    int N=s1.size(), M = s2.size();
    int dp[1010][1010];
    for(int i=0; i<=N; i++){
        for(int j=0; j<=M; j++){
            if(i==0) dp[i][j]=j;
            else if(j==0) dp[i][j]=i;
            else dp[i][j]=100100;
        }
    }
    for(int i=0; i<N; i++){
        for(int j=0; j<M; j++){
            if(s1.at(i)==s2.at(j)) dp[i+1][j+1]=min({dp[i+1][j]+1 ,dp[i][j+1]+1, dp[i][j]});
            else dp[i+1][j+1] = min({dp[i+1][j],dp[i][j+1],dp[i][j]})+1;
        }
    }
    cout << dp[N][M] << endl;
}

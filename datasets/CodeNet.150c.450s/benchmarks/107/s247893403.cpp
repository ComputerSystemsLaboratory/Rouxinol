#include<iostream>
#include<string>
using namespace std;

int main(){
    //input
    string S,T;
    cin >> S >> T;

    //calc
    int dp[S.length()+1][T.length()+1];
    int i,j;
    for(i=0; i<=S.length(); i++){
        dp[i][0]=i;
    }
    for(j=0; j<=T.length(); j++){
        dp[0][j]=j;
    }
    for(i=1; i<=S.length(); i++){
        for(j=1; j<=T.length(); j++){
            dp[i][j] = min(dp[i-1][j]+1,dp[i][j-1]+1);
            dp[i][j] = min(dp[i][j],dp[i-1][j-1]+(S[i-1]!=T[j-1]));
        }
    }

    //answer
    cout << dp[S.length()][T.length()] << endl;
    return 0;
}

#include<iostream>
#include<stdio.h>
#include<vector>

const int INF = 9999999;

using namespace std;

int main(){

    int n, m;
    cin>> n>> m;

    int dp[m+1][n+1];

    for(int j=0; j<n+1; j++){
        dp[0][j] = INF;
    }
    for(int i=0; i<m+1; i++){
        dp[i][0] = 0;
    }

    vector<int> coin(m+1);
    for(int i=1; i<m+1; i++){
        cin>> coin[i];
    }

    for(int i=1; i<m+1; i++){
        for(int j=1; j<n+1; j++){
            if(j<coin[i]){
                dp[i][j] = dp[i-1][j];
            }else{
                dp[i][j] = min(dp[i-1][j], dp[i][j-coin[i]]+1);
            }
        }
    }

    cout<< dp[m][n]<< endl;
    return 0;
}
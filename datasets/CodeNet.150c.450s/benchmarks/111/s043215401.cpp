#include<string>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<complex>
#include<cmath>
#include<algorithm>
#include<map>
#include<vector>
#include<sstream>
#include<iostream>
#include<iomanip>
using namespace std;
int main(void){

    int N;
    cin>>N;
    int a[120];
    int total;
    for(int i = 0;i < N - 1;i++){
        cin>>a[i];
    }
    cin>>total;

    long long int dp[120][25] = {{0}};
    dp[0][a[0]] = 1;
    for(int i = 0;i <= N - 1;i++){
        for(int j = 0;j <= 20;j++){
            if(dp[i][j] != 0){
                if(0 <= j - a[i+1] && j - a[i+1] <= 20)dp[i + 1][j - a[i+1]] += dp[i][j];
                if(0 <= j + a[i+1] && j + a[i+1] <= 20)dp[i + 1][j + a[i+1]] += dp[i][j];
            }
        }
    }/*
    for(int j = 0;j <= 20;j++){
        cout<<setw(2)<<j<<ends<<ends;
        for(int i = 0;i < N - 1;i++){
            cout<<setw(3)<<dp[i][j]<<" ";
        }
        cout<<endl;
    }*/
    cout<<dp[N-2][total]<<endl;


    return 0;
}
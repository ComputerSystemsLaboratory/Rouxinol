#include<stdio.h>
#include<iostream>
#include<list>
#include<map>
#include<vector>
#include<algorithm>
#include<string.h>
#define range(i,a,b) for(int i = (a); i < (b); i++)
#define rep(i,b) range(i,0,b)
#define debug(x) cout << x << endl;
using namespace std;

int main(){
    int dp[31] = {0};
    int n;

    dp[0] = 1;
    rep(i, 31){
        if(i >= 1) dp[i] += dp[i - 1];
        if(i >= 2) dp[i] += dp[i - 2];
        if(i >= 3) dp[i] += dp[i - 3];
    }
    int input;
    while(cin >> input, input){
        cout << dp[input] / 365 / 10 + 1  << endl;
    }
}
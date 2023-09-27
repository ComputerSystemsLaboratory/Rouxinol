#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
#include<stdio.h>
#include<queue>
#include <climits>
#include <map>
const int mod = 1e9 + 7;
const long long INF = 1LL << 60;
using namespace std;
typedef long long ll;

template<class T>
bool chmin(T &a, T b)
{
    if(a>b){
        a = b;
        return true;
    }
    return false;
}

long long dp[31];

int main()
{
    for(int i = 0; i < 31; i++){
        dp[i] = 0;
    }
    
    while(true){
        dp[0] = 1;
        dp[1] = 1;
        dp[2] = 2;
        int tmp;
        cin >> tmp;
        if(tmp == 0) break;
        for(int i = 3; i <= tmp; i++){
            dp[i] = dp[i-1] + dp[i-2] + dp[i-3];
        }
        cout << (dp[tmp]-1)/10/365+1 << endl;
        for(int i = 0; i < 31; i++){
            dp[i] = 0;
        }
    }
}

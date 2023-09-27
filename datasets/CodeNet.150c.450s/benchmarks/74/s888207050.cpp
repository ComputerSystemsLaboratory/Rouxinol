#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
#include<stdio.h>
#include<queue>
#include <climits>
#include <map>
#include <set>
const int mod = 1e9 + 7;
const int INF = 1 << 20;
using namespace std;
typedef long long ll;
typedef pair<int,int> P;

int main()
{
    int n,m;
    cin >> n >> m;
    int c[m];
    int dp[50010];
    for(int i = 0; i < m; i++){
        cin >> c[i];
    }
    for(int i = 0; i < 50010; i++){
        dp[i] = INF;
    }
    dp[0] = 0;
    for(int i = 0; i < 50010;i++){
        for(int j = 0; j < m; j++){
            if(i+c[j] <= n){
                dp[i+c[j]] = min(dp[i+c[j]],dp[i]+1);
            }
        }
    }
    cout << dp[n] <<endl;
}

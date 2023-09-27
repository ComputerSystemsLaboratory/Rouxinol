#include<iostream>
#include<string.h>
#include<vector>
#include<list>
#include<stdio.h>
#include<math.h>
#include<iomanip>
#include<map>
#include<stack>
#include<queue>
#define range(i,a,b) for(int i = (a); i < (b); i++)
#define rep(i,b) range(i,0,b)
#define debug(x) cout << "debug " << x << endl;
using namespace std;


int main(){
    int w, h, n, x, y;
    int dp[20][20];
    while(cin >> w >> h, w||h){
        memset(dp,0,sizeof(dp));
        dp[0][0] = 1;
        cin >> n;
        rep(i, n){
            cin >> x >> y;
            dp[y - 1][x - 1] = -1;
        }
        rep(i, h){
            rep(j, w){
                if(dp[i][j] < 0)
                    continue;
                if(dp[i + 1][j] >= 0)
                    dp[i + 1][j] += dp[i][j];
                if(dp[i][j + 1] >= 0)
                    dp[i][j + 1] += dp[i][j];
            }
        }
        cout << dp[h - 1][w - 1] << endl;
    }
}
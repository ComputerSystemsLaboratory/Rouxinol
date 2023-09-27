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
#include<algorithm>
#define range(i,a,b) for(int i = (a); i < (b); i++)
#define rep(i,b) range(i,0,b)
#define debug(x) cout << "debug " << x << endl;
using namespace std;

int main(){
    int N,W;
    while(cin >> N >> W){
        int dp[105][10005] = {0};
        range(i,1,N+1){
            int v, w;
            cin >> v >> w;
            range(j,1,W+1){
                if(j - w >= 0)
                    dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - w] + v);
                else
                    dp[i][j] = dp[i - 1][j];
            }
        }
        cout << dp[N][W] << endl;
    }
}
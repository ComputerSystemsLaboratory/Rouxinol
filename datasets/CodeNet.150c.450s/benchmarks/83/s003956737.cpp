#include <iostream>
#include <cstdio>
#include <cstring>
#define MAX_N 102
#define MAX_W 10002
#define INF -1
using namespace std;

int dp[MAX_N][MAX_W];

//初期化
//this method initialize dynamic programming table as below.
//0 0 0 0 0 0 0 0 0 0 ...
//0 2 5 8 8 8
//0 2 5 8 10 13
//0
//.
//.
//.
void init() {
    for(int r = 0; r < MAX_N; r++) {
        memset(dp[r], INF, sizeof(dp[r]));
        dp[r][0] = 0;
    }
    memset(dp[0], 0, sizeof(dp[0]));
}

//DEBUGGER
//this method output dynamic programming table
void output(int n, int w) {
    for(int r = 0; r <= n; r++) {
        for(int c = 0; c <= w; c++) {
            cout << dp[r][c] << " ";
        }
        putchar('\n');
    }
}

int main(void) {
    init(); //initialize
    //input
    int n, w; cin >> n >> w;
    int value[n], weight[n];
    for(int r = 0; r < n; r++) cin >> value[r] >> weight[r];
    //Dynamic Programming
    /*
    for(int r = 1; r < n + 1; r++) {
        for(int c = 0; c < n; c++) {
            if(weight[r] != c) continue;
            //give Dynamic Programming
            for(int g = 0; g < n; g++) {//roop as long as given array of value and weight.
                int val = value[g], wei = weight[g]; //if gth baggage is selected,...
                
                dp[r][c] = max(dp[r][c], dp[r - 1][c]);
                if(c + wei > w) continue; //If next weight is out of table, we can not update.
                dp[r][c + wei] = max(dp[r][c + wei], dp[r - 1][c] + val);
            
            }
        }
    }
     */
    for(int r = 1; r < n + 1; r++) {
        for(int c = 0; c < w + 1; c++) {
            int val = value[r - 1], wei = weight[r - 1];
            //選ばない場合
            dp[r][c] = max(dp[r][c], dp[r - 1][c]);
            //選ぶ場合
            if(c + wei <= w) { //重量制限内で無ければならない
                dp[r][c + wei] = max(dp[r][c + wei], dp[r - 1][c] + val);
            }
        }
    }
    //output(n, w); //DEBUG
    int ans = -1;
    for(int r = 0; r < w + 1; r++) ans = max(ans, dp[n][r]);
    cout << ans << endl;
    return(0);
}
#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

int main(){
    
    int W, H;
    while(cin >> W >> H, W||H){
        int n, dp[17][17] = {0};
        bool xx[17][17];
        
        memset(xx, false, sizeof(xx));
        cin >> n;
        for(int i = 0; i < n; i++){
            int x, y; cin >> x >> y;
            xx[--y][--x] = true;
        }
        
        dp[0][0]  = 1;
        for(int i = 1; i < W; i++)
            if(!xx[0][i]) dp[0][i] = dp[0][i - 1];
        for(int i = 1; i < H; i++)
            if(!xx[i][0]) dp[i][0] = dp[i - 1][0];
        for(int i = 1; i < H; i++){
            for(int j = 1; j < W; j++){
                if(!xx[i][j])
                    dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
            }
        }
        cout << dp[H - 1][W - 1] << endl;
    }
}
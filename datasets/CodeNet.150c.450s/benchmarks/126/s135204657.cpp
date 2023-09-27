#include<iostream>
using namespace std;

int main(){
    int a, b;
    while(cin >> a >> b){
        if(a + b == 0)  break;

        int dp[b][a];
        bool cons[b][a];
        for(int i = 0; i < b; i++){
            for(int j = 0; j < a; j++){
                dp[i][j] = 0;
                cons[i][j] = false;
            }
        }
        dp[0][0] = 1;

        int n;
        cin >> n;

        int x, y;
        for(int i = 0; i < n; i++){
            cin >> x >> y;
            x--; y--;
            cons[y][x] = true;
        }

        for(int i = 1; i < b; i++){
            if(!cons[i][0]) dp[i][0] = dp[i-1][0];
        }
        for(int i = 1; i < a; i++){
            if(!cons[0][i]) dp[0][i] = dp[0][i-1];
        }

        for(int i = 1; i < b; i++){
            for(int j = 1; j < a; j++){
                if(!cons[i][j]) dp[i][j] = dp[i-1][j] + dp[i][j-1];
            }
        }
        cout << dp[b-1][a-1] << endl;
    }
    return 0;
}

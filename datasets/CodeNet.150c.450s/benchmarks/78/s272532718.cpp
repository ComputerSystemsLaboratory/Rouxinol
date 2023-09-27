#include <iostream>
#include <algorithm>
using namespace std;

int dp[2][1000001];

int f(int n)
{
    return n * (n + 1) * (n + 2) / 6;
}

int main()
{
    int n;
    for(int k = 0; k < 2; k++)
        fill(dp[k], dp[k] + 1000001, 1000000);
    
    dp[0][0] = dp[1][0] = 0;
    for(int i = 1; i <= 1000000; i++) {
        for(int k = 1; ; k++) {
            int num = f(k);
            if(i - num >= 0) {
                dp[0][i] = min(dp[0][i], dp[0][i - num] + 1);
                if((num % 2) == 1) {
                    dp[1][i] = min(dp[1][i], dp[1][i - num] + 1);
                }
            } else {
                break;
            }
        }
    }
    
    while(cin >> n && n) {
        cout << dp[0][n] << " " << dp[1][n] << endl;
    }
}
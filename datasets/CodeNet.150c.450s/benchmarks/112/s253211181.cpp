#include<iostream>
#include<string>
#include<vector>
using namespace std;
#define SIZE 100000
int main() {
    int n, m, dp[SIZE], num1, num2; 
    char ch1, ch2,ans[SIZE];
    while (1) {
        for (int i = 0; i < SIZE; i++) {
            dp[i] = -1;
        }
        cin >> n;
        if (n == 0) {
            break;
        }
        for (int i = 0; i < n; i++) {
            cin >> ch1 >> ch2;
            num1 = ch1;
            num2 = ch2;
            dp[num1] = num2;
        }
        cin >> m;
        for (int i = 0; i < m; i++) {
            cin >> ch1;
            num1 = ch1;
            if (dp[num1] != -1) {
                ans[i] = dp[num1];
                
            }
            else {
                ans[i] = ch1;
                
            }
        }
        for (int i = 0; i < m; i++) {
             cout << ans[i];
        }
         cout << endl;
    }
    return 0;
}
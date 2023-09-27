#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    const int MAX_S = 1000 + 10;
    string S1, S2;
    int dp[MAX_S][MAX_S];
    cin >> S1 >> S2;
    int l1 = S1.length();
    int l2 = S2.length();
    for (int i = 0; i <= l1; ++i){
        dp[i][0] = i;
    }
    for (int j = 1; j <= l2; ++j){
        dp[0][j] = j;
    }

    for (int i = 1; i <= l1; ++i){
        for (int j = 1; j <= l2; ++j){
            if (S1[i-1] == S2[j-1]){
                dp[i][j] =  dp[i-1][j-1];
            }else{
                dp[i][j] = min(min(dp[i-1][j] + 1, dp[i][j-1] + 1), dp[i-1][j-1] + 1);
            }
        }
    }

    // cout << "%" << " " << "%" << " ";;
    // for (int j = 0; j < l2; ++j){
    //     cout << S2[j] << " ";
    // }cout << endl;
    // for (int i = 0; i <= l1; ++i){
    //     if (i == 0){
    //         cout << "%" << " ";
    //     }else{
    //         cout << S1[i-1] << " ";
    //     }
    //     for (int j = 0; j <=l2; ++j){
    //         cout << dp[i][j] << " ";
    //     }cout << endl;
    // }
    cout << dp[l1][l2]<< endl;
}

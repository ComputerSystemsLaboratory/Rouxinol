#include <iostream>
#include <vector>

using namespace std;

typedef unsigned long long ULL;
ULL dp[100][21];
int main() {
    int N;
    cin >> N;
    vector<int> terms(N-1);
    for(int i = 0; i < N-1; ++i) {
        cin >> terms[i];
    }
    int RHS;
    cin >> RHS;
    dp[0][terms[0]] = 1;
    for(int i = 1; i < N-1; ++i) {
        for(int sum = 0; sum <= 20; ++sum) {
            if(sum-terms[i] >= 0) {
                dp[i][sum] += dp[i-1][sum-terms[i]];
            }
            if(sum+terms[i] <= 20) {
                dp[i][sum] += dp[i-1][sum+terms[i]];
            }
        }
    }
    cout << dp[N-2][RHS] << endl;
    return 0;
}
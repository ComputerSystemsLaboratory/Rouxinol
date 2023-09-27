#include <iostream>

using namespace std;
int fib(int n){
    int dp[50];
    dp[0] = 1;
    dp[1] = 1;
    for(int i = 2; i < 45; ++i){
        dp[i] = dp[i-1] + dp[i-2];
    }
    return dp[n];
}

int main(){
    int n;
    cin >> n;
    cout << fib(n) << endl;
}
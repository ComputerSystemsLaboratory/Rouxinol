#include <iostream>
#include <vector>

using namespace std;

int fib(int n) {
    return n <= 1 ? 1 : fib(n - 1) + fib(n-2);
}

int dp[1000];

int fibMemoR(int n){
    if(n <= 1) return dp[n] = 1;
    if(dp[n])return dp[n];
    return dp[n] = fibMemoR(n-1) + fibMemoR(n-2);
}

int fibdp(int n){
    vector<int> dpv(n);
    dpv[0] = dpv[1] = 1;
    for (int i = 2; i < n; ++i)dpv[i] = dpv[i-1] + dpv[i-2];
    return dpv[n-1];
}

int fibloop(int n){
    int fib,fib2;
    fib = fib2 = 1;
    for (int i = 2; i < n; ++i){
        int tmp = fib;
        fib = fib + fib2;
        fib2 = tmp;
    }
    return fib;
}

int main(){
    //freopen("in", "r", stdin);
    int n;
    cin >> n;
    cout << fibloop(n+1) << endl;
    return 0;
}
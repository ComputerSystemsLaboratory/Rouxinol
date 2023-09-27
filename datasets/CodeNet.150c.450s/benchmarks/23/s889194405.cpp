#include <iostream>

using namespace std;

typedef long long signed int ll;

constexpr ll NIL = -20000000000;

ll dp[50];

ll fib(int n) {
    if(n < 3) return n;
    if(dp[n] == 0) dp[n] = fib(n-1) + fib(n-2);
    return dp[n];
}

int main() {
    int n;
    cin >> n;
    cout << fib(n) << endl;
}

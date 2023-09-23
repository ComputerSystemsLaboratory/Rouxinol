#include <bits/stdc++.h>

#define REP(i, s, n) for (int i = s; i < n; i++)
#define rep(i, n) REP(i, 0, n)

using namespace std;

// dp memory
const int MAX_N = 44;
int fib[MAX_N+1];

int main(){
    int n; cin >> n;

    // fib dynamic programming
    fib[0] = 1;fib[1] = 1;
    REP(i, 2, n+1){
        fib[i] = fib[i-1] + fib[i-2];
    }

    cout << fib[n] << endl;
}

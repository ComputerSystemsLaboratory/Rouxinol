#include <bits/stdc++.h>
#include <tuple>

#define REP(i, n) for(int i=0;i<(int)(n);i++)
#define ALL(x) (x).begin(),(x).end()
const int INF = 1e9;

using namespace std;
int calc[45];

int fib(int n){
    if(calc[n] != 0)
        return calc[n];
    for(int i = 2; i <= n; i++)
        calc[i] = calc[i-2] + calc[i-1];
    return calc[n];
}

int main() {
    int n;
    cin >> n;
    REP(i, 45) calc[i] = 0;
    calc[0] = 1;
    calc[1] = 1;
    cout << fib(n) << endl;
    return 0;
}
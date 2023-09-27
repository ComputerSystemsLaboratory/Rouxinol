#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ll fib[45];
    fib[0] = fib[1] = 1;
    int n;
    cin >> n;
    for(int i=2;i<=n;i++){
        fib[i] = fib[i-1] + fib[i-2];
    }
    cout << fib[n] << endl;
}

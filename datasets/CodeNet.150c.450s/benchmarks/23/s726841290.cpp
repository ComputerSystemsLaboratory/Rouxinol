#include <bits/stdc++.h>
using namespace std;

typedef long long ll;


int main() {
    int n; cin >> n;
    vector<int> fib(n+1,0);
    fib[0]=1;
    fib[1]=1;
    
    for(int i=2; i<=n; i++){
        fib[i] = fib[i-1] + fib[i-2];
    }
    
    cout << fib[n] << endl;
}


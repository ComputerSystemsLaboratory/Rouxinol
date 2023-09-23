#include <bits/stdc++.h>
using namespace std;
int F[114]={};
int fib(int n){
    if(n == 0 || n == 1) return F[n] = 1;
    else if(F[n] != 0) return F[n];
    else {
        return F[n] = fib(n-1) + fib(n-2);
    }
}

int main() {
    ios::sync_with_stdio(false);
    int n;
    cin >>n;
    fib(n);
    cout << F[n] << endl;
    return 0;
}
#include<iostream>
#include<vector>
#define NIL -1
using namespace std;

int fib(vector<int>& F, int n){
    if (F[n] != NIL) return F[n];
    return F[n] = fib(F, n - 1) + fib(F, n - 2);
}

int main(){
    int n;
    cin >> n;
    vector<int> F(n + 1, NIL);
    F[0] = F[1] = 1;
    cout << fib(F, n) << endl;
    return 0;
}
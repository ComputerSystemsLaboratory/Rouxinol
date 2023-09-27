#include <iostream>
using namespace std;

int f[46]={0};

int fib(int n){
    if(n==0)    f[0] = 1;
    else if(n==1)   f[1] = 1;
    if(f[n]==0)    f[n] = fib(n-1)+fib(n-2);

    return f[n];
}

int main(void){
    int x;
    cin >> x;
    cout << fib(x) << endl;
    return 0;
}


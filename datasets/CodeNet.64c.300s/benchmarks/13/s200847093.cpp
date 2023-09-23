#include <iostream>
using namespace std;

int f[46]={0};

int fib(int n){
    f[0] = 1;
    f[1] = 1;
    for(int i=2; i<46; i++)    f[i] = f[i-1]+f[i-2];

    return f[n];
}

int main(void){
    int x;
    cin >> x;
    cout << fib(x) << endl;
    return 0;
}

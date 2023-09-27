#include <iostream>
using namespace std;

long long fib(int n){
    long long  a = 1, b = 1, tmp = 0;
    while (n--){
        tmp = a;
        a += b;
        b = tmp;
    }
    return b;
}

int main()
{
    int n = 0;
    cin >> n;
    cout << fib(n) << endl;
    
    return 0;
}
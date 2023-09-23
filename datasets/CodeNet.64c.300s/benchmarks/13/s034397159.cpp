#include<iostream>
using namespace std;

// ?????£??????????????°???????±???????
int fibonacci(int n);
int fib[45];

int main()
{
    int num;
    cin >> num;
    int res = 0;

    res = fibonacci(num);
    cout << res << endl;

    //getchar();
    //getchar();

    return 0;
}

int fibonacci(int n)
{
    if(n == 0 || n == 1) { return 1; }
    //return fibonacci(n - 1) + fibonacci(n - 2);
    if(fib[n]) { return fib[n]; }
    return fib[n] = fibonacci(n-1) + fibonacci(n-2);
}
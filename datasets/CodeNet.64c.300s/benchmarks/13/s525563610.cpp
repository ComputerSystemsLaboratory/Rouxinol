// ALDS1_10_A.cpp
// Dynamic Programming - Fibonacci Number

#include <iostream>
using namespace std;

int fib(int n) {
    if (n == 0 || n == 1)
        return 1;
    int pre = 1;
    int curr = 1;
    int next = 1;
    while (n-- > 1) {
        next = pre + curr;
        pre = curr;
        curr = next;
    }
    return next;
}

int main()
{
    int n;
    cin >> n;
    int res = fib(n);
    cout << res << endl;
    return 0;
}
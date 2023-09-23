#include <iostream>
#include <cstdio>

using namespace std;

long long fib[45];

int main(void) {

    fib[0] = fib[1] = 1;
    for (int i = 2; i < 45; ++i) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }

    int n;
    cin >> n;
    printf("%lld\n", fib[n]);

    return 0;
}
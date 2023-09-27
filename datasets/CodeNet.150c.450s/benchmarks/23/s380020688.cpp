#include <iostream>

using namespace std;

int fib(int n) {
    int a = 1;
    int b = 1;

    int i = 0;
    while (i < n) {
        int tmp = a;
        a = b;
        b += tmp;
        ++i;
    }
    return a;
}

int main() {
    int n;
    cin >> n;

    cout << fib(n) << endl;

    return 0;
}
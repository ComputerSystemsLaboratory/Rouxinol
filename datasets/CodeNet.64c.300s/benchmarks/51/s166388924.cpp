#include <stdio.h>
#include <iostream>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef long long Int;

Int f(int n) {
    Int r = 1;
    rep (i, n) r *= i+1;
    return r;
}

int main() {
    int n;
    scanf("%d", &n);
    cout << f(n) << endl;
    return 0;
}
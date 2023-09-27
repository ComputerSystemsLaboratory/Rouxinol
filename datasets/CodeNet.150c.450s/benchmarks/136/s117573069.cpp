#include <cstdio>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n, m;
    while(scanf("%d%d", &n, &m) == 2) {
        printf("%d %d\n", __gcd(n, m), m / __gcd(n, m)*n);
    }
    return 0;
}
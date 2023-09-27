#include <iostream>
#include <utility>
#include <cstdio>

using namespace std;

int main(void) {

    int n;
    cin >> n;

    int max = -1e+6-1, min = 1e+6+1;
    long long total = 0;
    for (int i = 0; i < n; ++i) {
        int a;
        cin >> a;
        if (a > max) { max = a; }
        if (a < min) { min = a; }
        total += a;
    }

    printf("%d %d %lld\n", min, max, total);

    return 0;
}
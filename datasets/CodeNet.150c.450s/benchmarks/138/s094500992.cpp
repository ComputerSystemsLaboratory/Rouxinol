#include <cstdio>
#include <algorithm>
#include <utility>

using namespace std;

int gcd(int m, int n) {
    /* Euclidean algorithm */
    while (n) {
        m %= n;
        swap(m, n);
    }
    return m;
}

int main() {
    int x, y;
    scanf("%d %d", &x, &y);

    printf("%d\n", gcd(x, y));
    return 0;
}
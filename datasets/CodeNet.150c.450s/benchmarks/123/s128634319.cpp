#include <stdio.h>
#include <math.h>

bool isPrimeNumber(int x) {
    if (x > 2 && x % 2 == 0) { return false; }
    for (int i = 3; i <= sqrt(x); i += 2) {
        if (x % i == 0) { return false; }
    }
    return true;
}

int main() {
    int N, count;

    scanf("%d", &N);
    count = 0;
    for (int i = 0; i < N; ++i) {
        int x;
        scanf("%d", &x);
        if (isPrimeNumber(x)) {
            ++count;
        }
    }
    printf("%d\n", count);

    return 0;
}
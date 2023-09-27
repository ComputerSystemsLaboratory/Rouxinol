#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; i++)

bool prime(int n) {
    if (n == 2) return true;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

void prime_fac(int n) {
    printf("%d:", n);
    int m = n;
    for (int i = 2; i * i <= n; i++) {
        while (m % i == 0) {
            printf(" %d", i);
            m /= i;
        }
    }
    if (m != 1) printf(" %d", m);
    printf("\n");
}

int main() {
    int n;
    scanf("%d", &n);
    // rep(i, n) {
    //     if (i < 2) continue;
    //     prime_fac(i);
    // }
    prime_fac(n);
}

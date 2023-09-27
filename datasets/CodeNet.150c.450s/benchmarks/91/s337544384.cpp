#include <cstdio>
#include <vector>
using namespace std;

int sieve(int n) {
    if (n <= 1) return 0;
    vector<bool> is_prime(n+1, true);
    is_prime[0] = is_prime[1] = false;

    int res = 0;
    for (int i = 2; i <= n; i++) {
        if (is_prime[i]) {
            res++;
            for (int j = i+i; j <= n; j += i) {
                is_prime[j] = false;
            }
        }
    }
    return res;
}

int main() {
    while (1) {
        int n;
        int ret = scanf("%d", &n);
        if (ret < 0) break;
        printf("%d\n", sieve(n));
    }
    return 0;
}
#include <cstdio>

int main() {
    long n, k;
    for (;;) {
        long a[100002] = {};
        scanf("%ld %ld", &n, &k);
        if (n == 0)
            return 0;
        for (long i = 0; i < n; i++) {
            scanf(" %ld", &a[i]);
        }
        long max = -2147483648;
        for (long i = 0; i < n - k; i++) {
            long result = 0;
            for (long l=i; l<i+k; l++)
                result += a[l];
            if (result > max)
                max = result;
        }
        printf("%ld\n", max);
    }
}
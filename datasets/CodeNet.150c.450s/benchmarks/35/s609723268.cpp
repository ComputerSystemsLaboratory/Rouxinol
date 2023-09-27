#include <stdio.h>

int main() {
        int n, a;

        while (true) {
                scanf("%d", &n);
                if (!n) {
                        break;
                }

                long long sum = 0, max = -100000;
                for (int i = 0; i < n; i++) {
                        scanf("%d", &a);
                        sum += a;
                        if (sum > max) {
                                max = sum;
                        }
                        if (sum < 0) {
                                sum = 0;
                        }
                }
                printf("%lld\n", max);
        }

        return 0;
}
#include <stdio.h>
#include <stdint.h>

#define MAX_N 100000

typedef int int32_t;

// ?????????DP?????¨naive????????§???binary search?????????

// check given _p_ can load every _w_
int can_load(int n, int k, int* w, int p) {
    for (int i = 0; i < n; k--) {
        if (w[i] > p) {
            return 0;
        }
        int t = w[i++];
        while ((t += w[i]) <= p && i < n) {
            i++;
        }
    }

    return k >= 0;
}

int main(void) {
    int n, k, sum = 0;
    int w[MAX_N];

    scanf("%d %d", &n, &k);
    for (int i = 0; i < n; i++) {
        scanf("%d", &w[i]);
        sum += w[i];
    }

    // binary search
    int min = sum/k - 1;
    int max = sum;
    while (min < max) {
        int p = (min + max) / 2;
        if (can_load(n, k, w, p)) {
            max = p;
        } else {
            min = p + 1;
        }
    }

    printf("%d\n", min);

    return 0;
}
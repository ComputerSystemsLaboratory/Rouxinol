#include <stdio.h>

char calc(short r, short byte) {
    short i;
    char sum = 0;

    for (i=0;i<r;i++) {
        if (!((byte >> i) & 1)) {
            sum += 1;
        }
    }

    if (sum < r - sum) sum = r - sum;

    return sum;
}

int main() {
    while (1) {
        short i;
        int r, c;
        short stats[10000];
        int max_sum = 0;

        scanf("%d %d", &r, &c);
        if (r == 0 && c == 0) return 0;

        for (i=0;i<c;i++) {
            stats[i] = 0;
        }

        for (i=0;i<r;i++) {
            short j;
            for (j=0;j<c;j++) {
                short k;
                scanf("%hd", &k);
                stats[j] += (k << i);
            }
        }

        for (i=0;i<(2<<r)+1;i++) {
            short j;
            int sum = 0;

            for (j=0;j<c;j++) {
                sum += calc(r, i ^ stats[j]);
            }

            if (max_sum < sum) max_sum = sum;
        }

        printf("%d\n", max_sum);
    }
}
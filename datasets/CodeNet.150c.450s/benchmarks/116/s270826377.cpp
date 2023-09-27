#include <stdio.h>
#include <string.h>

#define MAX_BIT_SIZE 100001

int BIT[MAX_BIT_SIZE];
int n;
int save[MAX_BIT_SIZE];

int sum(int index) {
    int ret = 0;
    index += 1;

    while (index > 0) {
        ret += BIT[index];
        index -= (index & (-index));
    }

    return ret;
}

void add(int index, int value) {
    int i = 1;
    index += 1;

    while (index <= n) {
        BIT[index] += value;
        index += (index & (-index));
    }
}

int main() {
    while (1) {
        int k;
        int i;
        int max_count = 0;

        scanf("%d %d", &n, &k);
        if (n == 0 && k == 0) return 0;

        memset(BIT, 0, MAX_BIT_SIZE);

        for (i=0;i<n;i++) {
            int d;
            scanf("%d", &d);
            save[i] = d;
            add(i, d);
        }

        for (i=0;i<n-k;i++) {
            int now_count = sum(i+k) - sum(i);
            if (now_count > max_count){
                max_count = now_count;
            }
        }

        printf("%d\n", max_count);
    }
}
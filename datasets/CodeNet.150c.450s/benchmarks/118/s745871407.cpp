#include <cstdio>

int Y, M, D;

int solve() {
    int num_large_year = (Y - 1) / 3;
    int num_small_year = (Y - 1) - num_large_year;

    int days = 0;

    days += num_large_year * (20 * 10);
    days += num_small_year * (20 * 5 + 19 * 5);

    if (Y % 3 == 0) { // large year
        days += (M - 1) * 20;
    } else { // small year
        for (int i = 1; i < M; i++) {
            days += (i % 2 == 1 ? 20 : 19);
        }
    }

    days += D - 1;

    return 196470 - days;
}

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d%d%d", &Y, &M, &D);
        printf("%d\n", solve());
    }
    return 0;
}
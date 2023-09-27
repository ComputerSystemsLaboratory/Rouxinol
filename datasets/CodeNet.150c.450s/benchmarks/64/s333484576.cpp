#include <stdio.h>

int n, A[20], q, M[200];

bool solve(int index, int num) {
    if (num == 0) return true;
    if (num < 0 || index >= n) return false;

    if (solve(index + 1, num)) return true;
    if (solve(index + 1, num - A[index])) return true;

    return false;
}

int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        scanf("%d", &A[i]);
    }
    scanf("%d", &q);
    for (int i = 0; i < q; ++i) {
        int m;
        scanf("%d", &m);
        if (solve(0, m)) {
            printf("yes\n");
        }
        else {
            printf("no\n");
        }
    }
    return 0;
}
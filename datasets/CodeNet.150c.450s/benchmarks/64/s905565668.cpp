#include<stdio.h>

int A[2000];
int n;

bool solve(int i, int m) {
    bool res;

    if (m == 0) {
        return true;
    }
    if (i >= n) {
        return false;
    }
    res = solve(i + 1, m) || solve(i + 1, m - A[i]);

    return res;
}


int main() {
    int m, tmp;

    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }
    scanf("%d", &m);
    for (int i = 0; i < m; i++) {
        scanf("%d", &tmp);
        if (solve(0, tmp)) {
            printf("yes\n");
        } else {
            printf("no\n");
        }
    }

    return 0;
}
#include <cstdio>


bool solve(int A[], int size, int index, int remain) {
    bool a, b;
    if (remain == 0) {
        return true;
    } else if (size <= index || remain < 0) {
        return false;
    } else {
        a = solve(A, size, index + 1, remain);
        b = solve(A, size, index + 1, remain - A[index]);
    }
    return a || b;
}
int
main () {
    int n, q, A[2000], M[2000];

    scanf("%d", &n);
    for (int i=0; i<n; i++) scanf("%d", &A[i]);
    scanf("%d", &q);

    for (int i=0; i<q; i++) {
        int m;
        scanf("%d", &m);
        if (solve(A, n, 0, m)) {
            printf("yes\n");
        } else {
            printf("no\n");
        }
    }


    return 0;
}
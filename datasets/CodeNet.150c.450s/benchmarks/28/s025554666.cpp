#include <stdio.h>

int f(int A[], int n, int k, int q) {
    int V = 0, i = 0;
    while (i < n) {
        if (A[i] <= V) {
            V -= A[i++];
        } else {
            if (k-- == 0) {
                break;
            }
            V = q;
        }
    }
    return i;
}
int main() {
    int A[100010], n, k;
    scanf("%d %d", &n, &k);
    for (int i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }
    int left = 0, right = 10000 * n, mid;
    while (left + 1 != right) {
        mid = (left + right) / 2;
        if (f(A, n, k, mid) < n) {
            left = mid;
        } else {
            right = mid;
        }
    }
    printf("%d\n", right);
    return 0;
}


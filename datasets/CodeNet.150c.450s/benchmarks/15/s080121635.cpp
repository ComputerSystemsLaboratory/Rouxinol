#include <cstdio>
using namespace std;

int search(int A[], int n, int key) {
    int i = 0;
    A[n] = key;
    while (A[i] != key) i++;
    return i != n;
}

int main(void) {
    int n, q, i, k;
    int A[15000];
    int c = 0;

    scanf("%d", &n);
    for (i = 0; i < n; i++) scanf("%d", &A[i]);

    scanf("%d", &q);
    for (i = 0; i < q; i++) {
        scanf("%d", &k);
        if (search(A, n, k)) c++;
    }

    printf("%d\n", c);
    return 0;
}
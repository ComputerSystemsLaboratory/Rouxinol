#include <cstdio>
#include <cmath>

long Parent(long i) {
    return (long)floor((double)i / 2.0);
}

long Left(long i) {
    return 2 * i;
}

long Right(long i) {
    return (2 * i + 1);
}

int main() {
    int H;
    scanf("%d", &H);
    long A[H];
    for (int i=0; i<H; i++) scanf("%ld", &A[i]);

    for (int i=0; i<H; i++) {
        printf("node %d: key = %ld, ", i + 1, A[i]);
        int p = Parent(i + 1) - 1;
        int r = Right(i + 1) - 1;
        int l = Left(i + 1) - 1;
        if (0 <= p && p < H) printf("parent key = %ld, ", A[p]);
        if (l < H) printf("left key = %ld, ", A[l]);
        if (r < H) printf("right key = %ld, ", A[r]);
        printf("\n");
    }
}
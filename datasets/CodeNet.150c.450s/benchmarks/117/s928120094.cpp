#include <cstdio>
#define MAX 1000000000
#define MN 5000001
long long M[MN];
long long c;

void merge(long long A[], long long left, long long mid, long long right) {
    long long n1 = mid - left + 2;
    long long n2 = right - mid + 1;
    long long L[n1], R[n2];
    for (long long i=0; i<n1-1; i++) L[i] = A[left + i];
    for (long long i=0; i<n2-1; i++) R[i] = A[mid + 1 + i];

    L[n1-1] = MAX;
    R[n2-1] = MAX;

    long long l=0, r = 0;
    for (long long i=left; i<=right; i++) {
        if (L[l] <= R[r]) {
            A[i] = L[l];
            l++;
        } else {
            A[i] = R[r];
            r++;
        }
        c++;
    }
}

void merge_sort(long long A[], long long left, long long right) {
    if (left < right) {
        long long mid = (left + right) / 2;
        merge_sort(A, left, mid);
        merge_sort(A, mid + 1, right);
        merge(A, left, mid, right);
    }
}


int
main() {
    c = 0;
    long long n;
    scanf("%lld", &n);
    for (long long i=0; i<n; i++) scanf("%lld", &M[i]);

    merge_sort(M, 0, n-1);
    for (long long i=0; i<n; i++) {
        printf("%lld", M[i]);
        if (i == n-1) printf("\n");
        else printf(" ");
    }
    printf("%lld\n", c);

    return 0;
}
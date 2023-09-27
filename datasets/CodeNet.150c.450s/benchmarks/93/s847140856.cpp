//#define LOCAL

#include <cstdio>

#define M 100010
#define S 2000000000
struct Card {
    char p;
    int q;
};
Card A[M], B[M], L[M], R[M];

void merge(int l, int m, int r) {
    int i, j, k, n1 = m-l, n2 = r-m;
    for(i=0; i<n1; ++i) L[i] = A[l+i];
    for(i=0; i<n2; ++i) R[i] = A[m+i];
    i = j = 0, L[n1].q = R[n2].q = S;
    for(k=l; k<r; ++k) {
        if(L[i].q <= R[j].q) A[k] = L[i++];
        else A[k] = R[j++];
    }
}

void mergeSort(int l, int r) {
    if(l+1 < r) {
        int m = (l+r)/2;
        mergeSort(l, m);
        mergeSort(m, r);
        merge(l, m, r);
    }
}

int partition(int l, int r) {
    int i = l-1, j, x = B[r].q;
    for(j=l; j<r; ++j) {
        if(B[j].q <= x) {
            ++i;
            Card t = B[j]; B[j] = B[i]; B[i] = t;
        }
    }
    Card t = B[r]; B[r] = B[i+1]; B[i+1] = t;
    return i+1;
}

void quickSort(int l, int r) {
    int m;
    if(l < r) {
        m = partition(l, r);
        quickSort(l, m-1);
        quickSort(m+1, r);
    }   
}

int main()
{
    #ifdef LOCAL
        freopen("E:\\Temp\\input.txt", "r", stdin);
        freopen("E:\\Temp\\output.txt", "w", stdout);
    #endif

    int i, m, n;
    char t[10];
    scanf("%d", &n);
    for(i=0; i<n; ++i) {
        scanf("%s%d", t, &m);
        A[i].p = B[i].p = t[0];
        A[i].q = B[i].q = m;
    }

    mergeSort(0, n);
    quickSort(0, n-1);
    for(i=0; i<n; ++i) {
        if(A[i].p != B[i].p) {
            printf("Not stable\n");
            break;
        }
    }
    if(i == n) printf("Stable\n");
    for(i=0; i<n; ++i) {
        printf("%c %d\n", B[i].p, B[i].q);
    }

    return 0;
}

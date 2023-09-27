//#define LOCAL

#include <cstdio>

#define M 100010
int A[M];

int partition(int p, int r) {
    int i = p-1, a = A[r], j, t;
    for(j=p; j<r; ++j) {
        if(A[j] <= a) {
            ++i;
            t = A[i]; A[i] = A[j]; A[j] = t;
        }
    }
    A[r] = A[i+1]; A[i+1] = a;
    return i+1;
}

int main()
{
    #ifdef LOCAL
        freopen("E:\\Temp\\input.txt", "r", stdin);
        freopen("E:\\Temp\\output.txt", "w", stdout);
    #endif

    int i, n, q;
    scanf("%d", &n);
    for(i=0; i<n; ++i) scanf("%d", &A[i]);
    
    q = partition(0, n-1);
    for(i=0; i<n; ++i) {
        if(i) printf(" ");
        if(i == q) printf("[%d]", A[i]);
        else printf("%d", A[i]);
    }
    printf("\n");

    return 0;
}


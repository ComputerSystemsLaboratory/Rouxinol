#include <stdio.h>

#define NMAX 100000

int partition(int A[], int p, int r) {
    if(p==r){
        return p;
    }
    int i = p - 1, j = p, x = A[r], t;
    while (j < r) {
        if (A[j] > x) {
            // A[p,i]<=x
            j++;
        } else {
            // A[i,j)>x
            i++;
            t = A[i];
            A[i] = A[j];
            A[j] = t;
            j++;
        }
    }
    t = A[i + 1];
    A[i + 1] = A[r];
    A[r] = t;
    return i + 1;
}

int main() {
    int A[NMAX],n;
    scanf("%d",&n);
    for(int i=0;i<n;i++) {
        scanf("%d",&A[i]);
    }
    int k=partition(A,0,n-1);
    for(int i=0;i<n;i++) {
        if(i==k){
        printf("[%d]",A[i]);
        }else{
            printf("%d",A[i]);
        }
        if(i==n-1){
            printf("\n");
        }else{
            printf(" ");
        }
    }
    return 0;
}

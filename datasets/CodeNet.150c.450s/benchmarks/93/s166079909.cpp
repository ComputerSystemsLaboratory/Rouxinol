#include<stdio.h>
#include<cstdlib>

typedef struct{
    int n;
    char c;
    int order;
} T;

void QuickSort(T*, int, int);
int Partition(T*, int, int);
void BubbleSort(T*, int);

void Swap(T*, T*);

int main(){
    int i, j, n, stableflag = 1;
    T *tr, *cpy;
    
    scanf("%d", &n);
    tr = (T *)malloc(sizeof(T) * n);
    //cpy = (T *)malloc(sizeof(T) * n);
    for (i = 0; i < n; i++) {
        scanf(" %c %d", &tr[i].c, &tr[i].n);
        tr[i].order = i;
    }
    
    QuickSort(tr, 0, n-1);
    
    // see if stable or not
    for (i = 0; i < n-1; i++) {
        for (j = i; ; j++) {
            if (tr[j].n != tr[j+1].n) {
                i = j;
                break;
            }else if(tr[j].order > tr[j+1].order){
                stableflag = 0;
                i = n;
                break;
            }
        }
    }
    
    
    if (stableflag) {
        printf("Stable\n");
    }else{
        printf("Not stable\n");
    }
    
    for (i = 0; i < n; i++) {
        printf("%c %d\n", tr[i].c, tr[i].n);
    }
    
    return 0;
}


void QuickSort(T* A, int p, int r){
    int mid;
    if (p < r) { // when !(there are less than or equal to three elements)
        mid = Partition(A, p, r);
        QuickSort(A, p, mid-1);
        QuickSort(A, mid+1, r);
    }
}

// Partition from A[p] to A[r]
int Partition(T* A, int p, int r){
    int x = A[r].n, i = p-1, j;
    
    for (j = p; j < r; j++) {
        if (A[j].n <= x) {
            i++;
            Swap(&A[i], &A[j]);
        }
    }
    Swap(&A[i+1], &A[r]);
    
    return i+1;
}

void BubbleSort(T* A, int n){
    int i, j;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n-1 - i; j++) {
            if (A[j].n > A[j+1].n) {
                Swap(&A[j], &A[j+1]);
            }
        }
    }
}

void Swap(T *x, T *y){
    T tmp;
    tmp = *y;
    *y = *x;
    *x = tmp;
}



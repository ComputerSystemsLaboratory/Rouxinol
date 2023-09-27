#include <stdio.h>

int selectionSort(int A[], int n){
    int i, j, t, sw=0, min_i;
    for(i=0;i<n-1;i++){
        min_i=i;
        for(j=i;j<n;j++){
            if(A[j]<A[min_i]) min_i=j;
        }
        t=A[i];A[i]=A[min_i];A[min_i]=t;
        if(i!=min_i) sw++;
    }
    return sw;
}

int main(){
    int A[100], n, i, sw;
    scanf("%d", &n);
    for(i=0;i<n;i++)scanf("%d", &A[i]);
    sw=selectionSort(A,n);
    for(i=0;i<n;i++){
        if(i>0)printf(" ");
        printf("%d", A[i]);
    }
    printf("\n");
    printf("%d\n", sw);
    return 0;
}
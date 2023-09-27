#include <stdio.h>
#include <stdlib.h>
#define N 500010
int n;
int a[N];
void swap(int *a, int *b){
    int t;
    t = *a;
    *a= *b;
    *b = t;
}
void maxHeapify(int i){
    int l = 2*i;
    int r = 2*i+1;
    int maxi = i;
    if(l <= n && a[l] > a[maxi]){
        maxi = l;
    }
    if(r <= n && a[r] > a[maxi]){
        maxi = r;
    }
    if(maxi != i){
        swap(&a[i], &a[maxi]);
        maxHeapify(maxi);
    }
}
int main(){
    scanf("%d", &n);
    for(int i = 1; i <= n; i++) scanf("%d", &a[i]);
    for(int i = n/2; i >= 1; i--){
        maxHeapify(i);
    }
    for(int i = 1; i<= n; i++){
        printf(" %d", a[i]);
    }
    printf("\n");
    return 0;
}

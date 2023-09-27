#include <stdio.h>


void maxheapify(int a[], int i,int n){
    int l = 2*i;
    int r = 2*i+1;
    int largest = 0;
    //select
    if(l<=n && a[l]>a[i])
        largest = l;
    else largest = i;
    
    if(r<=n && a[r]>a[largest])
        largest = r;
    if(largest != i){
        int temp = a[i];
        a[i] = a[largest];
        a[largest] = temp;
        maxheapify(a,largest, n);
    }
}

void build_maxheap(int a[], int n){
    for(int i = n/2; i>=1; i--){
        maxheapify(a,i,n);
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n+1];
    for(int i = 1; i<=n; i++){
        scanf("%d",&a[i]);
    }
    build_maxheap(a, n);
    for(int i = 1; i<=n; i++){
        printf(" %d",a[i]);
    }printf("\n");
    return 0;
}

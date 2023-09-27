#include<stdio.h>
 
int left(int i){
    return 2*i;
}
int right(int i){
    return 2*i+1;
}
int parent(int i){
    return i/2;
}
 
int a[500000];
int heapSize;
void buildMaxHeap(void);
int main(){
 
    int i;
 
    scanf("%d",&heapSize);
    for(i=1;i<=heapSize;i++){
        scanf("%d",&a[i]);
    }
    buildMaxHeap();
    for(i=1;i<=heapSize;i++){
        printf(" %d",a[i]);
    }
    printf("\n");
    return 0;
}
 
void maxHeapify(int i){
 
    int l=left(i);
    int r=right(i);
    int largest=0,tmp=0;
    if(l<=heapSize && a[l]>a[i]){
        largest = l;
    }else{
        largest = i;
    }
    if(r<=heapSize && a[r]>a[largest]){
        largest = r;
    }
    if(largest != i){
        tmp=a[i];
        a[i]=a[largest];
        a[largest]=tmp;
        maxHeapify(largest);
    }
 
}
void buildMaxHeap(void){
    int i;
    for(i=heapSize/2;i>=1;i--){
        maxHeapify(i);
    }
}
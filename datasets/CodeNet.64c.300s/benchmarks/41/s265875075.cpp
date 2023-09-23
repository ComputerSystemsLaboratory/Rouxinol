#include<stdio.h>
#include<iostream>
using namespace std;
#define MAX 2000000
int H;
int A[MAX+1];
// void swap(int* a,int* b){
//     int* t;
//     t = a;
//     a = b;
//     b = t;
// }
void maxHeap(int x,int A[MAX+1]){
    int l,r,largest;
    l = 2*x;
    r = 2*x+1;
    if(l<=H && A[x]<A[l]){
        largest = l;
    }else{
        largest = x;
    }
    if(r<=H && A[largest]<A[r]){
        largest = r;
    }
    if(largest!=x){
        swap(A[largest],A[x]);
        maxHeap(largest,A);
    }
}
int main(){
    int A[MAX+1];
    scanf("%d",&H);
    for(int i=1;i<=H;i++){
        scanf("%d",&A[i]);
    }
    for(int i=H/2;i>=1;i--){
        maxHeap(i,A);
    }
    for(int i=1;i<=H;i++){
        printf(" %d",A[i]);
    }
    printf("\n");
}


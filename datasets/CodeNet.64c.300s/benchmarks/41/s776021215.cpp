#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)

void maxHeapify(int H[],int n,int i){
    int largest=i;
    if(i*2<=n&&H[largest]<H[i*2])largest=i*2;
    if(i*2+1<=n&&H[largest]<H[i*2+1])largest=i*2+1;
    if(largest!=i){
        swap(H[i],H[largest]);
        maxHeapify(H,n,largest);
    }
    return;
}

void buildHeap(int H[],int n){
    for(int s=n/2;s>=1;s--)maxHeapify(H,n,s);
    return;
}

int main(){
    int n;cin>>n;
    int Heap[n+1];
    rep(i,n)scanf("%d",&Heap[i+1]);
    buildHeap(Heap,n);
    rep(i,n)printf(" %d",Heap[i+1]);
    printf("\n");
}

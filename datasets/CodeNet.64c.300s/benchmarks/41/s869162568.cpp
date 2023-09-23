#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(int)n;i++)
#define ll long long
using namespace std;

int left(int index){
    return 2*index;
}

int right(int index){
    return 2*index+1;
}

int H;

void maxHeapify(int A[],int i){//iは節点番号
    int l=left(i);
    int r=right(i);
    int largest;
    
    largest= (l<=H && A[l]>A[i]) ? l:i;

    if(r<=H && A[r] > A[largest]) largest=r;

    if (largest!=i){
        swap(A[i],A[largest]);
        maxHeapify(A,largest);
    }
}

void buildMaxHeap(int A[]){
    for(int i=H/2;i>=1;i--)
        maxHeapify(A,i);
}

void print(int A[],int H){
    for(int i=1;i<=H;i++) printf(" %d",A[i]);
    printf("\n");
}

int main(){
    scanf("%d",&H);
    int A[500001]={0};

    for(int i=1;i<=H;i++){
        scanf("%d",&A[i]);
    }

    buildMaxHeap(A);
    print(A,H);

    return 0;
}

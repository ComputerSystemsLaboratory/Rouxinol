#include <bits/stdc++.h>
using namespace std;
#define INFTY (1<<30)

int H;
vector<int> A(2000001);

void maxHeapify(int i){
    int l=i*2;
    int r=i*2+1;
    int largest;
    if(l<=H&&A[l]>A[i]){
        largest=l;
    }
    else{
        largest=i;
    }
    if(r<=H&&A[r]>A[largest]){
        largest=r;
    }
    if(largest!=i){
        swap(A[i],A[largest]);
        maxHeapify(largest);
    }
}

void heapIncreaseKey(int i,int k){
    if(k<A[i]) return;
    A[i]=k;
    while(i>1&&A[i/2]<A[i]){
        swap(A[i],A[i/2]);
        i/=2;
    }
}

void insert(int k){
    H++;
    A[H]=-INFTY;
    heapIncreaseKey(H,k);
}

int heapExtractMax(){
    if(H<1) return -INFTY;
    int max=A[1];
    A[1]=A[H];
    H--;
    maxHeapify(1);
    return max;
}

int main(){
    H=0;
    while(1){
        char com[10];
        int x;
        scanf("%s%d",com,&x);
        if(com[0]=='i'){
            insert(x);
        }
        else if(com[1]=='x'){
            int y=heapExtractMax();
            cout<<y<<endl;
        }
        else break;
    }
}

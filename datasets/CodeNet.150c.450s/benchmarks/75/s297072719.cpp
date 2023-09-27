#include <bits/stdc++.h>
using namespace std;

void maxHeapify(vector<int> &A,int H,int i){
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
        maxHeapify(A,H,largest);
    }
}

void buildMaxHeap(vector<int> &A,int H){
    for(int i=H/2;i>0;i--){
        maxHeapify(A,H,i);
    }
}

int main(){
    int H;
    cin>>H;
    vector<int> A(500001);
    for(int i=1;i<H+1;i++){
        cin>>A[i];
    }

    buildMaxHeap(A,H);

    for(int i=1;i<H+1;i++){
        cout<<' '<<A[i];
    }
    cout<<endl;
}

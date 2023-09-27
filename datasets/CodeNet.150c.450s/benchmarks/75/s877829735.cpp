#include <iostream>
#include <algorithm>
using namespace std;
#define X 2000000

int H,A[X+1];

int parent(int i) {return i/2;}
int left(int i) {return 2*i;}
int right(int i) {return 2*i+1;}

void maxHeapify(int k){
    int l=left(k);
    int r=right(k);
    int largest;
    if(l<=H&&A[l]>A[k]) largest=l;
    else largest=k;
    if(r<=H&&A[r]>A[largest]) largest=r;
    if(largest!=k){
        swap(A[largest],A[k]);
        maxHeapify(largest);
    }
}

void buildMaxHeap(){
    for(int i=H/2;i>0;i--){
        maxHeapify(i);
    }
}


int main(void){
    cin >> H;
    
    for(int i=1;i<=H;i++){
        cin >> A[i];
    }
    
    buildMaxHeap();
    
    for(int i=1;i<=H;i++){
        cout << " " << A[i];
    }
    
    cout << endl;
    
    return 0;
}


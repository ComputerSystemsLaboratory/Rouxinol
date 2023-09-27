#include<iostream>
using namespace std;
#define MAX 2000000

int H,A[MAX+1];

void maxHeapify(int id){
    int l,r;
    l = 2*id;
    r = 2*id+1;
    int largestid = id;
    if (l <= H & A[l] > A[id]){
        largestid = l;
    }
    if (r <= H & A[r] > A[largestid]){
        largestid = r;
    }
    if(largestid != id){
        int swap = A[id];
        A[id] = A[largestid];
        A[largestid] = swap;
        maxHeapify(largestid);
    }
}

void buildMaxHeap(int H){
    int i;
    for(i = H/2; i >= 1; i--){
        maxHeapify(i);
    }
}
int main(){
    int i;
    cin >> H;
    for(i = 1; i <= H; i++){
        cin >> A[i];
    }
    buildMaxHeap(H);
    for(i = 1; i <= H; i++){
        cout << " " << A[i];
    }
    cout << endl;
}

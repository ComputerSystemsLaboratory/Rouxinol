#include <iostream>
#include <cmath>
using namespace std;

int left(int i){ return 2*i; }
int right(int i){return 2*i+1; }

void swap(int A[], int i, int j){
    int res = A[i];
    A[i] = A[j];
    A[j] = res;
}

void maxHeapify(int A[], int i, int n){
    int l = left(i);
    int r = right(i);
    int largest;
    if (l<=n && A[l] > A[i]){
        largest = l;
    } else {
        largest = i;
    }
    if (r<=n && A[r] > A[largest]) largest = r;
    if (largest != i){
        swap(A, i, largest);
        maxHeapify(A, largest, n);
    }
}

void buildMaxHeap(int A[], int n){
    for(int i=floor(n/2); i>0; --i){
        maxHeapify(A, i, n);
    }
}

int main(){
    int n; cin >> n;
    int heap[n+1];
    for(int i=1; i<=n; ++i){
        cin >> heap[i];
    }
    buildMaxHeap(heap, n);
    for(int i=1; i<=n; ++i){
        cout << " " << heap[i];
    }
    cout << endl;
}
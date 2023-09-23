#include <iostream>
#include <algorithm>
using namespace std;

const int MAX = 500000;
int n;

void maxHeapify(int *A,int i){
    int l = 2 * i, r = 2 * i + 1, largest;
    if(l <= n && A[l-1] > A[i-1]) largest = l;
    else largest = i;
    if(r <= n && A[r-1] > A[largest-1]) largest = r;
    if(largest != i){
        swap(A[i-1], A[largest-1]);
        maxHeapify(A, largest);
    }
}

void buildMaxHeap(int *A){
    for(int i=n/2;i>0;i--) maxHeapify(A, i);
}

int main(){
    while(cin >> n){
        int a[MAX];
        for(int i=0;i<n;i++) cin >> a[i];
        buildMaxHeap(a);
        for(int i=0;i<n;i++) cout << ' ' << a[i];
        cout << endl;
    }
}
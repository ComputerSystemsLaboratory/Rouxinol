#include <iostream>
#include <cstdio>
using namespace std;

#define MAX 500000

int A[MAX];
int n;

int left(int i) {
    return (i*2);
}

int right(int i) {
    return (i*2+1);
}
 
void maxHeapify(int *A, int i) {
    int l = left(i);
    int r = right(i);
    int largest;

    if(l<=n && A[l]>A[i]) {
        largest = l;
    }
    else {
        largest = i;
    }
    //printf("largest = %d\n", largest);
    if(r<=n && A[r]>A[largest]) {
        largest = r;
    }

    if(largest!=i) {
        //printf("swaping!\n");
        swap(A[i], A[largest]);
        maxHeapify(A, largest);
    }
}

void buildMaxHeap(int *A) {
    for(int i=n/2; i>0; i--) {
        maxHeapify(A, i);
    }
}

int main() {
    cin >> n;
    for(int i=1; i<n+1; i++) {
        cin >> A[i];
    }

    buildMaxHeap(A);

    cout << " ";
    for(int i=1; i<n+1; i++) {
        cout << A[i];
        if(i==n) {
            cout << endl;
        }
        else {
            cout << " ";
        }
    }

    return 0;
}

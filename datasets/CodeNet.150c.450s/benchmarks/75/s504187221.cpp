#include<iostream>
using namespace std;

int left(int i) {
    return i * 2;
}

int right(int i) {
    return i * 2 + 1;
}

void maxHeapify(int A[], int i, int H){
    int l = left(i);
    int r = right(i);
    int largest;
    if (l <= H && A[l] > A[i]) {
        largest = l;
    } else {
        largest = i;
    }
    if (r <= H && A[r] > A[largest]) {
        largest = r;
    }
    if (largest != i) {
        int tmp = A[i];
        A[i] = A[largest];
        A[largest] = tmp;
        maxHeapify(A, largest, H);
    }
}

void buildMaxHeap(int A[], int H){
    for (int i = H / 2; i >= 1; i--) {
        maxHeapify(A, i, H);
    }
}


int main(){
    int H;
    cin >> H;
    int A[H+1];
    int max = -2e9 - 1;
    for (int i = 1; i <= H; i++) {
        cin >> A[i];
        if (A[i] > max) max = A[i];
    }
    buildMaxHeap(A, H);
    for (int i = 1; i <= H; i++) {
        cout << " " << A[i];
    }
    cout << endl;

    return 0;
}
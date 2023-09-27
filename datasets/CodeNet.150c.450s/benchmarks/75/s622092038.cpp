#include<iostream>
#include<vector>
using namespace std;

void maxHeapify(vector<int>& A, int i){
    int largest = i;
    int left = i * 2;
    if (left < A.size() && A[left] > A[i]) {
        largest = left;
    }
    int right = left + 1;
    if (right < A.size() && A[right] > A[largest]) {
        largest = right;
    }
    if (i != largest) {
        swap(A[i], A[largest]);
        maxHeapify(A, largest);
    }
}

void buildHeap(vector<int>& A){
    int H = A.size() - 1;
    for (int i = H / 2; i >= 1; i--) {
        maxHeapify(A, i);
    }
}

int main(){
    int H;
    cin >> H;
    vector<int> A(H + 1);
    for (int i = 1; i <= H; i++) {
        cin >> A[i];
    }
    buildHeap(A);
    for (int i = 1; i <= H; i++){
        cout << " " << A[i];
    }
    cout << endl;
    return 0;
}
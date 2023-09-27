#include <iostream>
using namespace std;
#define M 1000000000

int mycount = 0;

void merge(int *A, int left, int mid, int right) {
    int n1 = mid - left;
    int n2 = right - mid;
    int i, j;

    int L[n1+1], R[n2+1];

    for(i=0; i<n1; i++) {
        L[i] = A[left+i];
    }
    for(i=0; i<n2; i++) {
        R[i] = A[mid+i];
    }

    L[n1] = M;
    R[n2] = M;
    i = 0;
    j = 0;

    for(int k=left; k<right; k++) {
        mycount++;
        if(L[i]<=R[j]) {
            A[k] = L[i];
            i++;
        }
        else {
            A[k] = R[j];
            j++;
        }
    }
}

void mergeSort(int *A, int left, int right) {
    if(left+1<right) {
        int mid = (left + right) / 2;
        mergeSort(A, left, mid);
        mergeSort(A, mid, right);
        merge(A, left, mid, right);
    }
}

int main() {
    int n;

    cin >> n;
    int A[n];
    for(int i=0; i<n; i++) {
        cin >> A[i];
    }
    mergeSort(A, 0, n);
    for(int i=0; i<n; i++) {
        cout << A[i];
        if(i<n-1) {
            cout << " ";
        }
    }
    cout << endl;
    cout << mycount << endl;

    return 0;
}

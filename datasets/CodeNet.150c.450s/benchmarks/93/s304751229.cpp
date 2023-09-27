#include <iostream>
#include <utility>
#include <cstring>
using namespace std;

#define M 1000000000
int mycount = 0;

struct card {
    char mark;
    int num;
};

void merge(card *A, int left, int mid, int right) {
    int n1 = mid - left;
    int n2 = right - mid;
    int i, j;

    card L[n1+1], R[n2+1];

    for(i=0; i<n1; i++) {
        L[i] = A[left+i];
    }
    for(i=0; i<n2; i++) {
        R[i] = A[mid+i];
    }

    L[n1].num = M;
    R[n2].num = M;
    i = 0;
    j = 0;

    for(int k=left; k<right; k++) {
        mycount++;
        if(L[i].num<=R[j].num) {
            A[k] = L[i];
            i++;
        }
        else {
            A[k] = R[j];
            j++;
        }
    }
}

void mergeSort(card *A, int left, int right) {
    if(left+1<right) {
        int mid = (left + right) / 2;
        mergeSort(A, left, mid);
        mergeSort(A, mid, right);
        merge(A, left, mid, right);
    }
}

int _partition(card *A, int p, int r) {
    int x = A[r].num;
    int i = p-1;
    for(int j=p; j<r; j++) {
        if(A[j].num<=x) {
            i++;
            swap(A[i], A[j]);
        }
    }
    swap(A[i+1], A[r]);
    return i+1;
}

void quickSort(card *A, int p, int r) {
    if(p<r) {
        int q = _partition(A, p, r);
        quickSort(A, p, q-1);
        quickSort(A, q+1, r);
    }
}

int main() {
    int n;
    int stable = 1;

    cin >> n;
    card A[n], B[n];

    for(int i=0; i<n; i++) {
        cin >> A[i].mark;
        cin >> A[i].num;
        B[i].mark = A[i].mark;
        B[i].num = A[i].num;
    }

    mergeSort(A, 0, n);
    quickSort(B, 0, n-1);

    for(int i=0; i<n; i++) {
        if(A[i].mark!=B[i].mark) {
            stable = 0;
        }
    }
    if(stable==1) {
        cout << "Stable\n";
    }
    else {
        cout << "Not stable\n";
    }
    for(int i=0; i<n; i++) {
        cout << B[i].mark << " " << B[i].num << endl;
    }

    return 0;
}

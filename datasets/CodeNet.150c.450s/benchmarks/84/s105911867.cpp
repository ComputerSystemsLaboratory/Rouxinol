#include<iostream>
#include<algorithm>
using namespace std;
#define INFTY 1000000001
int cnt;
long long int totalcnt;

void merge(int *A, int left, int mid, int right) {
    int na = mid - left;
    int nb = right - mid;
    int L[na+1], R[nb+1];
    for (int i=0; i<na; i++) {
        L[i] = A[left+i];
    }
    for (int i=0; i<nb; i++) {
        R[i] = A[mid+i];
    }
    L[na] = INFTY;
    R[nb] = INFTY;
    int i=0, j=0;
    long long int res = 0;
    for (int k = left; k<right; k++) {
        cnt ++;
        if (L[i] <= R[j]) {
            A[k] = L[i];
            i = i+1;
        } else {
            A[k] = R[j];
            j = j + 1;
            res += na-i;
        }
    }
    totalcnt += res;
}

void mergeSort(int *A, int left, int right) {
    if (left + 1 < right) {
        int mid = (left+right)/2;
        mergeSort(A,left, mid);
        mergeSort(A, mid, right);
        merge(A, left, mid, right);
    }
}

int main() {
    int n;
    cin >> n;
    int S[n];
    for (int i=0; i<n; i++) {
        cin >> S[i];
    }
    cnt = 0;
    totalcnt = 0;
    mergeSort(S, 0, n);
    cout << totalcnt << endl;
    return 0;
}


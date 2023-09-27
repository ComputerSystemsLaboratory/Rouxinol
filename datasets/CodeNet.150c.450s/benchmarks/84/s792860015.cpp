#include <iostream>
#include <bits/stdc++.h>
#define MAX_SIZE 500010
#define INFTY 2000000000
using namespace std;

int n, A[MAX_SIZE];
long long cmp = 0;
void merge(int left, int mid, int right) {
    int i, j, k, n1 = mid - left, n2 = right - mid;
    int L[n1+1], R[n2+1];
    for (i=0; i < n1; i++) L[i] = A[left + i];
    for (i=0; i < n2; i++) R[i] = A[mid + i];
    L[n1] = INFTY;
    R[n2] = INFTY;
    i = 0;
    j = 0;
    for (k=left; k < right; k++) {
        if (L[i] <= R[j]) {
            A[k] = L[i];
            i++;
        } else {
            A[k] = R[j];
            j++;
            cmp += n1 - i;
        }
    }
    return;
}

void mergeSort(int left, int right) {
    if (left + 1 < right) {
        int mid = (left + right) / 2;
        mergeSort(left, mid);
        mergeSort(mid, right);
        merge(left, mid, right);
    }
}


int main(){
    cin >> n;
    for (int i=0; i < n; i++) scanf("%d", &A[i]);
    mergeSort(0, n);
    cout << cmp << endl;
    // for (int i=0; i < n - 1; i++) printf("%d ", A[i]);
    // cout << A[n-1] << endl << cmp << endl;
    return 0;
} 

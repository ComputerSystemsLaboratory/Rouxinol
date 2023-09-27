#include <iostream>
using ll = long long;
using namespace std;

/* initialize */
int n, A[500000], L[300000], R[300000], count;
/* main */
void merge(int A[],int left, int right){
    int mid = (left + right) / 2;
    int n1 = mid - left;
    int n2 = right - mid;
    for (int i = 0; i < n1; ++i)  L[i] = A[left+i];
    for (int j = 0; j < n2; ++j) R[j] = A[mid+j];
    L[n1] = R[n2] = INT32_MAX;
    int i = 0, j = 0;
    for ( int k = left; k < right; k++ ){
        count++;
        if (L[i] <= R[j]) A[k] = L[i++];
        else A[k] = R[j++];
    }
}

void mergeSort(int A[], int n, int left, int right){
    if(left+1 < right){
        mergeSort(A, n, left,(left+right)/2);
        mergeSort(A, n, (left+right)/2, right);
        merge(A, left, right);
    }
}

int main() {
    cin >> n;
    for (int i = 0; i < n; ++i) cin >> A[i];
    mergeSort(A, n, 0, n);
    for (int j = 0; j < n; ++j) {
        if (j) cout << " ";
        cout << A[j];
    }
    cout << "\n";

    cout << count << "\n";
    return 0;
}

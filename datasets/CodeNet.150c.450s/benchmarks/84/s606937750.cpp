//The Number of Inversions
#include <iostream>
#include <climits>

using namespace std;

long long int cnt = 0;

void merge(int A[], int left, int mid, int right) {
    int n1 = mid - left;
    int n2 = right - mid;
    int L[n1 + 1], R[n2 + 1];
    for (int i = 0; i < n1; i++) L[i] = A[left + i];
    for (int i = 0; i < n2; i++) R[i] = A[mid + i];
    L[n1] = INT_MAX;
    R[n2] = INT_MAX;
    int l = 0, r = 0;
    for (int i = left; i < right; i++) {
        if (L[l] <= R[r]) A[i] = L[l++];
        else {
            A[i] = R[r++];
            cnt += n1 - l;
        }
    }
}

void mergeSort(int A[], int left, int right) {
    if(right > 1 + left) {
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
    for(int i = 0; i < n; i++) cin >> A[i];

    mergeSort(A, 0, n);

    cout << cnt << endl;
}

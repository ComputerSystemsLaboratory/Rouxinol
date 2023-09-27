#include <iostream>
using namespace std;

#define rep(i, n) for(int i = 0; i < (n); ++i)
#define MAX 1000000000

int merge(int A[], int left, int mid, int right) {
    int n1 = mid - left;
    int n2 = right - mid;
    int L[n1 + 1], R[n2 + 1];
    rep(i, n1) L[i] = A[left + i];
    L[n1] = MAX;
    rep(i, n2) R[i] = A[mid + i]; 
    R[n2] = MAX;
    
    int i = 0;
    int j = 0;
    for(int k = left; k < right; ++k) {
        if(L[i] <= R[j]) {
            A[k] = L[i];
            ++i;
        } else {
            A[k] = R[j];
            ++j;
        }
    }
    return right - left;
}

int mergeSort(int A[], int left, int right) {
    int mid;
    int cnt = 0;
    if(right - left > 1) {
        mid = (left + right) / 2;
        cnt += mergeSort(A, left, mid);
        cnt += mergeSort(A, mid , right);
        cnt += merge(A, left, mid, right);
    }
    return cnt;
}

int main(void) {
    int N;
    scanf("%d", &N);
    int A[N];
    rep(i, N) scanf("%d ", &A[i]);
    
    int cnt = mergeSort(A, 0, N);
    rep(i, N - 1) printf("%d ", A[i]);
    printf("%d\n%d\n", A[N - 1], cnt);
    
    return 0;
}

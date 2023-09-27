#include <iostream>
#include <cstdio>
using namespace std;

typedef long long llong;

#define N_MAX 200000
#define SENTINEL 2000000000
int leftA[N_MAX / 2 + 2], rightA[N_MAX / 2 + 2];

llong merge(int A[], int left, int mid, int right) {
    llong count = 0;
    int n1 = mid - left;
    int n2 = right - mid;
    for (int i = 0; i < n1; i++) leftA[i] = A[left + i];
    leftA[n1] = SENTINEL;
    int leftCur = 0;
    
    for (int i = 0; i < n2; i++) rightA[i] = A[mid + i];
    rightA[n2] = SENTINEL;
    int rightCur = 0;
    
    for (int i = left; i < right; i++) {
        if (leftA[leftCur] <= rightA[rightCur]) {
            A[i] = leftA[leftCur];
            leftCur++;
        } else {
            count += mid - left - leftCur;
            A[i] = rightA[rightCur];
            rightCur++;
        }
    }
    
    return count;
}

llong mergeSort(int A[], int N, int left, int right) {
    if (left + 1 < right) {
        int mid = (left + right) / 2;
        llong v1, v2, v3;
        v1 = mergeSort(A, N, left, mid);
        v2 = mergeSort(A, N, mid, right);
        v3 = merge(A, left, mid, right);
        return v1 + v2 + v3;
    } else {
        return 0;
    }
}

int main() {
    int N, A[N_MAX];
    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }
    
    llong ans = mergeSort(A, N, 0, N);
    cout << ans << endl;
    
    return 0;
}

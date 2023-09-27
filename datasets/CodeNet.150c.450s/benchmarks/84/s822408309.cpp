#include <stdio.h>
#define MAX 200000

using namespace std;
int temp[MAX];

long long merge(int A[], int lo, int mid, int hi) {
    for(int i = lo; i <= hi; i++) temp[i] = A[i];
    long long cnt = 0;
    int i = lo, j = mid + 1;
    for(int k = lo; k <= hi; k++) {
        if(i > mid) A[k] = temp[j++];
        else if(j > hi) A[k] = temp[i++];
        else if(temp[i] <= temp[j]) A[k] = temp[i++];
        else {
            A[k] = temp[j++];
            cnt = cnt + mid+1 - i;
        }
    }
    return cnt;
}

long long mergeSort(int A[], int lo, int hi) {
    if(lo >= hi) return 0;
    long long v1, v2, v3;
    int mid = (lo + hi) / 2;
    v1 = mergeSort(A, lo, mid);
    v2 = mergeSort(A, mid+1, hi);
    v3 = merge(A, lo, mid, hi);
    return v1 + v2 + v3;
}


int main()
{
    int n, A[MAX];
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }
    long long res = mergeSort(A, 0, n-1);
    printf("%lld\n", res);

    return 0;
}
#include<stdio.h>

#define INFTY 2000000000
typedef long long llong;

int L[200000/2+2], R[200000/2+2];


llong merge(int* A, int left, int mid, int right){
    llong cnt = 0;
    int n1 = mid - left;
    int n2 = right - mid;
    for(int i=0; i<n1; i++) L[i] = A[left + i];
    for(int i=0; i<n2; i++) R[i] = A[mid + i];
    L[n1] = R[n2] = INFTY;
    int i = 0;
    int j = 0;
    for(int k=left; k<right; k++){
        if(L[i] <= R[j]){
            A[k] = L[i];
            i++;
        }
        else {
            A[k] = R[j];
            j++;
            cnt += n1-i;
        }
    }
    return cnt;
}

llong mergeSort(int* A, int left, int right){
    int mid;
    llong v1, v2, v3;
    if(left + 1 < right){
        mid = (left + right)/2;
        v1 = mergeSort(A, left, mid);
        v2 = mergeSort(A, mid, right);
        v3 = merge(A, left, mid, right);
        return v1 + v2 + v3;
    }else return 0;
}

int main(){

    int n;
    scanf("%d", &n);
    int A[200000];
    for(int i=0; i<n; i++) scanf("%d", &A[i]);

    llong ans = mergeSort(A, 0, n);
    printf("%lld\n", ans);

    return 0;
}

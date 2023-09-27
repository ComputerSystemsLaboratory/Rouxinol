#include <iostream>
#include <stdio.h>
using namespace std;

int cnt=0;
const int MAX=500000;
int L[MAX/2+2], R[MAX/2+2];

inline void merge(int A[], int left, int mid, int right){
    int n1 = mid - left;
    int n2 = right - mid;
    for(int i=0; i<n1; i++){
        L[i] = A[left+i];
    }
    for(int i=0; i<n2; i++){
        R[i] = A[mid+i];
    }
    L[n1] = 2000000000;
    R[n2] = 2000000000;

    int i=0, j=0;
    for(int k=left; k<right; k++){
        cnt++;
        if(L[i] <= R[j]){
            A[k] = L[i];
            i++;
        } else {
            A[k] = R[j];
            j++;
        }
    }
}

inline void merge_sort(int A[], int left, int right){
    if (left+1 < right){
        int mid = (left+right)/2;
        merge_sort(A, left, mid);
        merge_sort(A, mid, right);
        merge(A, left, mid, right);
    }
}




int main() {

    int n;
    cin >> n;
    int A[n];
    for(int i=0; i<n; i++){
        scanf("%d",&A[i]);
    }

    merge_sort(A, 0, n);
    for(int i=0; i<n; i++){
        if(i==0) cout << A[i];
        else cout << " " << A[i];
    }
    cout << "\n" << cnt << "\n";

    return 0;
}
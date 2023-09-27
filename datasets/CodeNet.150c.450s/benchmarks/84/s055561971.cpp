#include <iostream>
using namespace std;

long long cnt=0;
const int MAX=200000;
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
        if(L[i] <= R[j]){
            A[k] = L[i];
            i++;
        } else {
            A[k] = R[j];
            j++;
            cnt += n1-i;
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
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    int A[n];
    for(int i=0; i<n; i++){
        cin >> A[i];
    }

    merge_sort(A, 0, n);
    cout << cnt << "\n";

    return 0;
}
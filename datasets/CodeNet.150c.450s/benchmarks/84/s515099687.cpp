#include<iostream>
using namespace std;

#define MAX 1000000001
long long ans = 0;

void merge(int A[], int left, int mid, int right){
    int n1 = mid-left;
    int n2 = right-mid;
    int L[n1+1];
    int R[n2+1];
    for(int i = 0; i < n1; i++) L[i] = A[left+i];
    for(int i = 0; i < n2; i++) R[i] = A[mid+i];
    L[n1] = MAX;
    R[n2] = MAX;

    int li = 0;
    int ri = 0;

    for(int i = left; i < right; i++){
        if(L[li] <= R[ri]){
            A[i] = L[li];
            li++;
        }else{
            A[i] = R[ri];
            ri++;
            ans += n1-li;
        }
    }
}

void mergeSort(int A[], int left, int right){
    if(left+1 < right){
        int mid = (left+right) / 2;
        mergeSort(A, left, mid);
        mergeSort(A, mid, right);
        merge(A, left, mid, right);
    }
}

int main(){
    int n;
    cin >> n;
    int A[n];
    for(int i = 0; i < n; i++)  cin >> A[i];
    mergeSort(A, 0, n);
    cout << ans << endl;
    return 0;
}

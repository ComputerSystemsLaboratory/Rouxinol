#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;

void merge(int *A, int left, int mid, int right, int *count){
    int n1 = mid-left;
    int n2 = right-mid;
    int L[500001], R[500001];
    for(int i=0;i<n1;i++) L[i]=A[left+i];
    for(int i=0;i<n2;i++) R[i]=A[mid+i];
    L[n1] = INT32_MAX;
    R[n2] = INT32_MAX;

    int i=0, j=0;
    for(int k=left;k<right;k++){
        (*count)++;
        if(L[i]<=R[j]){
            A[k]=L[i];
            i++;
        }else{
            A[k]=R[j];
            j++;
        }
    }
}

void mergeSort(int *A, int left, int right, int *count){
    if(left+1<right){
        int mid = (left+right)/2;
        mergeSort(A, left, mid, count);
        mergeSort(A, mid, right, count);
        merge(A, left, mid, right, count);
    }
}

int main(){
    int n, S[500000];
    cin >> n;
    for(int i=0;i<n;i++) cin >> S[i];

    int count = 0;
    mergeSort(S, 0, n, &count);
    cout << S[0];
    for(int i=1;i<n;i++) cout << ' ' << S[i];
    cout << endl << count << endl;
    
    return 0;
}

#include<iostream>
using namespace std;
#define INFTY 2000000000

int A[500000];
int cnt;

void merge(int A[], int left, int mid, int right){
    int n1 = mid-left;
    int n2 = right-mid;
    
    int i;
    int j;
    
    int L[n1+1], R[n2+1];
    for(i=0; i<n1; i++){
        L[i] = A[left+i];
    }
    for(i=0; i<n2; i++){
        R[i] = A[mid+i];
    }
    L[n1] = INFTY;
    R[n2] = INFTY;
    
    i=0;
    j=0;
    
    for(int k=left; k<right; k++){
        cnt++;
        if(L[i] <= R[j]){
            A[k] = L[i];
            i += 1;
        }else{
            A[k] = R[j];
            j += 1;
        }
    }
}

void mergeSort(int A[], int left, int right){
    if(left+1 < right){
        int mid = (left+right)/2;
        mergeSort(A,left,mid);
        mergeSort(A, mid, right);
        merge(A,left,mid,right);
    }
}

int main(){
    int n;
    cin >> n;
    cnt = 0;
    
    for(int i=0; i<n; i++){
        cin >> A[i];
    }
    
    mergeSort(A, 0, n);
    
    for(int i=0; i<n; i++){
        if(i) cout << ' ';
        cout << A[i];
    }
    cout << endl;
    cout << cnt << endl;
    
    return 0;
}
#include<iostream>
using namespace std;
#define MAX 200000
#define SENTINEL 2000000000

struct Set { int value, cnt_r; };
Set L[MAX/2 + 2], R[MAX/2 + 2];

void merge(Set A[], int left, int right, int mid){
    int n1 = mid - left;
    int n2 = right - mid;
    int idx_l, idx_r;
    
    for(int i = 0; i < n1; i++) L[i] = A[left + i];
    for(int i = 0; i < n2; i++) R[i] = A[mid + i];
    L[n1].value = SENTINEL;
    R[n2].value = SENTINEL;
    
    idx_l = 0;
    idx_r = 0;
    for(int i = left; i < right; i++){
        if(L[idx_l].value <= R[idx_r].value){
            A[i] = L[idx_l];
            idx_l++;
        }
        else{
            A[i] = R[idx_r];
            A[i].cnt_r += n1 - idx_l;
            idx_r++;
        }
    }
}

void mergeSort(Set A[], int left, int right){
    if(left + 1 < right){
        int mid = (left + right ) / 2;
        mergeSort(A, left, mid);
        mergeSort(A, mid, right);
        merge(A, left, right, mid);
    }
}

int main(){
    int n;
    long long reverse;
    Set A[MAX];
    reverse = 0;
    
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> A[i].value;
        A[i].cnt_r = 0;
    }
    
    mergeSort(A, 0, n);
    
    for(int i = 0; i < n; i++){
        reverse += A[i].cnt_r;
    }
    
    cout << reverse << endl;
    
    return 0;
}



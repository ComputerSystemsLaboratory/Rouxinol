#include<iostream>
#include <utility>
using namespace std;
#define MAX 100000
#define SENTINEL 100000001

struct Set{ char sign; int n; };
Set A[MAX], B[MAX], L[MAX], R[MAX];
bool flag = true;;

void merge(Set A[], int left, int right, int mid){
    int n1 = mid - left;
    int n2 = right - mid;
    int idx_l, idx_r;
    
    for(int i = 0; i < n1; i++) L[i] = A[left + i];
    for(int i = 0; i < n2; i++) R[i] = A[mid + i];
    L[n1].n = SENTINEL;
    R[n2].n = SENTINEL;
    
    idx_l = 0;
    idx_r = 0;
    for(int i = left; i < right; i++){
        if(L[idx_l].n <= R[idx_r].n){
            A[i] = L[idx_l];
            idx_l++;
        }
        else{
            A[i] = R[idx_r];
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

int  partition(int p, int r){
    int x = A[r].n;
    int i = p - 1;
    Set t;
    
    for(int j = p; j < r; j++){
        if(A[j].n <= x){
            i++;
            t = A[j];
            A[j] = A[i];
            A[i] = t;
        }
    }
    
    t = A[r];
    A[r] = A[i + 1];
    A[i + 1] = t;
    
    return i+1;
}

void quickSort(int p, int r){
    int q;
    
    if(p < r){
        q = partition(p, r);
        quickSort(p, q-1);
        quickSort(q+1, r);
    }
}

int main(){
    int n;
    cin >> n;
    
    for(int i = 0; i < n; i++){
        cin >> A[i].sign >> A[i].n;
        B[i] = A[i];
    }
    
    quickSort(0, n-1);
    mergeSort(B, 0, n);
    
    for(int i = 0; i < n; i++){
        if(A[i].sign != B[i].sign) flag = false;
    }
    
    if(flag) cout << "Stable" << endl;
    else cout << "Not stable" << endl;
    for(int i = 0; i < n; i++) cout << A[i].sign << " " << A[i].n << endl;
    
    return 0;
}

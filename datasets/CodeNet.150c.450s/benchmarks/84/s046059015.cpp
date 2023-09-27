#include<iostream>
#include<climits>
using namespace std;

void marge(int *, int, int ,int);
void margeSort(int *, int, int);

long long cnt = 0;

int main() {
    
    int a[200000];
    
    int n;
    cin>>n;
    for(int i = 0; i < n; i++) cin>>a[i];

    margeSort(a, 0, n);
    
    cout<<cnt<<endl;
    
    return 0;
}

void marge(int *A, int left, int mid, int right) {
    int n1 = mid - left;
    int n2 = right - mid;
    int L[n1+1], R[n2+1];
    int i, j;
    for(i = 0; i < n1; i++) L[i] = A[left + i];
    for(j = 0; j < n2; j++) R[j] = A[mid+j];
    
    L[n1] = INT_MAX;
    R[n2] = INT_MAX;
    
    i = 0;
    j = 0;
    
    for(int k = left; k < right; k++) {
        if (L[i] <= R[j]) {
            A[k] = L[i];
            i++;
        } else {
            A[k] = R[j];
            j++;
            cnt += n1 - i;
        }
    }
}

void margeSort(int *a, int left, int right) {
    if(left+1 < right) {
        int mid = (left + right) /2;
        margeSort(a, left, mid);
        margeSort(a, mid, right);
        marge(a, left, mid, right);
    }
}


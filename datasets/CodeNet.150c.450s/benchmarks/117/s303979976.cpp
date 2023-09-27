#include <iostream>
#include <vector>
#include <algorithm>

#define Rep(i, x, n) for(int i=x; i<n; i++)
#define rep(i, n) REP(i, 0, n)

#define INFTY 1000000007

using namespace std;

int n;
int A[7000000];
int cnt=0;

void merge(int left, int mid, int right){

    int n1 = mid - left;
    int n2 = right - mid;
    int L[n1+1], R[n2+1];
    for(int i=0; i<n1; i++) L[i] = A[left+i];
    for(int i=0; i<n2; i++) R[i] = A[mid+i];

    L[n1] = INFTY;
    R[n2] = INFTY;
    int i = 0, j = 0;

    for(int k=left; k<right; k++){
        if(L[i] <= R[j]){
            A[k] = L[i];
            i++;
        }else{
            A[k] = R[j];
            j++;
        }
        cnt++;
    }
}

void mergeSort(int left, int right){
    if(left+1 < right){
        int mid = (left + right) / 2;
        mergeSort(left, mid);
        mergeSort(mid, right);
        merge(left, mid , right);
    }
}


int main(){

    cin >> n;
    for(int i=0; i<n; i++) cin >> A[i];
    int l, r;
    l = 0;
    r = n;

    mergeSort(l, r);
    for(int i=0; i<n-1; i++) cout << A[i] << " ";
    cout << A[n-1] << endl;
    cout << cnt << endl;

    return 0;
}
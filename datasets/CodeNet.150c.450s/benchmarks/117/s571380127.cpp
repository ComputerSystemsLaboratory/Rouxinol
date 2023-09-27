#include <iostream>
#include <string>
using namespace std;

const int INFTY = 2e9;

int A[500001], L[250001], R[250001], cnt = 0;

void merge(int left, int mid, int right){
    int n1 = mid - left;
    int n2 = right - mid;
    for(int i = 0; i < n1; i++) L[i] = A[left+i];
    for(int i = 0; i < n2; i++) R[i] = A[mid+i];
    L[n1] = INFTY;
    R[n2] = INFTY;
    int i = 0, j = 0;
    for(int k = left; k < right; k++){
        if(L[i] <= R[j]){
            A[k] = L[i];
            i++;
            cnt++;
        }
        else{
            A[k] = R[j];
            j++;
            cnt++;
        }
    }
}

void mergeSort(int left, int right){
    if(left+1 < right){
        int mid = (left + right) / 2;
        mergeSort(left, mid);
        mergeSort(mid, right);
        merge(left, mid, right);
    }
}

int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) cin >> A[i];
    mergeSort(0, n);
    for(int i = 0; i < n; i++) cout << A[i] << (i == n-1 ? '\n' : ' ');
    cout << cnt << endl;
    return 0;
}

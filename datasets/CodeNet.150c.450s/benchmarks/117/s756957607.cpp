#include<iostream>

using namespace std;

long INFTY = 20000000000;
int cnt;

void merge(long A[], long left, long mid, long right){
    long n1 = mid -left;
    long n2 = right - mid;
    long L[n1 + 1];
    long R[n2 + 1];
    for(int i = 0; i < n1; i++){
        L[i] = A[left + i];
    }
    for(int i = 0; i < n2; i++){
        R[i] = A[mid + i];
    }
    L[n1] = INFTY;
    R[n2] = INFTY;
    int i = 0;
    int j = 0;
    for(long k = left; k < right; k++){
        cnt++;
        if(L[i] <= R[j]){
            A[k] = L[i];
            i = i + 1;
        }else{
            A[k] = R[j];
            j = j + 1;
        }
    }
}

void mergeSort(long A[], long left, long right){
    if(left + 1 < right){
        long mid = (left + right) / 2;
        mergeSort(A, left, mid);
        mergeSort(A, mid, right);
        merge(A, left, mid, right);
    }
}

int main(){
    int n;
    cin >>n;
    cnt = 0;
    long A[n];
    for(int i = 0; i < n; i++){
        cin >>A[i];
    }
    mergeSort(A, 0, n);

    for(int i = 0; i < n; i++){
        if(i)cout << " ";
        cout << A[i];
    }
    cout << endl;

    cout << cnt << endl;

    return 0;


}

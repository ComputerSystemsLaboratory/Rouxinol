#include <iostream>
using namespace std;
int cnt=0;

void merge(int *A, int left, int mid, int right){
    int n1 = mid-left;
    int n2 = right-mid;
    int *L,*R;
    L = new int[n1+1];
    R = new int[n2+1];

    for(int i=0;i<n1;i++)
        L[i] = A[left+i];
    for(int i=0;i<n2;i++)
        R[i] = A[mid+i];
    
    L[n1] = 1000000001;
    R[n2] = 1000000002;
    int i = 0;
    int j = 0;

    for(int k=left;k<right;k++){
        cnt++;
        if(L[i]<=R[j]){
            A[k] = L[i];
            i++;
        }
        else{
            A[k] = R[j];
            j++;
        }
    }

    delete[] L;
    delete[] R;
}

void mergeSort(int *A, int left, int right){
    if(left+1 < right){
        int mid = (left+right)/2;
        mergeSort(A,left,mid);
        mergeSort(A,mid,right);
        merge(A,left,mid,right);
    }
} 

int main(){
    int n, *S;
    cin >> n;
    S = new int[n];
    for(int i=0;i<n;i++)
        cin >> S[i];
    mergeSort(S,0,n);

    cout << S[0];
    for(int i=1;i<n;i++)
        cout << " " << S[i];
    cout << endl << cnt << endl;

    delete[] S;
    return 0;
}

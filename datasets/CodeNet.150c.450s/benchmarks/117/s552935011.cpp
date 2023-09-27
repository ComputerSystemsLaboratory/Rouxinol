#include<iostream>
#define SENTINEL 1000000009; 
#define MAX 500000
using namespace std;
int A[MAX];
int _count=0;


void Merge(int left, int mid, int right){
    int n1 = mid-left;
    int n2 = right - mid;
    int L[n1], R[n2];
    for(int i=0;i<=n1-1; i++)L[i]=A[left+i];
    for(int i=0;i<=n2-1; i++)R[i]=A[mid+i];
    L[n1]=SENTINEL;
    R[n2]=SENTINEL;
    int i=0;
    int j=0;
    for(int k=left;k<=right-1;k++){
        _count+=1;
        if(L[i]<=R[j]){
            A[k]=L[i];
            i++;
        }
        else {
            A[k]=R[j]; j++;
            }
    }
}

void MergeSort(int left, int right){
    if (left+1<right){
        int mid=(left+right)/2;
        MergeSort(left, mid);
        MergeSort(mid, right);
        Merge(left,mid,right);
    }
}


int main(){
    int n;
    cin >> n;
    for(int i=0;i<=n-1;i++){
        cin >> A[i];
    }
    MergeSort(0, n);
    for(int i=0;i<=n-1; i++){
        cout << A[i];
        if (i==n-1){
            cout << "\n";
        }
        else cout <<' ';
    }
    cout << _count << "\n";
}

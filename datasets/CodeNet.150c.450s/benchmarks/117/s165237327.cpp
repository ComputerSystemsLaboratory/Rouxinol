#include<iostream>
using namespace std;
#define MAX 500000
#define SENTINEL 2000000000
int L[MAX/2+2],R[MAX/2+2];
int cnt;

void merge(int A[],int left,int right,int mid){
    for(int i=0;i<mid-left;i++) L[i] = A[left+i];
    for(int i=0;i<right-mid;i++) R[i] = A[mid+i];
    L[mid-left]=SENTINEL;R[right-mid]=SENTINEL;
    int i=0,j=0;
    for(int k=left;k<right;k++){
        cnt++;
        if(L[i] <= R[j]){
            A[k]=L[i++];
        }else{
            A[k]=R[j++];
        }
    }
}

void mergeSort(int A[],int left,int right){
    if(left+1<right){
        int mid=(left+right)/2;
        mergeSort(A,left,mid);
        mergeSort(A,mid,right);
        merge(A,left,right,mid);
    }
}

int main(){
    int A[MAX],n;
    cnt = 0;
    cin >> n;
    for(int i=0;i<n;i++)cin >> A[i];
    mergeSort(A,0,n);
    for(int i=0;i<n;i++){
        cout << ((i>0)?" ":"") << A[i];
    }
    cout << endl << cnt << endl;
    return 0;
}


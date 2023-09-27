#include <iostream>
using namespace std;
#define MAX 500000
#define Sentinel 1997032800

int L[MAX/2+2], R[MAX/2+2];
int cnt;

void merge(int A[], int n, int left, int mid, int right){
    int n1 = mid - left;
    int n2 = right - mid;
    for (int i = 0;i<n1;i++){
        L[i] = A[left+i];
    }
    for (int i = 0;i<n2;i++){
        R[i] = A[mid+i];
    }
    int i = 0,j = 0;
    L[n1] = R[n2] = Sentinel;
    for (int k = left; k<right;k++){
        cnt++;
        if(L[i]<=R[j]){
            A[k] = L[i++];
        }
        else{
            A[k] = R[j++];
        }
    }
}

void mergesort(int A[],int n,int left,int right){
    if (left+1<right){
        int mid = (right+left)/2;
        mergesort(A,n,left,mid);
        mergesort(A,n,mid,right);
        merge(A,n,left,mid,right);
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    int A[MAX],n,i;
    cnt = 0;
    cin>>n;
    for (i = 0;i<n;i++){cin>>A[i];}
    
    mergesort(A,n,0,n);
    for(i = 0;i<n;i++){
        if(i){cout<<" ";}
        cout<<A[i];
    }
    cout<<endl;
    cout<<cnt<<endl;
    return 0;
}
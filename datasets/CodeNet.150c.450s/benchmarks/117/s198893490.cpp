#include <bits/stdc++.h>
using namespace std;
#define MAX 500005
#define BMAX 250005
#define INFI 2100000000
int cnt = 0;
int S[MAX];
int L[BMAX], R[BMAX];

void Merge(int left, int mid, int right){
    int n1 = mid-left;
    int n2 = right-mid;
    for(int i=0;i<n1;i++){
        L[i] = S[left+i];
    }
    for(int i=0;i<n2;i++){
        R[i] = S[mid+i];
    }
    L[n1] = INFI;
    R[n2] = INFI;
    int i=0,j=0;
    for(int k=0;k<n1+n2;++k){
        cnt++;
        if(L[i]<=R[j]){
            S[left+k] = L[i];
            i++;
        }
        else{
            S[left+k] = R[j];
            j++;
        }
    }
}

void MergeSort(int left, int right){
    if(left+1 < right){
        int mid = (left+right)/2;
        MergeSort(left,mid);
        MergeSort(mid,right);
        Merge(left,mid,right);
    }
}

int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;++i) scanf("%d",&S[i]);
    MergeSort(0,n);
    for(int i=0;i<n-1;++i){
        printf("%d ",S[i]);
    }
    printf("%d\n",S[n-1]);
    printf("%d\n",cnt);
    return 0;

}


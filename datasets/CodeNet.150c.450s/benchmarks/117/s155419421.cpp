#include<bits/stdc++.h>
using namespace std;
#define MAX 500000
#define SENTINEL 2000000000
int L[MAX/2+2],R[MAX/2+2];
int cnt;
void merge(int A[],int n,int l,int mid,int r) {
    int n1 = mid - l;
    int n2 = r - mid;
    for(int i = 0;i < n1;++i) L[i] = A[l + i];
    for(int i = 0;i < n2;++i) R[i] = A[mid + i];
    L[n1] = R[n2] = SENTINEL;
    int i = 0,j = 0;
    for(int k = l;k < r;++k) {
        cnt++;
        if(L[i] <= R[j]) A[k] = L[i++];
        else A[k] = R[j++];
    }
}
void mergesort(int A[],int n,int l,int r) {
    if(l + 1 < r) {
        int mid = (l+r)/2;
        mergesort(A,n,l,mid);
        mergesort(A,n,mid,r);
        merge(A,n,l,mid,r);
    }
    return;
}
int main() {
    int A[MAX],n,i;
    cnt = 0;
    scanf("%d",&n);
    for(int i = 0;i < n;++i) scanf("%d",&A[i]);
    mergesort(A,n,0,n);
    for(int i = 0;i < n;++i) {
        if(i) printf(" ");
        printf("%d",A[i]);
    } 
    printf("\n");
    printf("%d\n",cnt);
    return 0;
}

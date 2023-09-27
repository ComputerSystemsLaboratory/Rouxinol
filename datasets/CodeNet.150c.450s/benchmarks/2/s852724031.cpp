#include<bits/stdc++.h>
using namespace std;

int partion(int *A, int p, int r){
    int x = A[r];
    int i,j,k;
    i=p-1;
    for(j=p;j<r;j++){
        if(A[j]<=x){
            i++;
            swap(A[j], A[i]);
        }
    }

    swap(A[i+1], A[r]);
    return i+1;
}

int main(){
    int n, A[1000000];
    scanf("%d", &n);
    for(int k=0;k<n;k++) scanf("%d", &A[k]);

    int m=partion(A, 0, n-1);
    for(int j=0;j<n;j++){
        if(j==m) cout<<"["<<A[j]<<"]"<<" ";
        else if(j==n-1) cout<<A[j]<<endl;
        else cout<<A[j]<<" ";
    }

    return 0;
}

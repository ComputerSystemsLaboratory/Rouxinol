#include<iostream>
#include<stdio.h>
#include<algorithm>
#define rep(i,n) for(int i = 0; i < n; i++)
#define rep3(i,k,n) for(int i = k; i < n; i++)
using namespace std;

int n,A[100000];

int parti(int A[],int p,int r){
    int x=A[r];
    int i=p-1;
    rep3(j,p,r){
        if(A[j]<=x){
            i++;
            swap(A[i],A[j]);
        }
    }
    swap(A[i+1],A[r]);
    return i+1;
}

int main(void){
    cin >> n;
    rep(i,n) scanf("%d",&A[i]);

    int q = parti(A, 0, n-1);

    rep(i,n){
        if(i) cout << " ";
        if(i==q) cout << "[";
        cout << A[i];
        if(i==q) cout << "]";
    }
    cout << endl;

    return 0;
}
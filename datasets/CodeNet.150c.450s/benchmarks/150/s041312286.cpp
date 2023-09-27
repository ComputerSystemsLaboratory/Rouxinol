#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;
using ll = long long;
static const int MAX=10000;

void countsort(int A[],int n){
    int B[MAX+1]={0},C[n];
    rep(i,n)B[A[i]]++;
    rep(i,MAX)B[i+1]+=B[i];
    rep(i,n){
        int k=A[i];
        B[k]--;
        C[B[k]]=k;
    }
    rep(i,n)A[i]=C[i];
    return;
}

int main(){
    int n;cin>>n;
    int A[n];
    rep(i,n)scanf("%d",&A[i]);
    countsort(A,n);
    rep(i,n){
        if(i!=0)printf(" ");
        printf("%d",A[i]);
    }
    printf("\n");
}

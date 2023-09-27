#include <bits/stdc++.h>
using namespace std;
#define MAX 10000

void count_sort(int A[],int n){
    int i,k;
    int B[n],C[MAX+1]={0};
    for(i=0;i<n;i++){
        C[A[i]]++;
    }
    k=0;
    for(i=0;i<MAX+1;i++){
        if(C[i]>0){
            C[i]+=k;
            k=C[i];
        }
    }
    for(i=n-1;i>=0;i--){
        B[C[A[i]]-1]=A[i];
        C[A[i]]--;
    }
    for(i=0;i<n;i++)A[i]=B[i];
    
}

int main(){
    int n,i;
    scanf("%d",&n);
    int A[n];
    for(i=0;i<n;i++){
        scanf("%d",&A[i]);
    }
    count_sort(A,n);
    for(i=0;i<n;i++){
        if(i!=0)printf(" ");
        printf("%d",A[i]);
    }
    printf("\n");
}



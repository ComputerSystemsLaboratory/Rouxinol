#include <bits/stdc++.h>
using namespace std;
#define SENTINEL 2000000000
#define llong long long

llong merge(int A[],int left,int midth,int right){
    int i,j,k,n1,n2;
    llong ans=0;
    n1=midth-left;
    n2=right-midth;
    int B[n1],C[n2];
    B[n1]=C[n2]=SENTINEL;
    for(i=0;i<n1;i++)B[i]=A[left+i];
    for(i=0;i<n2;i++)C[i]=A[midth+i];
    i=j=0;
    for(k=left;k<right;k++){
        if(B[i]>C[j]){A[k]=C[j];ans+=n1-i;j++;}
        else{A[k]=B[i];i++;}
    }
    return ans;
}

llong merge_sort(int A[],int left,int right){
    llong ans=0;
    if(left+1<right){
        int midth=(left+right)/2;
        ans+=merge_sort(A,left,midth);
        ans+=merge_sort(A,midth,right);
        ans+=merge(A,left,midth,right);
    }
    return ans;
}

llong count_inversion(int A[],int n){
    llong i;
    i=merge_sort(A,0,n);
    return i;
}

int main(){
    llong i;
    int n;
    scanf("%d",&n);
    int A[n];
    for(i=0;i<n;i++)scanf("%d",&A[i]);
    i=count_inversion(A,n);
    printf("%ld\n",i);
}

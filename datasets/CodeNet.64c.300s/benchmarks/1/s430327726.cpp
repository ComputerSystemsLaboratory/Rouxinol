#include <bits/stdc++.h>
using namespace std;

int partition_sort(int A[],int n){
    int x=A[n-1],i=-1,j=0;
    while(j<n){
    if(A[j]>x){
        j++;
    }
    else{
        i++;
        swap(A[i],A[j]);
        j++;
    }
    }
    return i;
}

int main(){
    int n;
    cin>>n;
    int A[n];
    for(int i=0;i<n;i++){
        scanf("%d",&A[i]);
    }
    int s=partition_sort(A,n);
    for(int i=0;i<n-1;i++){
        if(s==i)printf("[");
        printf("%d",A[i]);
        if(s==i)printf("]");
        printf(" ");
    }
    printf("%d\n",A[n-1]);
}



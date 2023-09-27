#include <stdio.h>
#define N 100005
  
int A[N];
 
int Partition(int *,int,int);
 
int main(){
    int n,i,x;
      
    scanf("%d",&n);
      
    for(i=0;i<n;i++){
        scanf("%d",&A[i]);
    }
      
      
    x=Partition(A,0,n-1);
      
    for(i=0;i<x;i++){
        printf("%d ",A[i]);
    }
    printf("[%d] ",A[x]);
      
    for(i=x+1;i<n-1;i++){
        printf("%d ",A[i]);
    }
    printf("%d\n",A[n-1]);
      
    return 0;
}
 
int Partition(int A[],int p,int r){
    int x,i,j,tmp;
      
    x=A[r];
    i = p-1;
      
    for(j=p;j<r;j++){
        if (A[j] <= x){
            i=i+1;
            tmp=A[j];
            A[j]=A[i];
            A[i]=tmp;
        }
    }
  
        tmp=A[i+1];
        A[i+1]=A[r];
        A[r]=tmp;
      
    return i+1;
}
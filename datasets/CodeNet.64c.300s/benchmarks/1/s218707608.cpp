#include<stdio.h>

int partition(int *,int,int);
void swap(int *,int *);

int main(){
  int n,i;
  int A[100001];
  int t;
  
  scanf("%d",&n);
  
  for(i=0;i<n;i++)
    scanf("%d",&A[i]);

  t=partition(A,0,n-1);
  
  for(i=0;i<n;i++){
    if(i==n-1) printf("%d\n",A[i]);
    else if(i==t) printf("[%d] ",A[i]);
    else printf("%d ",A[i]);
  }
  return 0;
}

int partition(int *A,int p,int r){
  int x,i,j;
  
  x=A[r];
  i=p-1;
  
  for(j=p;j<r;j++){
    if(A[j]<=x){
      i=i+1;
  
    swap(&A[i],&A[j]);
    }
    
  }
 
  swap(&A[i+1],&A[r]);
 
  return i+1;

}

void swap(int *a,int *b){
  int temp;
  temp=*a;
  *a=*b;
  *b=temp;
  return;
}




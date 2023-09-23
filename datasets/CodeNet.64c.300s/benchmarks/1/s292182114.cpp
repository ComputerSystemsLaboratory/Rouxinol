#include<iostream>
#include<cstdio>
using namespace std;


int Partition(int A[],int p,int r){
  int x = A[r];
  int i = p-1;
  for(int j=p;j<r;j++){
    if(A[j] <= x){
      i = i+1;
      int h=A[i];
      A[i] = A[j];
      A[j] = h;
    }
  }
  int h = A[i+1];
  A[i+1] = A[r];
  A[r] = h;



  return i+1;
}


int main(){
  int n,index;
  while(scanf("%d",&n) != EOF){
    int *A = new int[n+1];
    for(int i=1;i<=n;i++){
      scanf("%d",&A[i]);
    }
    index = Partition(A,1,n);
    for(int i=1;i<=n;i++){
      if(index == i)printf("[");
      printf("%d",A[i]);
      if(index == i)printf("]");
      if(i != n)printf(" ");
    }
    printf("\n");
    delete [] A;
  }
  return 0;
}
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <cstring>
#include <algorithm>


 int A[100000];
 int n;

  int partition(int p,int r){
    int x;
    int i,j;
    int t;

    x = A[r];
    i = p-1;

     for(j=p;j<r;j++){
       if(A[j]<=x){
         i=i+1;
       t=A[i];
       A[i]=A[j];
       A[j]=t;
       }
     }
       t=A[i+1];
       A[i+1]=A[r];
       A[r]=t;

    return i+1;
  };







  int main(){

    int q;

     scanf("%d",&n);

    for(int i=0;i<n;i++){
      scanf("%d",&A[i]);
    }

     q = partition(0,n-1);

    for(int i=0;i<n;i++){
      if(i)printf(" ");
      if(i==q){
        printf("[%d]",A[i]);
      }
      else{
        printf("%d",A[i]);
      }
    }
    printf("\n");
    return 0;
  }
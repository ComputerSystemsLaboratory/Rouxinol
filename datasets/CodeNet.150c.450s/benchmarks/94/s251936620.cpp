#include <stdio.h>

int main(){
 int N,A[100];
 scanf("%d",&N);
 for(int i=0;i<N;i++){
  scanf("%d",&A[i]);
 }
 int flag = 1,cnt=0;
 while(flag){
  flag = 0;
  for(int j = N-1;j>= 1;j--){
   if( A[j] < A[j-1]){
    int a=A[j];
    A[j] = A[j-1];
    A[j-1]=a;
    flag = 1;
    cnt++;
   }
  }
 }
 for(int i=0;i<N-1;i++){
  printf("%d ",A[i]);
 }
 printf("%d\n%d\n",A[N-1],cnt);
 return 0;
}
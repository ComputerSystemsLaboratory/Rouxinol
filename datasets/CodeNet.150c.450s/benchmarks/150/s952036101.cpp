#include<stdio.h>
 
int A[2000000];
int B[2000000];
 
void Counting_Sort(int k){
  int i,j;
  int C[10001];
  for(i=0;i<10001;i++)C[i]=0;
  for(j=0;j<k;j++)C[A[j]]++;
  for(i=1;i<10001;i++)C[i]+=C[i-1];  
  for(j=k-1;j>=0;j--){
    C[A[j]]--;
    B[C[A[j]]]=A[j];
  }
}
 
int main(){
  int n,i;
  
  scanf("%d",&n);
  for(i=0;i<n;i++)scanf("%d",&A[i]);
  Counting_Sort(n);
  for(i=0;i<n;i++){
    if(i)printf(" ");
    printf("%d",B[i]);
  }
  printf("\n");
  return 0;
}
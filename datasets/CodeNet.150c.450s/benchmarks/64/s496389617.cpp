#include <stdio.h>
int solve(int ,int);

int A[2000];
int n;
int main() {
  int i;
  int m;
  int j;
  int q;
  int mi[2000];
  

  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%d",&A[i]);
  }
  scanf("%d",&q);
  for(i=0;i<q;i++){
    scanf("%d",&mi[i]);
  }
  for(i=0;i<q;i++){
    if(solve(0,mi[i])==1) printf("yes\n");
    else printf("no\n");
  }
  
  return 0;
}

int solve(int i,int mi){

  int res;
  if(mi==0) return 1;
  if(i>=n) return 0;

  res= solve(i+1,mi) || solve(i+1,mi-A[i]);
  return res;
}
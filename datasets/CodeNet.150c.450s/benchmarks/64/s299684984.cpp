//ALDS1_5A
#include <cstdio>

int n;

int solve(int i,int m,int* A){
 if(m==0) return 1;
 if(i>=n) return 0;
 int res=solve(i+1,m,A) || solve(i+1,m-A[i],A);
 return res;
}

int main(){
 int q,M,i;
 scanf("%d",&n);
 int A[n];
 for(i=0;i<n;i++) scanf("%d",&A[i]);
 scanf("%d",&q);
 for(i=0;i<q;i++){
  scanf("%d",&M);
  if(solve(0,M,A)) printf("yes\n");
  else printf("no\n");
 }
 return 0;
}
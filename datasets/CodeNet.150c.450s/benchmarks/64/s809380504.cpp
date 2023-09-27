#include <stdio.h>

int n,q,A[20];

int solve(int i,int m){
  int res;
  if(m == 0) return 1;
  if(i >= n) return 0;
  if(res = solve(i+1,m)) return res;
  if(res = solve(i+1,m-A[i])) return res;;
  return res;
}


int main(){
  int i,M[200],check,a;
  scanf("%d",&n);
  for(i=0; i<n; i++)  scanf("%d",&A[i]);
  scanf("%d",&q);
  for(i=0; i<q; i++)  scanf("%d",&M[i]);

  for(i=0; i<q; i++){
    check = solve(0,M[i]);
    if(check == 1) printf("yes\n");
    else if(check == 0) printf("no\n");
  }

  return 0;

}
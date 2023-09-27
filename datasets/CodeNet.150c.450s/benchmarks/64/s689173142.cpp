#include<stdio.h>
 
#define TRUE 1
#define FALSE 0
 
int solve(int,int);
 
int n , A[20];
 
int solve(int i,int m){
  int res;
 
  if( m == 0 ){
    return TRUE;
  }
 
  if( i >= n ){
    return FALSE;
  }
 
  res = solve(i+1, m) || solve(i+1, m-A[i]);
 
  return res;
}
 
 
int main(){
  int q,j,m;
 
  scanf("%d",&n);
 
  for( j = 0 ; j < n ; j++ ) {
    scanf("%d",&A[j]);
  }
 
  scanf("%d",&q);
 
  for( j = 0 ; j < q ; j++) {
    scanf("%d",&m);
    if( solve( 0 , m ) == 1 ){
      printf("yes\n");
    }else printf("no\n");
  }
 
  return 0;
}
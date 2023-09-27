#include <stdio.h>


int a[22] = {};

int n;



int solve(int i,int m){

  if(m == 0) return 1;
  else if(i > n) return 0;

  return (solve(i + 1,m) || solve(i + 1, m - a[i]));
  
}

int main(){
  
  int q,m,i;
  
 scanf("%d",&n);
 for(i = 0;i < n;i++) scanf("%d",&a[i]);

 
 scanf("%d",&q); 
 for(i = 0;i < q;i++){
    scanf("%d",&m);
    if(solve(0,m) == 1) printf("yes\n");
    else printf("no\n");
  }
  
}
  
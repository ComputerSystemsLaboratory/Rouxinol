#include <stdio.h>


int main()
{
  //n<=20, q<=200
  
  int n, q, i, j, num, m;
  int A[2001]={1};
  
  scanf("%d", &n);
  for(i=0; i<n; i++){
    scanf("%d", &num);
    for(j=2000-num; j>=0; j--){
      if(A[j])
        A[j+num] = 1;
    }
  }
    
  scanf("%d", &q);
  for(i=0; i<q; i++){
    scanf("%d", &m);
    if(A[m])
      puts("yes");
    else
      puts("no");
  }
  
  return 0;
}
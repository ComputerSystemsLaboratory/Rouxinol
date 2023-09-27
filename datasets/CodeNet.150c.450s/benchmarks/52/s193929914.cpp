#include <stdio.h>
int main()
{
  int train[100],i=1,n;
  while(scanf("%d",&n)!=EOF){
    if(n!=0){
      train[i]=n;
      i++;
    }else {
      printf("%d\n",train[i-1]); 
      i--;
    }
  }
  return 0;
}
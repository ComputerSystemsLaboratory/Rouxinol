#include <stdio.h>
int main()
{
  int n,f=0,s=0,t=0,i;
  for(i=0;i<3;i++){
    scanf("%d",&n);
    if(n>f){
      t=s;
      s=f;
      f=n;
    }
    else if(n>s){
      t=s;
      s=n;
    }
    else t=n;
  }
  printf("%d %d %d\n",t,s,f);
  return 0;
}
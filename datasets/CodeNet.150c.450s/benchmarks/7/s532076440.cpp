#include <stdio.h>
int main()
{
  int f=0,s=0,t=0,m;
  while(scanf("%d",&m)!=EOF){
    if(m>f){
      t=s;
      s=f;
      f=m;
    }else if(m>s){
      t=s;
      s=m;
    }else if(m>t){
      t=m;
    }
  }
  printf("%d\n%d\n%d\n",f,s,t);
  return 0;
}
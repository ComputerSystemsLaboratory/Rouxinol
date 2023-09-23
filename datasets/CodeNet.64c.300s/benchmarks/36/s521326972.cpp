#include <stdio.h>
int main(void)
{
  int a,b,c,tmp;
  scanf("%d %d %d",&a,&b,&c);
  int s[3]={a,b,c};
  if(s[0]>s[1]){
    tmp=s[0],s[0]=s[1],s[1]=tmp;
  }
  if(s[1]>s[2]){
    tmp=s[1],s[1]=s[2],s[2]=tmp;
  }
  if(s[0]>s[1]){
    tmp=s[0],s[0]=s[1],s[1]=tmp;
  }
    printf("%d %d %d\n",s[0],s[1],s[2]);
    return 0;
}


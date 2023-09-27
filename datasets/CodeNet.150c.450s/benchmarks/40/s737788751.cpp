#include <stdio.h>

int main(){
  int dice[7];
  char com[1000];
  int i,j,k;
  int n,e,w,s,top;

  for(i=1;i<=6;i++) scanf("%d",&dice[i]);
  scanf("%s",com);
  top=1;
  n=5;
  s=2;
  w=4;
  e=3;



  for(i=0;com[i]!='\0';i++){
    if(com[i]=='N'){
      n=top;
      top=s;
      s=7-n;
    }else if(com[i]=='S'){
      s=top;
      top=n;
      n=7-s;
    } else if(com[i]=='W'){
      w=top;
      top=e;
      e=7-w;
    }else if(com[i]=='E'){
      e=top;
      top=w;
      w=7-e;
    }
  }
  printf("%d\n",dice[top]);

  return 0;
}
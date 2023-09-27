#include <stdio.h>
#include <string.h>

int main(){
  char t[1000],h[1000];
  int n,p[2]={0,0},i;

  scanf("%d",&n);

  for(i=0; i<n; ++i){
    scanf("%s%s",t,h);
    if(strcmp(t,h)==0){
      p[0] += 1;
      p[1] += 1;
    }else if(strcmp(t,h) < 0)
      p[1] += 3;
    else
      p[0] += 3;
  }

  printf("%d %d\n",p[0],p[1]);


  return 0;
}


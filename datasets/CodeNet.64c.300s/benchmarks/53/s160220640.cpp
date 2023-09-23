#include <stdio.h>
int main(){
  int a,b,c,d,m;
  m=0;
  scanf("%d%d%d",&a,&b,&c);
  for(d=b-a;d>=0;d--){
    if(c%(d+a)==0){
      ++m;
    }
  }
  printf("%d\n",m);
  return 0;
}
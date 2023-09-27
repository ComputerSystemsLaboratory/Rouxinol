#include <cstdio>
int main(){
 int d1,d2,d;
 while(true){
  scanf("%d %d",&d1,&d2);
  if ((d1==0) && (d2==0)) break;
  if (d1>d2) {
    d=d1; d1=d2; d2=d;
  }
  printf("%d %d\n",d1,d2);
 }
 return 0;
}
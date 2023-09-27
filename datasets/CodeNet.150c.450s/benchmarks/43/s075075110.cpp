#include <stdio.h>
 
int main(){
 int n;
 scanf("%d",&n);
 while(n){
  int a=0,b=0,aa,bb;
  for(int i=n;i>0;i--){
   scanf("%d %d",&aa,&bb);
   if(aa>bb){
    a+=aa+bb;
   }else if(aa<bb){
    b+=aa+bb;
   }else{
    a+=aa;
    b+=bb;
   }
  }
  printf("%d %d\n",a,b);
  scanf("%d",&n);
 }
}
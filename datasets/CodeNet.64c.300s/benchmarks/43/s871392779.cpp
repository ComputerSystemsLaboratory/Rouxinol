#include<stdio.h>
int main(){
  int a,b,c,d,e,f,g,h,suma,sumb;
 
  scanf("%d %d %d %d\n %d %d %d %d",&a,&b,&c,&d,&e,&f,&g,&h);
   
  suma=a+b+c+d;
  sumb=e+f+g+h;
   
  if(suma >= sumb){
    printf("%d\n",suma);
  }
  else{
    printf("%d\n",sumb);
      }
   
  return 0;
   
}
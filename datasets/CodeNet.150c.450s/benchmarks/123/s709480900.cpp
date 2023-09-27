#include <stdio.h>

int sosuu(int a){
  int i;
  if(a==2)return 1;
  else if(a%2==0)return 0;
  for(i=3;i*i<=a;i++){
    if(a%i==0)return 0;
  }
  return 1;
}

int main(){
  int a,b,k=0,i;
  scanf("%d",&a);
  for(i=0;i<a;i++){
    scanf("%d",&b);
    if(sosuu(b)==1)k++;
  }
  printf("%d\n",k);
  return 0;
}
#include<stdio.h>

int main(){

  int a[4]={0};
  int b[4]={0};
  int suma=0,sumb=0;

  scanf("%d %d %d %d",&a[0],&a[1],&a[2],&a[3]);
  scanf("%d %d %d %d",&b[0],&b[1],&b[2],&b[3]);

  for(int i=0;i<4;i++){
    suma+=a[i];
    sumb+=b[i];
  }

  if(suma<=sumb){
    printf("%d\n",sumb);
  }
  else {
    printf("%d\n",suma);
  }

  return 0;
}
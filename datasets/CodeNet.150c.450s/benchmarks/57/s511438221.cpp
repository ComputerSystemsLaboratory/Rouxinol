#include<stdio.h>
int main(){
  char n;
  int a,b,j=0,i=0,data[1000];
  while(1){
    scanf("%d %c %d",&a,&n,&b);
    if(n=='?') break;
    if(n=='+'){
      data[i]=a+b;
    }
    if(n=='-'){
      data[i]=a-b;
    }
    if(n=='*'){
      data[i]=a*b;
    }
    if(n=='/'){
      data[i]=a/b;
    }
    i++;
    j++;
  }
  for(i=0;i<j;i++){
    printf("%d\n",data[i]);
  }
  return(0);
}
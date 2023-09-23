#include<stdio.h>
int main(){
  int n=1; 
  long long int a=0;
  long long int b=0;
  while(scanf("%d",&a) != EOF){
    scanf("%d",&b);
    a+=b;
    while(a/10!=0){
      n++;
      a=a/10;
    }
    printf("%d\n",n);
    n=1;
  }
  return(0);
}
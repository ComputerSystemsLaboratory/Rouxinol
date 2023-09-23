#include <stdio.h>
  
int main(){
 int n,primes=0;
 scanf("%d", &n);
 for(int i=0;i<n;i++){
  int num;
  scanf("%d", &num);
  int w=2;
  for(;w*w<=num;w++){
   if(!(num%w)){
    primes--;
    break;
   }
  }
  primes++;
 }
 printf("%d\n",primes);
 return 0;
}
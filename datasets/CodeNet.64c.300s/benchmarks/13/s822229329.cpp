#include<stdio.h>

int main(){
  int i,input,fibonacciA=1,fibonacciB=1,fibonacciC=1;
  scanf("%d",&input);
  if(input == 0 || input == 1){
    printf("%d\n",fibonacciA);
  }else{
    for(i=1;i<input;i++){
      fibonacciC = fibonacciB + fibonacciA;
      fibonacciA = fibonacciB;
      fibonacciB = fibonacciC;
    }
    printf("%d\n",fibonacciC);
  }
  return 0;
}
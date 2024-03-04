#include<stdio.h>
main(){
  int a,b,n;
  int i,k,j;
  while(scanf("%d %d",&a,&b)!=EOF){
    n=a+b;
    if(0<n && n<10){
      printf("1\n");
    }
    else if(n<100){
      printf("2\n");
    }
    else if(n<1000){
      printf("3\n");
    }
    else if(n<10000){
      printf("4\n");
    }
    else if(n<100000){
      printf("5\n");
    }
    else if(n<1000000){
      printf("6\n");
    }
  }
  return 0;
}
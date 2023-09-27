#include<stdio.h>
int main(){
  int a,b,c,i=0;
  while(1){
    scanf("%d %d %d",&a,&b,&c);
    if(a==-1&&b==-1&&c==-1) break;
    i=0;
    if(a==-1||b==-1){
      printf("F\n");
      i++;
    }
    if(a+b>=80&&i==0){
      printf("A\n");
    }
    if(a+b>=65&&a+b<80&&i==0){
      printf("B\n");
    }
    if(a+b>=50&&a+b<65&&i==0){
      printf("C\n");
    }
    if(a+b>=30&&a+b<50&&i==0){
      if(c>=50){
	printf("C\n");
      } else{
	printf("D\n");
      }
    }
    if(a+b<30&&i==0){
      printf("F\n");
    }
  }
  return(0);
}
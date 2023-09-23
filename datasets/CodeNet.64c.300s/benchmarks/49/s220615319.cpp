#include<stdio.h>
int main(){
  int a,b,c,count;
  while(1){
    if(scanf("%d%d",&a,&b)==EOF)break;
    count=0;
    c=a+b;
    while(c!=0){
      c=c/10;
  
	count++;
    } 
    printf("%d\n",count);
  }  
  return 0;
}
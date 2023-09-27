#include<stdio.h>
#include<ctype.h>
int main(){
  int sum;
  char c;
  while(1){
    c=0,sum=0;
    while((c=getchar())!='\n'){
      sum+=c-48;
    }
    if(sum!=0)printf("%d\n",sum);
    else break;
  }
  return 0;
}
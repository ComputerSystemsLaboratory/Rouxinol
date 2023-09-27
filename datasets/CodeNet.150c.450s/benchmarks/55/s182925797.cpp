#include <stdio.h>
char number[1001];
int main(){
  int x,sum;
  sum=1;
  while(sum!=0){
    sum=0;
    while((x=getchar())!='\n'){
      sum+=x-'0';
    }
    if(sum==0){
      break;
    }
    printf("%d\n",sum);
  }
  return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 100

int main(){

  int x,top=0;
  char s[N];
  int num[N];

  while(scanf("%s",s)!=EOF){
    if(s[0] == '+'){
      num[top-2] = num[top-2] + num[top-1];
      top--;
    }else if(s[0] == '-'){
      num[top-2]=num[top-2]-num[top-1];
      top--;
    }else if(s[0] == '*'){
      num[top-2]=num[top-2]*num[top-1];
      top--;
    }else{
      num[top]=atoi(s);
      top++;
    }
  }
  printf("%d\n",num[0]);
  return 0;
}
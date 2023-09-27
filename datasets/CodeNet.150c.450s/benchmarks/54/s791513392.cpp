#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main(){
  char W[10],T[1000];
  int count=0,i;
  scanf("%s",W);
  while(1){
    scanf(" %s",T);
    if(strcmp(T,"END_OF_TEXT")==0){
      break;
    }
    for(i=0;W[i]!='\0';i++){
      T[i]=tolower(T[i]);
    }
    if(strcmp(T,W)==0){
      count++;
    }
  }
  printf("%d\n",count);
  return 0;
}
#include<stdio.h>
#include<ctype.h>
int main(){
  int bun,index = 65,n,i,alp[26] = {0};
  scanf("%d",&bun);
  while((bun = getchar()) != EOF){
    if(isalpha(bun)){
    bun = tolower(bun);
      i = bun - 97;
      alp[i] ++;
    }else if(isspace){
    }else{
      break;
    }
  }
  for(n = 0;n < 26;n++){
    printf("%c : %d\n",index+n+32,alp[n]);
  }
  return 0;
}
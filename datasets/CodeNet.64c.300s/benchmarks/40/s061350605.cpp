#include<cstdio>
int main(){
  char in;
  while(1){
    scanf("%c",&in);
    if(in >= 'A' && in <= 'Z') in += 32;
    else if(in >= 'a' && in <= 'z') in -= 32;
    if(in == '\n') break;
    printf("%c",in);
  }
  printf("\n");
  return 0;
}
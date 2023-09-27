#include <stdio.h>
#include <ctype.h>
int main(){
  int i,count[26]={0};
  char ch;
  while((ch=getchar())!=EOF){
    ch=tolower(ch);
    count[ch-'a']++;
  }
  for(i=0;i<26;i++){
    printf("%c : %d\n",'a'+i,count[i]);
  }
  return 0;
}
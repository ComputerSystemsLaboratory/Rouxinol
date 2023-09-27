#include<stdio.h>
#include<ctype.h>
int main(){
  int c;
  int cnt[500]={0};
  while(c!=EOF){
    c=getchar();
    if(islower(c)){
      cnt[c]++;
    }else{
      cnt[c+32]++;
    }
  }
  for(c='a';c<='z';c++){
    printf("%c : %d\n",c,cnt[c]);
  }
  return 0;
}
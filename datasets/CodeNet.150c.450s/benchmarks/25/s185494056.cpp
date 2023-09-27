#include<stdio.h>
#include<ctype.h>
int main(){
  int i,c;
  int cnt[128]={0};
  while((c=getchar())!=EOF){
    if(isupper(c)){
      c=tolower(c);
    }
    cnt[c]++;
    i++;
  }
  for(i=97;i<=122;i++){
    printf("%c : %d\n",i,cnt[i]);
  }
 return 0;
}
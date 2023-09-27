#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main(){
  int i,wlen,tlen,cnt=0;
  char W[10]={0};
  char T[1000]={0};
  scanf("%s",W);
  wlen=strlen(W);
  for(i=0;i<wlen;i++){
    if(isupper(W[i])){
      W[i]=tolower(W[i]);
    }
  }
  while(1){
    scanf("%s",T);
    if(strcmp(T,"END_OF_TEXT")==0)break;
    tlen=strlen(T);
    for(i=0;i<tlen;i++){
      if(isupper(T[i])){
        T[i]=tolower(T[i]);
      }
    }
    if(strcmp(W,T)==0){
      cnt++;
    }
  }
  printf("%d\n",cnt);
  return 0;
}